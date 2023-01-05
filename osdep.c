/*
 * QEMU low level functions
 *
 * Copyright (c) 2003 Fabrice Bellard
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#ifdef HOST_SOLARIS
#include <sys/types.h>
#include <sys/statvfs.h>
#endif

#include "qemu-common.h"
#include "sysemu.h"

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#elif defined(_BSD)
#include <stdlib.h>
#else
#include <malloc.h>
#endif

void *get_mmap_addr(unsigned long size)
{
    return NULL;
}

void qemu_free(void *ptr)
{
    free(ptr);
}

void *qemu_malloc(size_t size)
{
    return malloc(size);
}

#if defined(_WIN32)
#ifdef UNDER_CE
#include "my-memset.h"

extern int EnableSwapFile;

void *qemu_memalign(size_t alignment, size_t size)
{
	return memalign(alignment,size);	//qemu_malloc
}
static int SwapFileNum=1;
#define NUM_SWAPFILES 1024
static HANDLE SwapHandles[NUM_SWAPFILES];
static wchar_t* SwapNames[NUM_SWAPFILES];
static void* SwapPtrs[NUM_SWAPFILES];
static int SwapSizes[NUM_SWAPFILES];

HANDLE CreateSwapFile(size_t size)
{
	wchar_t MyPath[MAX_PATH];
	wchar_t Buff[MAX_PATH];
	HANDLE H;
	wchar_t *t;
	GetModuleFileNameW(0,MyPath,MAX_PATH);
	t=wcsrchr(MyPath,L'\\');
	if(t)
		*t=0;
	wcscat(MyPath,L"\\swap");
//	wcscat(MyPath,L"\\..\\..");
	CreateDirectory(MyPath,0);
	wsprintf(Buff,L"%s\\%d.swp",MyPath,SwapFileNum);
	H=CreateFile(Buff,GENERIC_READ|GENERIC_WRITE,
		0,0,CREATE_ALWAYS,0,0);
	SetFilePointer(H,size,0,FILE_BEGIN);
	SetEndOfFile(H);
	CloseHandle(H);
	H=CreateFileForMapping(Buff,GENERIC_READ|GENERIC_WRITE,
		0,0,OPEN_EXISTING,/*FILE_FLAG_RANDOM_ACCESS*/ 0,0);
	if(H==INVALID_HANDLE_VALUE)
		return H;
	SwapNames[SwapFileNum]=_wcsdup(Buff);
	return H;	
}

void CleanSwapFiles()
{
	int i;
	printf("Deleting swap files. ");
	for(i=0; i<SwapFileNum; i++)
		if(SwapHandles[i])
		{
		   	VirtualFree(SwapPtrs[i], SwapSizes[i], MEM_DECOMMIT);
		    UnmapViewOfFile(SwapPtrs[i]);
			CloseHandle(SwapHandles[i]);
			if(SwapNames[i])
			{
				DeleteFile(SwapNames[i]);
			}
			SwapNames[i]=0;
			SwapHandles[i]=0;
		}
    puts("Done.");
}

void FlushSwapFiles()
{
	DWORD Start=GetTickCount();
	int i;
	if(!EnableSwapFile)
	    return;

   	for(i=NUM_SWAPFILES-1; i>=0; i--)
   	{
		if(SwapPtrs[i])
		{
			if(SwapSizes[i]<1024*1024)
			{
				FlushViewOfFile(SwapPtrs[i], SwapSizes[i]);
			} else
			{
				int j;
				for(j=0; j<SwapSizes[i]; j+=1024*1024)
				{
					FlushViewOfFile((char*)SwapPtrs[i]+j, 1024*1024);
					if(GetTickCount()-Start>3000)
						return;
				}
			}
		}
	}
}                     

void *qemu_vmalloc(size_t size)
{
	HANDLE H=(HANDLE)INVALID_HANDLE_VALUE;
	HANDLE HF=(HANDLE)INVALID_HANDLE_VALUE;
/*	size=((size+65535)/65536)*65536; */
	if(EnableSwapFile)
	{
		HF=CreateSwapFile(size);
	}
	H=CreateFileMapping(HF,0,PAGE_READWRITE,0,size,0);
	if(H==0)
	{
        fprintf(stderr, "Could not create swap file (%d bytes, err=%x), retrying without file\n",size,GetLastError());
        fflush(stderr);
		CloseHandle(HF);
		if(SwapNames[SwapFileNum])
		{
			DeleteFile(SwapNames[SwapFileNum]);
		}
		SwapNames[SwapFileNum]=0;
		H=CreateFileMapping(INVALID_HANDLE_VALUE,0,PAGE_READWRITE,0,size,0);
		if(H==0)
		{
    	    fprintf(stderr, "Could not CreateFileMapping %x\n",GetLastError());
        	fflush(stderr);
			return malloc(size);	// last attempt that would definitely fail
		}
	}
	if(SwapFileNum<NUM_SWAPFILES)	// FIXME, enlarge buffer
	{
		SwapHandles[SwapFileNum++]=H;
		SwapSizes[SwapFileNum-1]=size;
	}
	SwapPtrs[SwapFileNum-1]=MapViewOfFile(H,FILE_MAP_ALL_ACCESS,0,0,0);
//	VirtualProtect(SwapPtrs[SwapFileNum-1],SwapSizes[SwapFileNum-1],PAGE_EXECUTE_READWRITE,0);
	if(SwapPtrs[SwapFileNum-1]==0)
	{
        fprintf(stderr, "Could not MapViewOfFile %x\n",GetLastError());
        fflush(stderr);
		return malloc(size);	// last attempt that would definitely fail
	}
	if(!EnableSwapFile)
            memset(SwapPtrs[SwapFileNum-1], 0, size);
	return SwapPtrs[SwapFileNum-1];
}

