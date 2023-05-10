#include "stdio.h"
#include "stdlib.h"
#include "..//obj_dir//VSEXT.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main (void){
    VerilatedContext *context = new VerilatedContext;
    VSEXT *sext = new VSEXT(context);
    VerilatedVcdC *wave = new VerilatedVcdC;

    context->traceEverOn(true);
    sext->trace(wave,5);

    wave->open("wave_SEXT.vcd");
    unsigned int value = 0b00000000000;
    sext->imms = value;
    int i = 30;
    while(i){

        if(i>20){
            value += 0b000000000001;
        }
        else{
            value += 0b001000000000;
        }
        sext->imms = value;

        context->timeInc(5);

        sext->eval();
        wave->dump(context->time());
        context->timeInc(5);
        i--;
    }
    delete sext;
    wave->close();
    delete context;
    return 0;
}