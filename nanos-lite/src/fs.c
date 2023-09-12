#include <fs.h>
#include "../include/ramdisk.h"

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

int fs_close(int fd);
size_t fs_lseek(int fd, size_t offset, int whence);
size_t fs_write(int fd, const void *buf, size_t len);
size_t fs_read(int fd, void *buf, size_t len);
int fs_open(const char *pathname, int flags, int mode);

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

void init_fs() {
  // TODO: initialize the size of /dev/fb
}


long int *file_offset = NULL;

int fs_open(const char *pathname, int flags, int mode){

  int n = 0;
  int file_table_lenth = sizeof(file_table) / sizeof(file_table[0]);
  printf("file table lenth : %d \n",file_table_lenth);

  if(file_offset == NULL){
    file_offset = (long int *)malloc(sizeof(long int) * file_table_lenth);

    //initialize the data in the file_offset
    int i = 0;
    while(i < sizeof(long int) * file_table_lenth){
      file_offset[i] = 0;
      i++;
    }

  }

  while(n < file_table_lenth){
    if(strcmp(pathname , file_table[n].name)){
      break;
    }
    n++;
  }

  if(n >= file_table_lenth){
    panic("there is no such file \n");
  }

  return n; //return the fd(file describe)
}



size_t fs_read(int fd, void *buf, size_t len){

  unsigned int file_size   = file_table[fd].size;
  unsigned int disk_offset = file_table[fd].disk_offset;

  if(file_offset == NULL){
    panic("Please open the file before read !! \n");
  }

  if(len > file_size - file_offset[fd]){
    panic("read lenth is more than file size \n");
  }

  switch (fd)
  {
  case FD_STDIN:
      
    break;

  case FD_STDOUT:

    break;
  
  case FD_STDERR:
    break;
  
  default:
    ramdisk_read(buf, disk_offset + file_offset[fd], len);
    break;
  }

  return len; //the data lenth already read.
}

size_t fs_write(int fd, const void *buf, size_t len){

    unsigned int file_size   = file_table[fd].size;
    unsigned int disk_offset = file_table[fd].disk_offset;

    if(file_offset == NULL ){
        panic("Please open the file before write !! \n");
    }

    if(len >= file_size - file_offset[fd]){
        panic("write lenth will out of mem");
    }

    switch (fd)
    {
      case FD_STDIN:
      
    break;

      case FD_STDOUT:

    break;
  
      case FD_STDERR:
    break;
  
    default:
      ramdisk_write(buf, disk_offset + file_offset[fd], len);
    break;
    }

    return 
}

size_t fs_lseek(int fd, size_t offset, int whence){

    if(file_offset == NULL ){
        panic("Please open the file before write !! \n");
    }

    switch (whence)
    {
    case SEEK_SET:
        file_offset[fd] = offset;
      break;
    
    case SEEK_CUR:
      file_offset[fd] = file_offset[fd] + offset;
    break;

    case SEEK_END:
      file_offset[fd] = file_table[fd].size + offset;
    break:
    
    default:
      break;
    }

    return 0;

}

int fs_close(int fd){
  return 0;//sfs no need to maintain the open status, so always return 0;
}