void qemu_vfree(void *ptr)
{
   	int i;
   	for(i=0; i<NUM_SWAPFILES; i++)
   	{
		if(SwapPtrs[i]==ptr)
		{
		   	VirtualFree(SwapPtrs[i], SwapSizes[i], MEM_DECOMMIT);
		    UnmapViewOfFile(SwapPtrs[i]);
			CloseHandle(SwapHandles[i]);
			if(SwapNames[i])
			{
				DeleteFile(SwapNames[i]);
			}
			SwapNames[i]=0;
			SwapHandles[i]=0;
			SwapPtrs[i]=0;
		}
    }
    while(SwapFileNum>1 && SwapPtrs[i]==0)
		SwapFileNum--;
}
#else
void *qemu_memalign(size_t alignment, size_t size)
{
	return memalign(alignment,size);
//    return VirtualAlloc(NULL, size, MEM_COMMIT, PAGE_READWRITE); // bug here, memory is freed by qemu_free() and not qemu_vfree
}

void *qemu_vmalloc(size_t size)
{
    /* FIXME: this is not exactly optimal solution since VirtualAlloc
       has 64Kb granularity, but at least it guarantees us that the
       memory is page aligned. */
    return VirtualAlloc(NULL, size, MEM_COMMIT, PAGE_READWRITE);
}

void qemu_vfree(void *ptr)
{
    VirtualFree(ptr, 0, MEM_RELEASE);
}
#endif
#else

#if defined(USE_KQEMU)

#include <sys/vfs.h>
#include <sys/mman.h>
#include <fcntl.h>

