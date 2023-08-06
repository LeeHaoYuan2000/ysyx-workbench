#ifndef __DEVICE_MMIO_H__
#define __DEVICE_MMIO_H__

//#include <common.h>
#include "stdlib.h"
#include "stdio.h"

u_int64_t mmio_read(u_int64_t addr, int len);
void mmio_write(u_int64_t addr, int len, u_int64_t data);

#endif