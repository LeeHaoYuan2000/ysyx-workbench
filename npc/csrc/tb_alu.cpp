#include "stdio.h"
#include "stdlib.h"
#include "..//obj_dir//Valu.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main (void){
    Verilated *context = new Verilated;
    Valu *alu = new Valu(context);
    VerilatedVcdC *wave = new VerilatedVcdC;

    context->traceEverOn(true);
    alu->tracd(wave,5);
    wave->open("wave_alu.vcd");

    unsigned long long value1 = 0;
    unsigned long long value2 = 32;
    int i = 20;
    while(i){

        value1 += 2;
        value2 += 1;

        alu->adder1 = value1;
        alu->adder2 = value2;

        alu->eval();
        wave->dump(context->time());
        copntext->timeInc(10);

        i--;
    }
    delete alu;
    wave->close();
    delete context;

    return 0;
}