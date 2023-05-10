#include "stdio.h"
#include "stdlib.h"
#include "..//obj_dir//Valu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main (void){
    VerilatedContext *context = new VerilatedContext;
    Valu *alu = new Valu(context);
    VerilatedVcdC *wave = new VerilatedVcdC;

    context->traceEverOn(true);
    alu->trace(wave,5);
    wave->open("wave_alu.vcd");

    unsigned long long value1 = 0;
    unsigned long long value2 = 32;
    int i = 20;
    while(i){

        value1 += 153;
        value2 += 229;

        alu->adder1 = value1;
        alu->adder2 = value2;

        alu->eval();
        wave->dump(context->time());
        context->timeInc(10);

        i--;
    }
    delete alu;
    wave->close();
    delete context;

    return 0;
}