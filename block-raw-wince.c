/*
 * Block driver for RAW files (win32)
 *
 * Copyright (c) 2006 Fabrice Bellard
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

#include "qemu-common.h"
#ifndef QEMU_IMG
#include "qemu-timer.h"
#include "exec-all.h"
#endif
#include "block_int.h"
#include <assert.h>
#include <winioctl.h>

#define FTYPE_FILE 0
#define FTYPE_CD     1
#define FTYPE_HARDDISK 2

#ifdef QEMU_IMG
#undef CONFIG_PROFILER
#endif

typedef struct BDRVRawState {
    HANDLE hfile;
    int type;
    char filename[MAX_PATH]; /* format: "d:\" */
    int flags;
} BDRVRawState;

typedef struct RawAIOCB {
    BlockDriverAIOCB common;
    HANDLE hEvent;
    OVERLAPPED ov;
    int count;
} RawAIOCB;

int qemu_ftruncate64(int fd, int64_t length)
{
	return ftruncate(fd, length);
}

static int set_sparse(int fd)
{
	return 0;
}

static int raw_open(BlockDriverState *bs, const char *filename, int flags)
{
    BDRVRawState *s = bs->opaque;
    int access_flags, create_flags;
    DWORD overlapped;
    wchar_t FileName[MAX_PATH];

    s->flags=flags;
    strcpy(s->filename,filename);

    s->type = FTYPE_FILE;

    if ((flags & BDRV_O_ACCESS) == O_RDWR) {
        access_flags = GENERIC_READ | GENERIC_WRITE;
    } else {
        access_flags = GENERIC_READ;
    }
    if (flags & BDRV_O_CREAT) {
        create_flags = CREATE_ALWAYS;
    } else {
        create_flags = OPEN_EXISTING;
    }

    overlapped = FILE_FLAG_RANDOM_ACCESS;

    wsprintf(FileName,L"%S",filename);

    s->hfile = CreateFile(FileName, access_flags,
                          FILE_SHARE_READ|FILE_SHARE_WRITE, NULL,
                          create_flags, overlapped, NULL);
    if (s->hfile == INVALID_HANDLE_VALUE) {
        int err = GetLastError();

        if (err == ERROR_ACCESS_DENIED)
            return -EACCES;
        return -1;
    }
    return 0;
}

#ifdef CONFIG_PROFILER
int64_t fileio_time=0;
#endif

static int raw_pread(BlockDriverState *bs, int64_t offset,
                     uint8_t *buf, int count)
{
    BDRVRawState *s = bs->opaque;
    DWORD ret_count=0;
    int ret;
#ifdef CONFIG_PROFILER
    int64_t ti;
    ti = profile_getclock();
#endif

    ret_count= -EIO;
    SetFilePointer(s->hfile,offset,0,FILE_BEGIN);
    ret = ReadFile(s->hfile, buf, count, &ret_count, 0);
    if (!ret) {  // WM may need reopening of files located on SD cards after resuming from sleep mode
//    	puts("File read error, reopening");
    	raw_close(bs);
    	raw_open(bs, s->filename, s->flags);
	ret_count= -EIO;
        SetFilePointer(s->hfile,offset,0,FILE_BEGIN);
    	ret = ReadFile(s->hfile, buf, count, &ret_count, 0);
    }
#ifdef CONFIG_PROFILER
	fileio_time += profile_getclock() - ti;
#endif
    return ret_count;
}

static int raw_pwrite(BlockDriverState *bs, int64_t offset,
                      const uint8_t *buf, int count)
{
    BDRVRawState *s = bs->opaque;
    DWORD ret_count=0;
    int ret;
#ifdef CONFIG_PROFILER
    int64_t ti;
    ti = profile_getclock();
#endif

    ret_count= -EIO;
    SetFilePointer(s->hfile,offset,0,FILE_BEGIN);
    ret = WriteFile(s->hfile, buf, count, &ret_count, 0);
    if (!ret) {
    	raw_close(bs);
    	raw_open(bs, s->filename, s->flags);
	ret_count= -EIO;
	SetFilePointer(s->hfile,offset,0,FILE_BEGIN);
	ret = WriteFile(s->hfile, buf, count, &ret_count, 0);
    }
#ifdef CONFIG_PROFILER
	fileio_time += profile_getclock() - ti;
#endif
    return ret_count;
}

static void raw_flush(BlockDriverState *bs)
{
    BDRVRawState *s = bs->opaque;
    FlushFileBuffers(s->hfile);
}

static void raw_close(BlockDriverState *bs)
{
    BDRVRawState *s = bs->opaque;
    CloseHandle(s->hfile);
}

