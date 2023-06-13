#include <stdio.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include </home/ubuntu/ysyx-workbench/npc/csrc/include/CLK.h>

//#define Trace_on
/* verilator lint_off UNOPTTHREADS */

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
    printf("%016lx\t %08x\t %ld\t %d\n",top->PC_Test,top->instr_in,top->SEXT_result,top->SEXT_Control_out);
    printf("RS1: %ld\t RS2:%ld\n",top->RS1_OUTPUT,top->RS2_OUTPUT);
    printf("ALU_Result: %ld\n",top->ALU_Result);
    printf("-----------------Control Signale----------------\n");
    printf("Write_Back: %d    \n",top->WriteBack_Enable_result);
    printf("RS1 or PC: %d\t RS2 or imm:%d\n",top->C_RS1_PC_Connector_result,top->C_RS2_imm_Connector_result);
    printf("ALU or MEM:%d\t ALU or NPC:%d\n",top->C_ALU_MEM_Connector_result,top->C_ALU_NPC_In_Connector_result);
    printf("NPC or Branch or Jump : %d\n",top->C_NPC_Branch_Jump_Connector_result);
    printf("-----------------Control Signale----------------\n");
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

    printf("%016lx\t %08x\t %ld\t %d\n",top->PC_Test,top->instr_in,top->SEXT_result,top->SEXT_Control_out);
    printf("RS1: %ld\t RS2:%ld\n",top->RS1_OUTPUT,top->RS2_OUTPUT);
    printf("ALU_Result: %ld \n",top->ALU_Result);
    printf("-----------------Control Signale----------------\n");
    printf("Write_Back: %d    \n",top->WriteBack_Enable_result);
    printf("RS1 or PC: %d\t RS2 or imm:%d\n",top->C_RS1_PC_Connector_result,top->C_RS2_imm_Connector_result);
    printf("ALU or MEM:%d\t ALU or NPC:%d\n",top->C_ALU_MEM_Connector_result,top->C_ALU_NPC_In_Connector_result);
    printf("NPC or Branch or Jump : %d\n",top->C_NPC_Branch_Jump_Connector_result);
    printf("-----------------Control Signale----------------\n");

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

    unsigned long result = ((PCAdderss-0x0000000080000000)/4)%6;

    switch (result)
    {
    case 0:
        return 0x00f57533; //and
        break;
    case 1:
        return 0xfe8990e3; //bne
        break;
    case 2:
        return 0x05448263; //beq
        break;
    case 3:
        return 0x00e6d663; //bge
        break;
    case 4:
        return 0b00000001110011011000000000111011; 
        break;
    
    default:
        return 0b00000001110111100000000000111011; //0b0000000 11110 11101 000 000000111011
        break;                                   
    }
}