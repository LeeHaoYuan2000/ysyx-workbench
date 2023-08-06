#include "stdlib.h"
#include "stdio.h"
#include "assert.h"
#include "../../include/globalDefine.h"
#include "../../include/Device/map.h"
#include "sys/time.h"

static u_int32_t *rtc_port_base = NULL;
static u_int64_t boot_time = 0;

//get the system time
static u_int64_t get_time_internal(){
    static timeval now;
    gettimeofday(&now,NULL);
    u_int64_t us = now.tv_sec * 1000000 + now.tv_usec;

    return us;
}

u_int64_t get_time(){
    if(boot_time == 0){
        boot_time = get_time_internal();
    }
    u_int64_t now = get_time_internal();

    return now - boot_time;
}


static void rtc_io_handler(u_int32_t offset,int len , bool is_write){
    assert(offset == 0 || offset == 4);
    if(!is_write && offset == 0){
        u_int64_t us = get_time();
        rtc_port_base[0] = (u_int32_t)us;
        rtc_port_base[1] = (u_int32_t)(us >> 32);
    }
}

// #ifndef CONFIG_TARGET_AM
// static void timer_intr() {
//   if (nemu_state.state == NEMU_RUNNING) {
//     extern void dev_raise_intr();
//     dev_raise_intr();
//   }
// }
// #endif

void init_timer(){
    rtc_port_base = (u_int32_t *)new_space(8);

    add_mmio_map("rtc",CONFIG_RTC_MMIO,rtc_port_base,8,rtc_io_handler);
}
