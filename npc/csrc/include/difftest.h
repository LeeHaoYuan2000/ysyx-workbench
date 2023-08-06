#include "stdio.h"
#include "stdlib.h"

void init_difftest(char* ref_so_file,long img_size,int port);

static void checkregs(u_int64_t* reg_ref,u_int64_t pc_dut);

void difftest_exe(u_int64_t pc_dut);

inline void difftest_skip_ref() {}