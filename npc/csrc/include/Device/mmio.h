#ifndef __DEVICE_MMIO_H__
#define __DEVICE_MMIO_H__

#include <common.h>

uint64_t mmio_read(uint64_t addr, int len);
void mmio_write(uint64_t addr, int len, uint64_t data);

#endif