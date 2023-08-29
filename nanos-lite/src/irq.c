#include <common.h>

#define EVENT_YIELD 1

static Context* do_event(Event e, Context* c) {

  printf("in do_event !!\n");

  switch (e.event) {

    case EVENT_YIELD: printf("event is yield \n"); break;

    default: panic("Unhandled event ID = %d", e.event);
  }

  printf("anything happen !!!\n");
  return c;
}

void init_irq(void) {
  Log("Initializing interrupt/exception handler...");
  cte_init(do_event);
}
