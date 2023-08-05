#include <stdio.h>
#include <iostream>
#include <stdlib.h>

#define MEM_Size 0x80000000

void MEM_init();

uint8_t* getMEMAddr();

void MEMRead(uint64_t raddr,uint64_t* rdata);

void MEMWrite(uint64_t waddr,uint64_t wdata, uint8_t wmask);

uint32_t MEMRead_instr(uint64_t raddr);

inline bool in_pmem(uint64_t addr);


