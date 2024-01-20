#include <am.h>
#include <riscv/riscv.h>
#include <klib.h>

#define CONTEXT_SIZE_64bits  ((32 + 3 + 1) * 8)
#define OFFSET_EPC           (34 * 8)
#define REG_A0               (10 * 8)

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {

  if (user_handler) {
    Event ev = {0};

    switch (c->mcause) {//distribute the event
      case 11:
        if(c->GPR1 == -1){
            ev.event = EVENT_YIELD;
        }
        else {
            ev.event = EVENT_SYSCALL;
        }
      break;

      default: ev.event = EVENT_ERROR; break;

    }

    
    c = user_handler(ev, c);

    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  void *start = kstack.start;
  void *end   = kstack.end - 1;
  
  void *Context_Start           = end - CONTEXT_SIZE_64bits; //Context is stored in the end of stack 
  *(uint64_t*)(Context_Start + OFFSET_EPC ) = (uint64_t)(entry - 4); // enter the Application after restore the context
  *(uint64_t*)(Context_Start + REG_A0 )     = (uint64_t)arg;//pass argument th f()

  printf("start addr:0x%x   end addr:0x%x  Context_start addr:0x%x  entry_addr :0x%x\n",start ,end ,Context_Start,(char *)(entry - 4));
  return (Context *)Context_Start;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
