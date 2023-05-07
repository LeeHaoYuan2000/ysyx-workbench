#include "stdio.h"
#include "stdlib.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <..//obj_dir//VRegister.h>

int main(void){
    Verilated *context = new Verilated;
    VRegister *reg = new VRegister(context);
    VerilatedvcdC *wave = new VerilatedVcdC;

    context->traceEverOn(true);
    reg ->trace(wave,5);
    wave->open("wave_Register.vcd");
    reg->rs1Addr = 0;
    reg->rs2Addr = 0;
    int i = 0;
    
    while(true){
        if(i == 32){
            break;
        }
        reg->rdAddr = i;
        reg->dataBack = (long long)i;
        i++;
    }

    i =0;

    while(true){
        if(i == 32)
        {
            break;
        }

        reg->rs1Addr = i;
        reg->rs2Addr = (i+1)%32;

        i++;
    }

    delete reg;
    wave->close();
    delete context;


    return 0;
}



