#include <stdio.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include </home/ubuntu/ysyx-workbench/npc/csrc/include/CLK.h>

#include ".//include//initMEM.h"

#include "./include/RegFile.h"

//#define Trace_on
/* verilator lint_off UNOPTTHREADS */

void CLK::InitTop(Vtop *inputTop){
    top = inputTop;

    printf("是 initTop 里面出问题了吗？\n");
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

    printf("是 setWaveForm里面出问题了吗\n");

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
    printf("11\n");
    top->instr_in = getInstr(top->PC_Test);
    printf("是第一次取指令出错了吗？");
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
     printf("是不是这里出错了2 \n");
    context->timeInc(1);
    top->clk = ~top->clk;
    top->eval();

    printf("是不是这里出错了1 \n");

    context->timeInc(1);
    top->clk = ~top->clk;
    top->eval();
    top->instr_in = getInstr(top->PC_Test);
    printf("是不是这里出错了4 \n");
    top->eval();
    printf("是不是这里出错了5 \n");
    verilator_stop_check(top,context);

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
    printf("%016lx\n",PCAdderss);
    uint64_t Data_instr = NULL;
    printf("准备开始取指令了，首先地址为：%016lx\n",PCAdderss);
    MEMRead(PCAdderss,&Data_instr);
    printf("让我看看取出来的指令是：%016lx\n",Data_instr);
    Data_instr = Data_instr & 0x00000000FFFFFFFF; //the Data_instr is 64 bits, the instr is 32 bits
     printf("运行了吗？3\n");
    return (uint32_t)Data_instr;
}


void verilator_stop_check(Vtop *inputTop,VerilatedContext* context){
    printf("运行了吗？1\n");
    if(check_ebreak_now()){
        delete inputTop;
        #ifdef Trace_on
            wave->close();
            delete wave;
        #endif
        delete context;
    }
    printf("运行了吗？2\n");
}