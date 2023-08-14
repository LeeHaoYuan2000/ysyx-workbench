#include <am.h>
#include <klib-macros.h>
#include <amdev.h>
 #include "stdio.h"
 #include "assert.h"

void __am_gpu_init();
void __am_timer_init();

void __am_gpu_config(AM_GPU_CONFIG_T *);
void __am_gpu_status(AM_GPU_STATUS_T *);
void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *);

void __am_timer_rtc(AM_TIMER_RTC_T *);
void __am_timer_uptime(AM_TIMER_UPTIME_T *);
void __am_input_keybrd(AM_INPUT_KEYBRD_T *);
void __am_timer_rtc(AM_TIMER_RTC_T *);

static void __am_timer_config(AM_TIMER_CONFIG_T *cfg) { cfg->present = true; cfg->has_rtc = true; }
static void __am_input_config(AM_INPUT_CONFIG_T *cfg) { cfg->present = true;  }

typedef void (*handler_t)(void *buf);
static void *lut[128] = {
  [AM_GPU_CONFIG  ] = __am_gpu_config,
  [AM_GPU_FBDRAW  ] = __am_gpu_fbdraw,
  [AM_GPU_STATUS  ] = __am_gpu_status,
  [AM_TIMER_CONFIG] = __am_timer_config,
  [AM_TIMER_RTC   ] = __am_timer_rtc,
  [AM_TIMER_UPTIME] = __am_timer_uptime,
  [AM_INPUT_CONFIG] = __am_input_config,
  [AM_INPUT_KEYBRD] = __am_input_keybrd,
};

static void fail(void *buf) { panic("access nonexist register"); }

bool ioe_init() {
  for (int i = 0; i < LENGTH(lut); i++)
    if (!lut[i]){
       lut[i] = fail;
       //printf("number %d is  fail \n",i);
       }
       else {
        //printf("number %d is ok \n",i);
       }


  __am_gpu_init();
  __am_timer_init();
  return true;
}

void ioe_read (int reg, void *buf) { 
  //printf("ioe_read reg is %d \n",reg);
  ((handler_t)lut[reg])(buf); 
  }
void ioe_write(int reg, void *buf) { 
  //printf("ioe_write reg is %d \n",reg);
  ((handler_t)lut[reg])(buf); 
  }
