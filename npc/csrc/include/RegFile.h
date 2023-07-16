#include <stdio.h>
#include <stdlib.h>
#include <iostream>

void Output_gpr();

int check_ebreak_now();

uint64_t get_a0();

bool difftest_checkregs(uint64_t* ref_regs,uint64_t pc_dut);
