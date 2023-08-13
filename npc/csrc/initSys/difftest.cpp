#include "stdlib.h"
#include "stdio.h"
#include "assert.h"
#include "dlfcn.h"
#include "../include/initMEM.h"
#include "../include/RegFile.h"
#include "../include/sim_init.h"

#define ref_addr 0x80000000
#define Difftest_To_Ref 1
#define Difftest_To_Dut 0

bool is_skip_ref = false;

void (*ref_difftest_memcpy)(unsigned long long  addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(unsigned long long  n) = NULL;
void (*ref_difftest_raise_intr)(unsigned long long NO) = NULL;

void init_difftest(char* ref_so_file,long img_size,int port){
    assert(ref_so_file != NULL);

    void* handle;
    handle = dlopen(ref_so_file,RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = (void(*)(unsigned long long, void*, size_t , bool))dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = (void(*)(void*, bool))dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = (void(*)(unsigned long long))dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);

    ref_difftest_raise_intr = (void(*)(unsigned long long))dlsym(handle, "difftest_raise_intr");
    assert(ref_difftest_raise_intr);

    void (*ref_difftest_init)(int) = (void(*)(int))dlsym(handle, "difftest_init");
    assert(ref_difftest_init);

    ref_difftest_init(port);
    ref_difftest_memcpy(ref_addr,getMEMAddr(),img_size,Difftest_To_Ref);
    //ref_difftest_regcpy(,);
}

static void checkregs(u_int64_t* reg_ref,u_int64_t pc_dut){
    //去编写比对执行文件
    if(!difftest_checkregs(reg_ref,pc_dut)){
         sim_exit();
    }
}

void difftest_skip_ref(){
    is_skip_ref = true;
}

void difftest_exe(u_int64_t pc_dut){
    uint64_t regs[33];
    uint64_t ref_PC = 0;

    if(is_skip_ref){
        uint64_t* reg_data = get_cpu_regs();
        
        for(int i = 0; i < 32 ; i++){
            regs[i] = *(reg_data + i);
        }

        regs[32] = pc_dut + 4;
        ref_difftest_regcpy(regs,Difftest_To_Ref);
        is_skip_ref = false;
        return ;
    }

    ref_difftest_regcpy(regs,Difftest_To_Dut);//首先获取当前的PC数值
    ref_PC = regs[32];
    ref_difftest_exec(1);
    ref_difftest_regcpy(regs,Difftest_To_Dut);
    regs[32] = ref_PC;//

    checkregs(regs,pc_dut);
}