static void *kqemu_vmalloc(size_t size)
{
    static int phys_ram_fd = -1;
    static int phys_ram_size = 0;
    const char *tmpdir;
    char phys_ram_file[1024];
    void *ptr;
#ifdef HOST_SOLARIS
    struct statvfs stfs;
#else
    struct statfs stfs;
#endif

    if (phys_ram_fd < 0) {
        tmpdir = getenv("QEMU_TMPDIR");
        if (!tmpdir)
#ifdef HOST_SOLARIS
            tmpdir = "/tmp";
        if (statvfs(tmpdir, &stfs) == 0) {
#else
            tmpdir = "/dev/shm";
        if (statfs(tmpdir, &stfs) == 0) {
#endif
            int64_t free_space;
            int ram_mb;

            extern int ram_size;
            free_space = (int64_t)stfs.f_bavail * stfs.f_bsize;
            if ((ram_size + 8192 * 1024) >= free_space) {
                ram_mb = (ram_size / (1024 * 1024));
                fprintf(stderr,
                        "You do not have enough space in '%s' for the %d MB of QEMU virtual RAM.\n",
                        tmpdir, ram_mb);
                if (strcmp(tmpdir, "/dev/shm") == 0) {
                    fprintf(stderr, "To have more space available provided you have enough RAM and swap, do as root:\n"
                            "umount /dev/shm\n"
                            "mount -t tmpfs -o size=%dm none /dev/shm\n",
                            ram_mb + 16);
                } else {
                    fprintf(stderr,
                            "Use the '-m' option of QEMU to diminish the amount of virtual RAM or use the\n"
                            "QEMU_TMPDIR environment variable to set another directory where the QEMU\n"
                            "temporary RAM file will be opened.\n");
                }
                fprintf(stderr, "Or disable the accelerator module with -no-kqemu\n");
                exit(1);
            }
        }
        snprintf(phys_ram_file, sizeof(phys_ram_file), "%s/qemuXXXXXX",
                 tmpdir);
        phys_ram_fd = mkstemp(phys_ram_file);
        if (phys_ram_fd < 0) {
            fprintf(stderr,
                    "warning: could not create temporary file in '%s'.\n"
                    "Use QEMU_TMPDIR to select a directory in a tmpfs filesystem.\n"
                    "Using '/tmp' as fallback.\n",
                    tmpdir);
            snprintf(phys_ram_file, sizeof(phys_ram_file), "%s/qemuXXXXXX",
                     "/tmp");
            phys_ram_fd = mkstemp(phys_ram_file);
            if (phys_ram_fd < 0) {
                fprintf(stderr, "Could not create temporary memory file '%s'\n",
                        phys_ram_file);
                exit(1);
            }
        }
        unlink(phys_ram_file);
    }
    size = (size + 4095) & ~4095;
    ftruncate(phys_ram_fd, phys_ram_size + size);
    ptr = mmap(NULL,
               size,
               PROT_WRITE | PROT_READ, MAP_SHARED,
               phys_ram_fd, phys_ram_size);
    if (ptr == MAP_FAILED) {
        fprintf(stderr, "Could not map physical memory\n");
        exit(1);
    }
    phys_ram_size += size;
    return ptr;
}

static void kqemu_vfree(void *ptr)
{
    /* may be useful some day, but currently we do not need to free */
}

#endif

void *qemu_memalign(size_t alignment, size_t size)
{
#if defined(_POSIX_C_SOURCE)
    int ret;
    void *ptr;
    ret = posix_memalign(&ptr, alignment, size);
    if (ret != 0)
        return NULL;
    return ptr;
#elif defined(_BSD)
    return valloc(size);
#else
    return memalign(alignment, size);
#endif
}

/* alloc shared memory pages */
void *qemu_vmalloc(size_t size)
{
#if defined(USE_KQEMU)
    if (kqemu_allowed)
        return kqemu_vmalloc(size);
#endif
#ifdef _BSD
    return valloc(size);
#else
    return memalign(4096, size);
#endif
}

void qemu_vfree(void *ptr)
{
#if defined(USE_KQEMU)
    if (kqemu_allowed)
        kqemu_vfree(ptr);
#endif
    free(ptr);
}

#endif

void *qemu_mallocz(size_t size)
{
    void *ptr;
    ptr = qemu_malloc(size);
    if (!ptr)
        return NULL;
    memset(ptr, 0, size);
    return ptr;
}

char *qemu_strdup(const char *str)
{
    char *ptr;
    ptr = qemu_malloc(strlen(str) + 1);
    if (!ptr)
        return NULL;
    strcpy(ptr, str);
    return ptr;
}

int qemu_create_pidfile(const char *filename)
{
    char buffer[128];
    int len;
#if !defined(_WIN32) || defined(UNDER_CE)
    int fd;

    fd = open(filename, O_RDWR | O_CREAT, 0600);
    if (fd == -1)
        return -1;
#ifndef UNDER_CE
    if (lockf(fd, F_TLOCK, 0) == -1)
        return -1;
#endif
    len = snprintf(buffer, sizeof(buffer), "%ld\n", (long)getpid());
    if (write(fd, buffer, len) != len)
        return -1;
#else
    HANDLE file;
    DWORD flags;
    OVERLAPPED overlap;
    BOOL ret;

    /* Open for writing with no sharing. */
    file = CreateFile(filename, GENERIC_WRITE, 0, NULL,
		      OPEN_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);

    if (file == INVALID_HANDLE_VALUE)
      return -1;

    flags = LOCKFILE_EXCLUSIVE_LOCK | LOCKFILE_FAIL_IMMEDIATELY;
    overlap.hEvent = 0;
    /* Lock 1 byte. */
    ret = LockFileEx(file, flags, 0, 0, 1, &overlap);
    if (ret == 0)
      return -1;

    /* Write PID to file. */
    len = snprintf(buffer, sizeof(buffer), "%ld\n", (long)getpid());
    ret = WriteFileEx(file, (LPCVOID)buffer, (DWORD)len,
		      &overlap, NULL);
    if (ret == 0)
      return -1;
#endif
    return 0;
}

#if defined(_WIN32) && !defined(UNDER_CE)

/* Offset between 1/1/1601 and 1/1/1970 in 100 nanosec units */
#define _W32_FT_OFFSET (116444736000000000ULL)

int qemu_gettimeofday(qemu_timeval *tp)
{
  union {
    unsigned long long ns100; /*time since 1 Jan 1601 in 100ns units */
    FILETIME ft;
  }  _now;

  if(tp)
    {
      GetSystemTimeAsFileTime (&_now.ft);
      tp->tv_usec=(long)((_now.ns100 / 10ULL) % 1000000ULL );
      tp->tv_sec= (long)((_now.ns100 - _W32_FT_OFFSET) / 10000000ULL);
    }
  /* Always return 0 as per Open Group Base Specifications Issue 6.
     Do not set errno on error.  */
  return 0;
}
#endif /* _WIN32 */
