#ifndef __FS_H__
#define __FS_H__

#include <common.h>

#ifndef SEEK_SET
enum {SEEK_SET, SEEK_CUR, SEEK_END};
#endif

#define FD_STDIN 0
#define FD_STDOUT 1
#define FD_STDERR 2

#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2

void init_fs();

int fs_close(int fd);
size_t fs_lseek(int fd, size_t offset, int whence);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_read(int fd, void *buf, size_t len);
int fs_open(const char *pathname, int flags, int mode);


#endif
