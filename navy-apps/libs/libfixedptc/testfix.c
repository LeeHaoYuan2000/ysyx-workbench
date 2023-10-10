#include <stdio.h>
#include "./include/fixedptc.h"

int main (void){

    fixedpt A = fixedpt_rconst(2.5);
    fixedpt B = fixedpt_rconst(3);
    fixedpt C = fixedpt_rconst(0.5);

    fixedpt D = fixedpt_rconst(10);
    fixedpt E = fixedpt_rconst(4);

    fixedpt F = fixedpt_rconst(4);

    fixedpt result = fixedpt_mul(A,B);
    fixedpt result_muli = fixedpt_muli(A,4);
    fixedpt result_div  = fixedpt_div(D,E);
    fixedpt result_divi = fixedpt_divi(D,2);

    printf("the mul result is %f \n",fixedpt_tofloat(result));
    printf("the muli result is %f \n",fixedpt_tofloat(result_muli));
    printf("the div result is %f \n",fixedpt_tofloat(result_div));
    printf("the divi result is %f \n",fixedpt_tofloat(result_divi));
    printf("the ceil result is %f \n",fixedpt_tofloat(fixedpt_ceil(C)));
    printf("the floor result is %f \n",fixedpt_tofloat(fixedpt_floor(C)));
    printf("the abs  result is %f  \n",fixedpt_tofloat(fixedpt_abs(F)));

    
    return 0;
}