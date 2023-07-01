#include <stdio.h>
#include <iostream>
#include <stdlib.h>

#define MEM_Size 0x80000000

void initMEM();

uint8_t* getMEMAddr();

void MEMRead(uint64_t raddr,uint64_t* rdata);

void MEMWrite(uint64_t waddr,uint64_t wdata, uint8_t wmask);


