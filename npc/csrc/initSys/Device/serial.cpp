#include "stdio.h"
#include "stdlib.h"
#include "../../include/Device/map.h"
#include "../../include/globalDefine.h"
#include "../../include/macro.h"

static u_int8_t *serial_base = NULL;

static void serial_putc(char ch){
    MUXDEF(CONFIG_TARGET_AM,putch(ch),putc(ch,stderr));
}

static void serial_io_handler(uint32_t offset,int len,bool is_write){
    assert(len == 1);
    switch(offset) {
        case 0:
            if(is_write) serial_putc(serial_base[0]);
            else panic("not support read!!!");
        break;
        default:break;
    }
}

void init_serial(){
    serial_base = new_space(8);

    add_mmio_map("serial",CONFIG_SERIAL_MMIO,serial_base,8,serial_io_handler);
}