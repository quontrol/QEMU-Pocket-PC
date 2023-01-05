/*
 * QEMU SDL display driver
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
#define WINVER 0x500

#include "qemu-common.h"
#include "console.h"
#include "sysemu.h"

#include <SDL.h>
#include <windows.h>
#include <aygshell.h>

#ifndef _WIN32
#include <signal.h>
#endif

#include "qemu_ui.h"

typedef int t_ui_init(struct qemu_info *info);
typedef void t_ui_cleanup(void);
typedef int t_ui_refresh(void);
typedef void* t_ui_resize(int width, int height);
typedef void t_ui_update(int x, int y, int w, int h);
typedef void *t_ui_hook(int page_addr0, int pc, int cs_base);

int ui_dummy(void) {return 0;}

char PathToEmul[MAX_PATH];

t_ui_init *f_ui_init=(t_ui_init*)ui_dummy;
t_ui_cleanup *f_ui_cleanup=(t_ui_cleanup*)ui_dummy;
t_ui_refresh *f_ui_refresh=(t_ui_refresh*)ui_dummy;
t_ui_resize *f_ui_resize=(t_ui_resize*)ui_dummy;
t_ui_update *f_ui_update=(t_ui_update*)ui_dummy;
t_ui_hook *f_ui_hook=0;

HMODULE hUiDll=0;
HANDLE hStdOut=0;

void FreeMaxMem();

int is_vm_running(void)
{
	return vm_running;
}

static void sdl_update(DisplayState *ds, int x, int y, int w, int h)
{
	f_ui_update(x,y,w,h);
}


static void sdl_resize(DisplayState *ds, int w, int h)
{
    ds->data = f_ui_resize(w,h);
    ds->linesize = w*2; // 16 bit only
    ds->depth = 16;
    ds->width = w;
    ds->height = h;
}


static void sdl_refresh(DisplayState *ds)
{
	f_ui_refresh();
}

static void sdl_cleanup(void) 
{
	f_ui_cleanup();
	f_ui_init=ui_dummy;
	f_ui_cleanup=ui_dummy;
	f_ui_refresh=ui_dummy;
	f_ui_resize=ui_dummy;
	f_ui_update=ui_dummy;
	f_ui_hook=ui_dummy;
	FreeLibrary(hUiDll);
}

void InitProfiler();
void DebugFunc(int,void*);
extern unsigned char code_gen_buffer[];
extern uint8_t *phys_ram_base;
extern int phys_ram_size;
int GetCodeGenBuffSize();

unsigned char *get_phys_ram_base()
{
	return (unsigned char*)phys_ram_base;
}
int register_ioport_read(int start, int length, int size,
                         IOPortReadFunc *func, void *opaque);
int register_ioport_write(int start, int length, int size,
                          IOPortWriteFunc *func, void *opaque);
void my_stl_kernel(unsigned int addr, unsigned int data);
void my_stw_kernel(unsigned int addr, unsigned short data);
void my_stb_kernel(unsigned int addr, unsigned char data);
unsigned int my_ldl_kernel(unsigned int addr);
unsigned short my_ldw_kernel(unsigned int addr);
unsigned char my_ldb_kernel(unsigned int addr);
struct CPUState;
unsigned int cpu_get_phys_page_debug(struct CPUState *env, unsigned int addr);
void *get_env();
unsigned int GetVramPtr(void);
unsigned int *GetLastPalette();
void FlushSwapFiles();

void sdl_display_init(DisplayState *ds, int full_screen, int no_frame)
{
	wchar_t MyPath[MAX_PATH];
	GetModuleFileNameW(0,MyPath,MAX_PATH);
	wchar_t *t=wcsrchr(MyPath,L'\\');
	static struct qemu_info inf=
	{
		sizeof(struct qemu_info),
		0,
		vm_start,
		qemu_system_shutdown_request,
		vm_stop,
		is_vm_running,
		vga_hw_update,
	    vga_hw_invalidate,
		kbd_put_keycode,
		kbd_mouse_event,
		kbd_mouse_is_absolute,
		InitProfiler,
		DebugFunc,
		get_phys_ram_base,
		register_ioport_read,
		register_ioport_write,
		my_stl_kernel,
		my_stw_kernel,
		my_stb_kernel,
		my_ldl_kernel,
		my_ldw_kernel,
		my_ldb_kernel,
		cpu_get_phys_page_debug,
		get_env,
		GetVramPtr,
		GetLastPalette,
		FlushSwapFiles,
		PathToEmul
	};
	inf.ui_stdout=hStdOut;
	if(t)
		*t=0;
    wcscat(MyPath,L"\\qemu_ui.dll");
	hUiDll = LoadLibrary(MyPath);
	if(hUiDll==0)
	{
		printf("Cannot load .\\qemu_ui.dll (%08x)\n",GetLastError());
		hUiDll = LoadLibrary(L"qemu_ui.dll");
		if(hUiDll==0)
		{
			printf("Cannot load qemu_ui.dll (%08x)\n",GetLastError());
			fflush(stdout);
			exit(-1);
			return;
		}
	}
	printf("Code gen buffer addr: %08x, size: %08x\n",code_gen_buffer,GetCodeGenBuffSize());
	printf("Phys RAM buffer addr: %08x, size: %08x\n",phys_ram_base,phys_ram_size);

 	f_ui_init=(t_ui_init*)GetProcAddress(hUiDll,L"ui_init");
 	f_ui_cleanup=(t_ui_cleanup*)GetProcAddress(hUiDll,L"ui_cleanup");
 	f_ui_refresh=(t_ui_refresh*)GetProcAddress(hUiDll,L"ui_refresh");
 	f_ui_resize=(t_ui_resize*)GetProcAddress(hUiDll,L"ui_resize");
 	f_ui_update=(t_ui_update*)GetProcAddress(hUiDll,L"ui_update");
 	f_ui_hook=(t_ui_hook*)GetProcAddress(hUiDll,L"ui_hook");
 	if(f_ui_init==0 || f_ui_hook==0)
 	{	
 		printf("Cannot import ui_init from qemu_ui.dll\n");
		fflush(stdout);
		exit(-1);
 		return;
 	}

	if(f_ui_init(&inf)==0)
	{
 		printf("ui_init failed!\n");
		fflush(stdout);
		exit(-1);
 		return;
	}
    atexit(sdl_cleanup);

    ds->dpy_update  = sdl_update;
    ds->dpy_resize  = sdl_resize;
    ds->dpy_refresh = sdl_refresh;

    sdl_resize(ds, 640, 480);
}

void redirect_stdout()
{
	wchar_t MyPath[MAX_PATH];
	GetModuleFileNameW(0,MyPath,MAX_PATH);
	wchar_t *t=wcsrchr(MyPath,'\\');
	char Buff[MAX_PATH];
	if(t)
		*t=0;

	WideCharToMultiByte(CP_ACP,0,MyPath,-1,Buff,MAX_PATH,0,0);
	chdir(Buff);

	wcscat(MyPath,L"\\qemu-out.txt");

	hStdOut = CreateFileW(MyPath, GENERIC_WRITE,
	      FILE_SHARE_WRITE, NULL, CREATE_ALWAYS, 0, NULL);
   	_initstdfd(stdin,  0, (HANDLE)_fileno(_getstdfilex(0)), __SRD);
	_initstdfd(stdout, 1, (HANDLE)hStdOut, __SWR);
//    h = CreateFileW(L"stderr.txt", GENERIC_WRITE,
//	      FILE_SHARE_WRITE, NULL, OPEN_ALWAYS, 0, NULL);
	_initstdfd(stderr, 2, (HANDLE)hStdOut, __SWR);	
}


size_t	_EXFUN(wcstombs,(char *s, const wchar_t *pwc, size_t n))
{	
	int t= WideCharToMultiByte(CP_ACP,0,pwc,-1,s,n,0,0);
	return t;
}
size_t	_EXFUN(mbstowcs,(wchar_t *pwc, const char *s, size_t n))
{	
	int t= MultiByteToWideChar(CP_ACP,0,s,-1,pwc,n*2);
	return t;
}

void LoadCmdLine(int *pargc, char ***pargv)
{
	wchar_t MyPath[MAX_PATH];
	static char buf[MAX_PATH];
	static char fname[MAX_PATH];
	wchar_t *t;
	FILE *f;
	int i;

	*pargc=1;
	*pargv=(char**)malloc(100*4);	// 100 arguments should be enough
    (*pargv)[0]="qemu.exe";

	GetModuleFileNameW(0,MyPath,MAX_PATH);
	t=wcsrchr(MyPath,'\\');
	if(t)
		*t=0;
	wcscat(MyPath,L"\\cmdline.txt");
  	wcstombs(fname, MyPath, wcslen(MyPath) + 1);
	f=fopen(fname,"rt");
	if(f==0)
	{
		printf("cmdline.txt not found at '%s'\n",fname);
		return;
	}
	while(!feof(f))
	{
		buf[0]=0;
		fgets(buf,MAX_PATH-1,f);
		while(strlen(buf))
			if(buf[strlen(buf)-1]<' ') buf[strlen(buf)-1]=0;	// remove trailing '\n\r'
			else break;
		if(!strlen(buf))
			continue;
		(*pargv)[(*pargc)++]=strdup(buf);
		if(*pargc>99)
			break;
	}
//	puts("Command line:");
	for(i=0; i<*pargc; i++)
	{
//		printf("[%d] '%s'\n",i,(*pargv)[i]);
		if(strcmpi((*pargv)[i],"-emul")==0 && i+1<*pargc)
			strcpy(PathToEmul,(*pargv)[i+1]);
	}
	fclose(f);
	if(PathToEmul==0)
	{
		printf("Warning: path to emulation directory not specified!\n",fname);
		return;
	} else
      {	
	if(PathToEmul[0]=='\\')
		strcpy(fname,PathToEmul);
        else
        {
        	strrchr(fname,'\\')[1]=0;
        	strcat(fname,PathToEmul);
        }
        strcpy(PathToEmul,fname);
       	strcat(fname,"\\emul_cmdline.txt");
	f=fopen(fname,"rt");
	if(f==0)
	{
		printf("emul_cmdline.txt not found at '%s'\n",fname);
		return;
	}
	while(!feof(f))
	{
		buf[0]=0;
		fgets(buf,MAX_PATH-1,f);
		while(strlen(buf))
			if(buf[strlen(buf)-1]<' ') buf[strlen(buf)-1]=0;	// remove trailing '\n\r'
			else break;
		if(!strlen(buf))
			continue;
		(*pargv)[(*pargc)++]=strdup(buf);
		if(*pargc>99)
			break;
	}
      }	
	puts("Command line:");
	for(i=0; i<*pargc; i++)
	{
		printf("[%d] '%s'\n",i,(*pargv)[i]);
	}
	fclose(f);

    FreeMaxMem();

/*
	    argc=13;
    argv=(char**)malloc(argc*4);
    argv[0]="qemu.exe";
    argv[1]="-L";
    argv[2]=".";
    argv[3]="-m";
    argv[4]="8";
    argv[5]="-hda";
    argv[6]="\\\\Storage Card\\\\300mb.img";
    argv[7]="-boot";
    argv[8]="c";
    argv[9]="-fda";
    argv[10]="\\\\Storage Card\\\\w98rus.xdf";
    argv[11]="-cdrom";
    argv[12]="\\\\Storage Card\\\\windows.iso";
//    argv[13]="-usb";
//    argv[14]="-usbdevice";
//    argv[15]="tablet";
*/
}
void DumpTLB();// {}
#define CPU_LOG_TB_OUT_ASM (1 << 0)
#define CPU_LOG_TB_IN_ASM  (1 << 1)
#define CPU_LOG_TB_OP      (1 << 2)
#define CPU_LOG_TB_OP_OPT  (1 << 3)
#define CPU_LOG_INT        (1 << 4)
#define CPU_LOG_EXEC       (1 << 5)
#define CPU_LOG_PCALL      (1 << 6)
#define CPU_LOG_IOPORT     (1 << 7)
#define CPU_LOG_TB_CPU     (1 << 8)

