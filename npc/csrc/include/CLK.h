#include <iostream>
#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include </home/ubuntu/ysyx-workbench/npc/obj_dir/Vtop.h>

class CLK {
    public:
        Vtop *top;
        VerilatedContext *context;
        VerilatedVcdC *wave;

        void InitTop(Vtop *inputTop);
        void setWaveForm();
        void rstOn();
        void ClkFlipOnce();
        void CloseWaveForm();
        
};

unsigned int getInstr(unsigned long PCAdderss);