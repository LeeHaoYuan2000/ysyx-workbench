#include <stdio.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include </home/ubuntu/ysyx-workbench/npc/csrc/include/CLK.h>

//#define Trace_on

void CLK::InitTop(Vtop *inputTop){
    top = inputTop;
}

void CLK::setWaveForm(){
    context = new VerilatedContext;
    top = new Vtop(context);

    #ifdef Trace_on
        wave  = new VerilatedVcdC;
        context->traceEverOn(true);
        top->trace(wave,5);
        wave->open("top.vcd");
    #endif

    top->clk = 0;
    top->rst = 1;
    top->eval();

    #ifdef Trace_on
        wave->dump(context->time());
    #endif
}

void CLK::rstOn(){
    int i = 5;
    while(i--){
        context->timeInc(1);
        top->clk = ~top->clk;
        top->rst = 1;
        top->eval(); 
    #ifdef Trace_on
        wave->dump(context->time());
    #endif

    }
    top->rst = 0;
    top->instr_in = getInstr(top->PC_Test);
    top->eval();
    printf("%016lx\t %08x\n",top->PC_Test,top->instr_out);
}
void CLK::ClkFlipOnce(){
    context->timeInc(1);
    top->clk = ~top->clk;
    top->eval();

    context->timeInc(1);
    top->clk = ~top->clk;
    top->eval();
    top->instr_in = getInstr(top->PC_Test);
    top->eval();

    #ifdef Trace_on
        wave->dump(context->time());
    #endif

    printf("%016lx\t %08x\n",top->PC_Test,top->instr_out);

}
void CLK::CloseWaveForm(){
    
    delete top;
    #ifdef Trace_on
        wave->close();
        delete wave;
    #endif
    delete context;
}

unsigned int getInstr(unsigned long PCAdderss){
    if(((PCAdderss-0x0000000080000000)/4)%2){
        return 0x01c50513;
    }
    else{
        return 0x00050513;
    }
}