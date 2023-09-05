#include <common.h>
#include "syscall.h"
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;

  printf("in do_syscall index:%d\n",a[0]);
  
  switch (a[0]) {
    case SYS_yield: yield(); break;
    case SYS_exit: halt(0); break;
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