static int raw_truncate(BlockDriverState *bs, int64_t offset)
{
    BDRVRawState *s = bs->opaque;
    DWORD low, high;

    low = offset;
    high = offset >> 32;
    if (!SetFilePointer(s->hfile, low, &high, FILE_BEGIN))
		return -EIO;
    if (!SetEndOfFile(s->hfile))
        return -EIO;
    return 0;
}

static int64_t raw_getlength(BlockDriverState *bs)
{
    BDRVRawState *s = bs->opaque;
    LARGE_INTEGER l;
    ULARGE_INTEGER available, total, total_free;
    DWORD count;
    BOOL status;

    switch(s->type) {
    case FTYPE_FILE:
        l.LowPart = GetFileSize(s->hfile, &l.HighPart);
        if (l.LowPart == 0xffffffffUL && GetLastError() != NO_ERROR)
            return -EIO;
        break;
    default:
        return -EIO;
    }
    return l.QuadPart;
}

static int raw_create(const char *filename, int64_t total_size,
                      const char *backing_file, int flags)
{
    int fd;

    if (flags || backing_file)
        return -ENOTSUP;

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_BINARY,
              0644);
    if (fd < 0)
        return -EIO;
    set_sparse(fd);
    ftruncate(fd, total_size * 512);
    close(fd);
    return 0;
}

void qemu_aio_init(void)
{
}

void qemu_aio_poll(void)
{
}

void qemu_aio_flush(void)
{
}

void qemu_aio_wait_start(void)
{
}

void qemu_aio_wait(void)
{
#ifndef QEMU_IMG
    qemu_bh_poll();
#endif
}

void qemu_aio_wait_end(void)
{
}

BlockDriver bdrv_raw = {
    "raw",
    sizeof(BDRVRawState),
    NULL, /* no probe for protocols */
    raw_open,
    NULL,
    NULL,
    raw_close,
    raw_create,
    raw_flush,

#if 0
    .bdrv_aio_read = raw_aio_read,
    .bdrv_aio_write = raw_aio_write,
    .bdrv_aio_cancel = raw_aio_cancel,
    .aiocb_size = sizeof(RawAIOCB);
#endif
    .protocol_name = "file",
    .bdrv_pread = raw_pread,
    .bdrv_pwrite = raw_pwrite,
    .bdrv_truncate = raw_truncate,
    .bdrv_getlength = raw_getlength,
};

/***********************************************/
/* host device */

static int find_cdrom(char *cdrom_name, int cdrom_name_size)
{
    return -1;
}

static int find_device_type(BlockDriverState *bs, const char *filename)
{
    return FTYPE_FILE;
}

static int hdev_open(BlockDriverState *bs, const char *filename, int flags)
{
    BDRVRawState *s = bs->opaque;
    int access_flags, create_flags;
    DWORD overlapped;
    char device_name[64];
    wchar_t FileName[MAX_PATH];

    if (strstart(filename, "/dev/cdrom", NULL)) {
        if (find_cdrom(device_name, sizeof(device_name)) < 0)
            return -ENOENT;
        filename = device_name;
    } else {
        /* transform drive letters into device name */
        if (((filename[0] >= 'a' && filename[0] <= 'z') ||
             (filename[0] >= 'A' && filename[0] <= 'Z')) &&
            filename[1] == ':' && filename[2] == '\0') {
            snprintf(device_name, sizeof(device_name), "\\\\.\\%c:", filename[0]);
            filename = device_name;
        }
    }
    s->type = find_device_type(bs, filename);

    if ((flags & BDRV_O_ACCESS) == O_RDWR) {
        access_flags = GENERIC_READ | GENERIC_WRITE;
    } else {
        access_flags = GENERIC_READ;
    }
    create_flags = OPEN_EXISTING;

    overlapped = FILE_ATTRIBUTE_NORMAL;

    wsprintf(FileName,L"%S",filename);

    s->hfile = CreateFile(FileName, access_flags,
                          FILE_SHARE_READ, NULL,
                          create_flags, overlapped, NULL);
    if (s->hfile == INVALID_HANDLE_VALUE) {
        int err = GetLastError();

        if (err == ERROR_ACCESS_DENIED)
            return -EACCES;
        return -1;
    }
    return 0;
}


BlockDriver bdrv_host_device = {
    "host_device",
    sizeof(BDRVRawState),
    NULL, /* no probe for protocols */
    hdev_open,
    NULL,
    NULL,
    raw_close,
    NULL,
    raw_flush,

#if 0
    .bdrv_aio_read = raw_aio_read,
    .bdrv_aio_write = raw_aio_write,
    .bdrv_aio_cancel = raw_aio_cancel,
    .aiocb_size = sizeof(RawAIOCB);
#endif
    .bdrv_pread = raw_pread,
    .bdrv_pwrite = raw_pwrite,
    .bdrv_getlength = raw_getlength,
};