extern int64_t kqemu_time;
extern int64_t qemu_time;
extern int64_t fileio_time;
extern int64_t findtb_time;
extern int64_t kqemu_exec_count;
extern int64_t dev_time;
extern int64_t kqemu_ret_int_count;
extern int64_t ticks_per_sec;
extern int64_t kqemu_ret_excp_count;
extern int64_t kqemu_ret_intr_count;

void DumpProfiler()
{
#ifdef CONFIG_PROFILER
    int64_t total;
    total = qemu_time;
    if (total == 0)
        total = 1;
    printf("async time  %" PRId64 " (%0.3f)\n",
                dev_time, dev_time / (double)ticks_per_sec);
    printf("qemu time   %" PRId64 " (%0.3f)\n",
                qemu_time, qemu_time / (double)ticks_per_sec);
//    printf("gen_TB time %" PRId64 " (%0.3f)\n",
//                findtb_time, findtb_time / (double)ticks_per_sec);
    printf("fileIO time %" PRId64 " (%0.3f)\n",
                fileio_time, fileio_time / (double)ticks_per_sec);
    qemu_time = 0;
//    findtb_time = 0;
    kqemu_time = 0;
    fileio_time = 0;
    kqemu_exec_count = 0;
    dev_time = 0;
    kqemu_ret_int_count = 0;
    kqemu_ret_excp_count = 0;
    kqemu_ret_intr_count = 0;
#endif
}

