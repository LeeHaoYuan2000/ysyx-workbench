// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPC_Adder.h for the primary calling header

#ifndef VERILATED_VPC_ADDER___024ROOT_H_
#define VERILATED_VPC_ADDER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VPC_Adder__Syms;

//----------

VL_MODULE(VPC_Adder___024root) {
  public:

    // PORTS
    VL_IN64(PC,63,0);
    VL_OUT64(PC_Next,63,0);

    // INTERNAL VARIABLES
    VPC_Adder__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPC_Adder___024root);  ///< Copying not allowed
  public:
    VPC_Adder___024root(const char* name);
    ~VPC_Adder___024root();

    // INTERNAL METHODS
    void __Vconfigure(VPC_Adder__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
