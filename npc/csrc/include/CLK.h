#include <iostream>
#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <../../obj_dir/Vtop.h>

class CLK {
    public:
        Vtop *top;
        VerilatedContext *context;
        VerilatedVcdC *wave;
        void setWaveForm();
        void rstOn();
        void ClkExeOnece();
        void CloseWaveForm();
}