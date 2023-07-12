#include "stdlib.h"
#include "stdio.h"
#include "assert.h"
#include "dlfcn.h"

void (*ref_difftest_memcpy)(unsigned long long  addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(unsigned long long  n) = NULL;
void (*ref_difftest_raise_intr)(unsigned long long NO) = NULL;

void init_difftest(char* ref_so_file,long img_size,int port){
    assert(ref_so_file != NULL);

    void* handle;
    handle = dlopen(ref_so_file,RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);

    ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
    assert(ref_difftest_raise_intr);

    void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
    assert(ref_difftest_init);

    ref_difftest_init(1);
    ref_difftest_memcpy(, , , );
    ref_difftest_regcpy(,);
}

static void checkregs(){

}

void difftest_exe(){
    
}