/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/difftest.h>
//#include <klib.h>
#include "../local-include/reg.h"

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int i = 0;
  while(ref_r->gpr[i] == cpu.gpr[i] && ref_r->pc == cpu.pc){
    // if(i == 1){
    //   printf("add:%016lx \n",cpu.pc);
    //   printf("ref ra:%016lx   dut ra:%016lx\n",ref_r->gpr[i],cpu.gpr[i]);
    // }
    if(i>=31){
      return true;
    }
    i++;
  }
  if(ref_r->gpr[i] != cpu.gpr[i]){
    printf("%s  %d\n","gpr is wrong",i);
    printf(" ref_add:%016lx dut_add:%016lx \n",ref_r->pc,cpu.pc);
    printf("ref-r %016lx\n",ref_r->gpr[i]);
  }
  else {
    printf("%s \n","PC is wrong");
  }
  outputRingBuf();
  return false;
}
void isa_difftest_attach() {
}
