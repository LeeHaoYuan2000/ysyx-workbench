/*
    this is the head file for all trace function

*/

#include "stdio.h"
#include "stdlib.h"

typedef unsigned long int uint_64;

typedef struct
{
    /* data */
    uint_64 mtvec;
    uint_64 mcause;
    uint_64 mstatus;
    uint_64 mepc;
}etrace;
