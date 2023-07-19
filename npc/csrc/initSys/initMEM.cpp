#include "verilated_dpi.h"
#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include "../include/initMEM.h"
#include "assert.h"
#include "../include/sim_init.h"

#define MEM_Start 0x80000000

uint8_t Memory[4096000];


//use the little endian to store the date
extern "C" void pmem_read(uint64_t raddr,uint64_t* rdata){
    if(raddr - MEM_Start < MEM_Start){//不加这一行会报错，读取会越界
            printf("raddr is : %lx\n",raddr);

      uint64_t MEM_addr = raddr - 0x80000000;


    //  uint64_t Data_buf = 0;

    // // // for(int i = 0;i < 8;i++){
    //      Data_buf = Data_buf >> 8;
    // // //     Data_buf = Data_buf + (((uint64_t)Memory[MEM_addr + i])<<56);
    // // // }

    // // // *rdata = Data_buf;
    // printf("MEM_addr:%lx!!!!!\n",MEM_addr);

     *rdata = *(uint64_t*)(Memory + MEM_addr);

     printf("rdata is : %016lx\n",*rdata);
    }

}


extern "C" void pmem_write(uint64_t waddr,uint64_t wdata, uint8_t wmask){
    printf("waddr is 0x%016lx \n",waddr);
    uint64_t MEM_addr = waddr - 0x80000000;
    uint8_t Data_buf = 0;
    for(int i = 0; i < wmask; i++){
        Data_buf = wdata & 0x00000000000000ff;
        wdata = wdata >> 8;
        Memory[MEM_addr + i] = Data_buf;
        printf("%02lx",Data_buf);
    }
    printf("\n");;

}


uint32_t pmem_instr(uint64_t raddr){

    return  *(uint32_t*)(Memory + raddr - 0x80000000);
}

int out_of_address(uint64_t addr){
    if(addr - 0x80000000 < 0x80000000){
        return 1;
    }
    else{
        return 0;
    }
}

void MEMRead(uint64_t raddr,uint64_t* rdata){
    if(out_of_address(raddr)){
        
        pmem_read(raddr,rdata);
    }
    else{
        printf("Read Address At --> %016lx\n",raddr);
        printf("the memory is out of boundary,please check\n");
        sim_exit();
        assert(0);        
    }
}

void MEMWrite(uint64_t waddr,uint64_t wdata, uint8_t wmask){
    if(out_of_address(waddr)){
        pmem_write(waddr,wdata,wmask);
    }
    else{
        printf("Write Address At --> %016lx\n",waddr);
        printf("the memory is out of boundary,please check\n");
        sim_exit();
        assert(0);        
    }
}

// this function is used to read the instruction
uint32_t MEMRead_instr(uint64_t raddr){
    if(out_of_address(raddr)){
        return pmem_instr(raddr);
    }
    else{
         printf("PC At --> %016lx\n",raddr);
        printf("the memory is out of boundary,please check\n");
        sim_exit();
        assert(0);
    }
}

uint8_t* getMEMAddr(){
    return Memory;
} 

void MEM_init(){


    printf("Memory Size: %ld\n",sizeof(Memory));
}