void DebugFunc(int code,void *buf)
{
	if(code==0)
		cpu_set_log(CPU_LOG_TB_IN_ASM);//DumpTLB();
//	if(code==1)
		DumpProfiler();

}

void* DoPatch(int page_addr0, int pc, int cs_base)
{
	return f_ui_hook(page_addr0, pc, cs_base);
}

static int NonSovp=0;
static int Sovp=0;

int FileExist(char*fname)
{
	FILE *f=fopen(fname,"rb");
	if(f==0)
		return 0;
	fclose(f);
	return 1;
}

void FixFileName(char *file)
{
	wchar_t MyPath[MAX_PATH];
	static char fname[MAX_PATH];
	static char fname1[MAX_PATH];
	wchar_t *t;

	if(file[0]=='\"')
	{
		memmove(file,file+1,strlen(file)+1);
	}
	if(file[strlen(file)-1]=='\"')
		file[strlen(file)-1]=0;

	if(file[0]=='\\')
		return;
        
	GetModuleFileNameW(0,MyPath,MAX_PATH);
	t=wcsrchr(MyPath,'\\');
	if(t)
		*t=0;
  	wcstombs(fname, MyPath, wcslen(MyPath) + 1);
	strcat(fname,"\\");
	strcat(fname,file);
	strcpy(fname1,fname);

       	strcpy(fname,PathToEmul);
       	strcat(fname,"\\");
	strcat(fname,file);

	if(FileExist(fname))
	{
		strcpy(file,fname);
		return;
	}
	if(FileExist(fname1))
	{
		strcpy(file,fname1);
		return;
	}
	return;
}

BOOL GetSystemMemoryDivision(LPDWORD lpdwStorePages, LPDWORD lpdwRamPages, LPDWORD lpdwPageSize);
DWORD SetSystemMemoryDivision(DWORD dwStorePages);

void FreeMaxMem()
{
    DWORD dwPageSize, dwRam, dwStore, dwNewStore;
    STORE_INFORMATION  si;

    GetStoreInformation(&si);

    if (GetSystemMemoryDivision(&dwStore, &dwRam, &dwPageSize))
    {
        DWORD dwTotal = dwRam + dwStore;        
        dwNewStore = (si.dwStoreSize - si.dwFreeSize + 768 * 1024) / dwPageSize;
        if(dwTotal/5>dwNewStore)
            dwNewStore=dwTotal/5;
        SetSystemMemoryDivision(dwNewStore);
    }
}
