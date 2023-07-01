#include "verilated_dpi.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>


uint64_t* gpr_zero = NULL;
uint64_t* gpr_ra   = NULL;
uint64_t* gpr_sp   = NULL;
uint64_t* gpr_gp   = NULL;

uint64_t* gpr_tp   = NULL;
uint64_t* gpr_t0   = NULL;
uint64_t* gpr_t1   = NULL;
uint64_t* gpr_t2   = NULL;

uint64_t* gpr_s0   = NULL;
uint64_t* gpr_s1   = NULL;
uint64_t* gpr_a0   = NULL;
uint64_t* gpr_a1   = NULL;

uint64_t* gpr_a2   = NULL;
uint64_t* gpr_a3   = NULL;
uint64_t* gpr_a4   = NULL;
uint64_t* gpr_a5   = NULL;

uint64_t* gpr_a6   = NULL;
uint64_t* gpr_a7   = NULL;
uint64_t* gpr_s2   = NULL;
uint64_t* gpr_s3   = NULL;

uint64_t* gpr_s4   = NULL;
uint64_t* gpr_s5   = NULL;
uint64_t* gpr_s6   = NULL;
uint64_t* gpr_s7   = NULL;

uint64_t* gpr_s8   = NULL;
uint64_t* gpr_s9   = NULL;
uint64_t* gpr_s10  = NULL;
uint64_t* gpr_s11  = NULL;

uint64_t* gpr_t3   = NULL;
uint64_t* gpr_t4   = NULL;
uint64_t* gpr_t5   = NULL;
uint64_t* gpr_t6   = NULL;

uint8_t* reg_ebreak = NULL;

extern "C" void check_ebreak(const svOpenArrayHandle r) {
  reg_ebreak = (uint8_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void set_gpr_zero(const svOpenArrayHandle r){
     gpr_zero= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}; 
extern "C" void set_gpr_ra(const svOpenArrayHandle r){
    gpr_ra= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_sp(const svOpenArrayHandle r){
    gpr_sp= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_gp(const svOpenArrayHandle r){
    gpr_gp= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};  
extern "C" void set_gpr_tp(const svOpenArrayHandle r){
    gpr_tp= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_t0(const svOpenArrayHandle r){
    gpr_t0= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_t1(const svOpenArrayHandle r){
    gpr_t1= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};
extern "C" void set_gpr_t2(const svOpenArrayHandle r){
    gpr_t2= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};
extern "C" void set_gpr_s0(const svOpenArrayHandle r){
    gpr_s0= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_s1(const svOpenArrayHandle r){
    gpr_s1= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_a0(const svOpenArrayHandle r){
    gpr_a0= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};    
extern "C" void set_gpr_a1(const svOpenArrayHandle r){
    gpr_a1= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};
extern "C" void set_gpr_a2(const svOpenArrayHandle r){
    gpr_a2= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};
extern "C" void set_gpr_a3(const svOpenArrayHandle r){
    gpr_a3= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};
extern "C" void set_gpr_a4(const svOpenArrayHandle r){
    gpr_a4= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};    
extern "C" void set_gpr_a5(const svOpenArrayHandle r){
    gpr_a5= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};
extern "C" void set_gpr_a6(const svOpenArrayHandle r){
    gpr_a6= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_a7(const svOpenArrayHandle r){
    gpr_a7= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_s2(const svOpenArrayHandle r){
    gpr_s2= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};    
extern "C" void set_gpr_s3(const svOpenArrayHandle r){
    gpr_s3= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};
extern "C" void set_gpr_s4(const svOpenArrayHandle r){
    gpr_s4= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_s5(const svOpenArrayHandle r){
    gpr_s5= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_s6(const svOpenArrayHandle r){
    gpr_s6= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};    
extern "C" void set_gpr_s7(const svOpenArrayHandle r){
    gpr_s7= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};  
extern "C" void set_gpr_s8(const svOpenArrayHandle r){
    gpr_s8= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_s9(const svOpenArrayHandle r){
    gpr_s9= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_s10(const svOpenArrayHandle r){
    gpr_s10= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};  
extern "C" void set_gpr_s11(const svOpenArrayHandle r){
    gpr_s11= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}; 
extern "C" void set_gpr_t3(const svOpenArrayHandle r){
    gpr_t3= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_t4(const svOpenArrayHandle r){
    gpr_t4= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};   
extern "C" void set_gpr_t5(const svOpenArrayHandle r){
    gpr_t5= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};

extern "C" void set_gpr_t6(const svOpenArrayHandle r){
    gpr_t6= (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
};

int check_ebreak_now(){
    reg_ebreak == NULL ? printf("yes it`s  null\n") : printf("it`s not NULL\n");

    printf("ebreak_reg = %d\n",reg_ebreak[0]);
    if(reg_ebreak[0] != 0){
        if(gpr_a0 == 0){
            printf("Hit Good Trap\n");
            return 1;
        }
        else{
            printf("Hit Bad Trap\n");
            return 0;
        }
    }
    else{ //
        return 0; //ebreak didn`t come
    }
    
    return 0;
}

void Output_gpr(){
    printf("zero: %016lx \t ra: %016lx \t sp : %016lx \t gp : %016lx \n",*gpr_zero,*gpr_ra,*gpr_sp,*gpr_gp);

    printf("tp  : %016lx \t t0: %016lx \t t1 : %016lx \t t2 : %016lx \n",*gpr_tp,*gpr_t0,*gpr_t1,*gpr_t2);

    printf("s0  : %016lx \t s1: %016lx \t a0 : %016lx \t a1 : %016lx \n",*gpr_s0,*gpr_s1,*gpr_a0,*gpr_a1);

    printf("a2  : %016lx \t a3: %016lx \t a4 : %016lx \t a5 : %016lx \n",*gpr_a2,*gpr_a3,*gpr_a4,*gpr_a5);

    printf("a6  : %016lx \t a7: %016lx \t s2 : %016lx \t s3 : %016lx \n",*gpr_a6,*gpr_a7,*gpr_s2,*gpr_s3);

    printf("s4  : %016lx \t s5: %016lx \t s6 : %016lx \t s7 : %016lx \n",*gpr_s4,*gpr_s5,*gpr_s6,*gpr_s7);

    printf("s8  : %016lx \t s9: %016lx \t s10: %016lx \t s11: %016lx \n",*gpr_s8,*gpr_s9,*gpr_s10,*gpr_s11);

    printf("t3  : %016lx \t t4: %016lx \t t5 : %016lx \t t6 : %016lx \n",*gpr_t3,*gpr_t4,*gpr_t5,*gpr_t6);
}