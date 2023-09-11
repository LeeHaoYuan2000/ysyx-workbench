#include <common.h>
#include "syscall.h"

void strace(unsigned int type, unsigned int a0, unsigned int a1, unsigned int a2);
unsigned long int write(int fd, void *buf, int len);
unsigned long int brk(unsigned long int address, int increment);

void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1; // a7
  a[1] = c->GPR2; // a0
  a[2] = c->GPR3; // a1
  a[3] = c->GPR4; // a2

  switch (a[0]) {
    case SYS_yield:
      strace(SYS_yield,a[1],a[2],a[3]);
      yield(); 
    break;

    case SYS_write:
      strace(SYS_write,a[1],a[2],a[3]);
      c->GPRx = write( a[1], (void *)a[2], a[3]);
    break;

    case SYS_brk:
      strace(SYS_brk,a[1],a[2],a[3]);
      c->GPRx = brk(a[1],a[2]);
    break;

    case SYS_exit:
     strace(SYS_exit,a[1],a[2],a[3]);
      halt(0); 
    break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}

void strace(unsigned int type, unsigned int a0, unsigned int a1, unsigned int a2){
  
    switch (type)
    {
    case SYS_yield:
      printf("strace:");
      printf(" SYS_yield  a0:%d  a1:%d  a2:%d  \n",a0,a1,a2);
      break;
    case SYS_write:
      printf("strace:");
      printf(" SYS_write  a0:%d  a1:%x  a2:%d  \n",a0,a1,a2);
      break;

    case SYS_brk:
      printf("strace:");
      printf(" SYS_brk   a0:%x  a1:%x  a2:%x  \n",a0,a1,a2);
      break;

    case SYS_exit:
      printf("strace:");
      printf(" SYS_exit   a0:%d  a1:%d  a2:%d  \n",a0,a1,a2);
      break;

    default:
      break;
    }

}

unsigned long int write(int fd, void *buf, int len){
  if(fd == 1){
    int i = 0;
    while (i < len)
    {
      putch( *((char*)buf + i) );
      i++;
    }
    return i;
  }
  else {
    return len;
  }
  
  return -1;
}

unsigned long int brk(unsigned long int address, int increment){
  printf("end address %x \n",address);
    return 0;
}
