#include <stdio.h>
#include <iostream>
#include <stdlib.h>

#define MEM_Size 0x80000000

void MEM_init();

u_int8_t* getMEMAddr();

u_int32_t MEMRead_instr(u_int64_t raddr);

bool in_pmem(u_int64_t addr);

u_int64_t host_read(u_int64_t *addr, int len);

void host_write(u_int64_t *addr,int len, u_int64_t data);


