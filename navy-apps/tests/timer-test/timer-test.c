#include <unistd.h>
#include <stdio.h>
#include "sys/time.h"
#include "../../libs/libndl/include/NDL.h"

int main(){
    unsigned long int cur_time  = 0;
    unsigned long int last_time = 0;

    printf("in timer test \n");

    NDL_Init(1);

    printf("in timer test 2\n");

    cur_time  =  NDL_GetTicks();
    last_time =  NDL_GetTicks();

    printf("in timer test 3\n");
    while(1){

        cur_time  =  NDL_GetTicks();
        if(cur_time - last_time >= 5000){
            last_time =  cur_time;
            printf("output time :::%ld \n",cur_time);
        }

    }


    return 0;
}