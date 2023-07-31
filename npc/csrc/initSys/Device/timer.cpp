#include "stdlib.h"
#include "stdio.h"
#include "assert.h"
#include "../../include/globalDefine.h"
#include "../../include/Device/map.h"
#include "sys/time.h"

static u_int32_t *rtc_port_base = NULL;
static uint64_t boot_time = 0;

//get the system time
static uint64_t get_time_internal(){
    static timeval now;
    gettimeofday(&now,NULL);
    uint64_t us = now.tv_sec * 1000000 + now.tv_usec;

    return us;
}

uint64_t get_time(){
    if(boot_time == 0){
        boot_time = get_time_internal();
    }
    uint64_t now = get_time_internal();

    return now - boot_time;
}


static void rtc_io_handler(uint32_t offset,int len , bool is_write){
    assert(offset == 0 || offset == 4);
    if(!is_write && offset == 0){
        uint64_t us = get_time();
        rtc_port_base[0] = (uint32_t)us;
        rtc_port_base[1] = (uint32_t)(us >> 32);
    }
}

void init_timer(){
    rtc_port_base = (uint32_t *)new_space(8);

    add_mmio_map("rtc",CONFIG_RTC_MMIO,rtc_port_base,8,rtc_io_handler);
}
