#include <iostream>
#include <stdlib.h>
#include <malloc.h>
#include "../include/initMEM.h"
#include "assert.h"
#include "../include/sim_init.h"
#include "../include/globalDefine.h"
#include "../include/macro.h"
#include "../include/Device/mmio.h"
#include "../../obj_dir/Vtop.h"

#define CONFIG_MSIZE 0x8000000
#define MEM_Start 0x80000000

u_int8_t Memory[0x8000000];

u_int64_t* guest_to_host(u_int64_t addr) {return  ((u_int64_t*)(Memory + addr - MEM_Start) );}

u_int64_t host_read(u_int64_t *addr, int len){
    switch (len)
    {
    case 1: return *(u_int8_t *) addr; 
    case 2: return *(u_int16_t *)addr ;
    case 4: return *(u_int32_t *)addr ;
    case 8: return *(u_int64_t *)addr ;

    default:
        return *(u_int64_t *) addr;
    }
}

void host_write(u_int64_t *addr,int len, u_int64_t data){
    switch (len)
    {
    case 1: *(u_int8_t *) addr = data; break;
    case 2: *(u_int16_t *)addr = data; break;
    case 4: *(u_int32_t *)addr = data; break;
    case 8: *(u_int64_t *)addr = data; break;
    default:
        break;
    }
}

bool in_pmem(u_int64_t addr){ //判断地址是否有效
    return addr - MEM_Start < CONFIG_MSIZE;
}

void out_of_mem(u_int64_t addr){
     printf("the memory is out of boundary,please check\n");
     printf("AT ------> %016lx \n",addr);
    sim_exit();
    assert(0); 
}


//use the little endian to store the date
void pmem_read(uint64_t raddr,uint64_t* rdata,uint64_t len){
    if(in_pmem(raddr)){
        *rdata = host_read(guest_to_host(raddr),len);
        return ;
    }

    else if((raddr & 0xffffffffa0000000) == 0x00000000a0000000){
         *rdata =  mmio_read(raddr, len);
         return ;
    }
   
    out_of_mem(raddr);
    return ;
}


void pmem_write(uint64_t waddr,uint64_t wdata, uint8_t wmask){
    if(in_pmem(waddr)){
        host_write(guest_to_host(waddr), wmask , wdata);
        return ;
    }
    else if((waddr & 0x00000000a0000000) == 0x00000000a0000000){
        mmio_write(waddr , wmask , wdata);
        return ;
    }
     out_of_mem(waddr);
    return ;
}

//读取指令
uint32_t pmem_instr(uint64_t raddr){
    return  *(uint32_t*)(Memory + raddr - 0x80000000);
}
// this function is used to read the instruction
uint32_t MEMRead_instr(uint64_t raddr){
    if(in_pmem(raddr)){
        return pmem_instr(raddr);
    }
    out_of_mem(raddr);
    return 0;
}

uint8_t* getMEMAddr(){
    return Memory;
} 

void MEM_init(){
    printf("Memory Size: %ld\n",sizeof(Memory));
}


void MEM_Opration(Vtop* top){//
    if(top->MEM_Enable == 1){
        if(top->MEM_Read){//进行read 操作
            u_int64_t rdata;
            pmem_read(top->MEM_Addr , &rdata , top->MEM_DataLenth);
            top->MEM_Datainput = rdata;
        }
        else{//进行write 操作
            pmem_write(top->MEM_Addr,top->MEM_Dataoutput,top->MEM_DataLenth);
        }
    }

}


