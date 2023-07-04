#include <stdio.h>
#include <iostream>
#include <stdlib.h>

#include "verilated.h"
#include "verilated_dpi.h"

#include "getopt.h"
#include "initMEM.h"
#include "RegFile.h"


void sim_init(int argc,char *argv[]);
 void exe_and_dump();
 void  sim_single_cycle();
 void sim_rst_n(uint32_t n);
 void sim_exit();
 int  sim_exe(uint64_t n);