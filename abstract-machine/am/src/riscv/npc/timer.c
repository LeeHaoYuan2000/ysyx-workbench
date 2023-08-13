#include <am.h>
#include "../riscv.h"
#include "include/npc.h"

//#include ""

static uint64_t start_time = 0;

void __am_timer_init() {
  //start_time = ind(RTC_ADDR);
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uptime->us = ind(RTC_ADDR) - start_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
