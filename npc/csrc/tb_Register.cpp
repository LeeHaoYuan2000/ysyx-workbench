#include "stdio.h"
#include "stdlib.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <..//obj_dir//VRegister.h>

int main(void){
    VerilatedContext *context = new VerilatedContext;
    VRegister *reg = new VRegister(context);
    VerilatedVcdC *wave = new VerilatedVcdC;

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

        reg->eval();
        wave->dump(context->time());
        context->timeInc(5);
    }

    i =0;

    while(true){
        if(i == 32)
        {
            break;
        }

        reg->rs1Addr = i;
        reg->rs2Addr = (i+1)%32;

        reg->eval();
        wave->dump(context->time());
        context->timeInc(5);

        i++;
    }

    delete reg;
    wave->close();
    delete context;


    return 0;
}



