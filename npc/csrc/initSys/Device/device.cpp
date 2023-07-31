#include "stdio.h"
#include "stdlib.h"
#include "../../include/globalDefine.h"
#include "../../include/macro.h"
#include "../../include/Device/map.h"
#include "../../include/Device/serial.h"
#include "../../include/Device/timer.h"


void init_device(){

    init_map();
    
    IFDEF(CONFIG_HAS_SERIAL, init_serial());
    IFDEF(CONFIG_HAS_TIMER,init_timer());
    IFDEF(CONFIG_HAS_VGA,init_vga());
    IFDEF(CONFIG_HAS_KEYBOARD,init_i8042());

}