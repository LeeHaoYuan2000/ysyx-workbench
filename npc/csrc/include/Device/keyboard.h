#include "stdio.h"
#include "stdlib.h"

void init_i8042();

void send_key(u_int8_t scancode, bool is_keydown);