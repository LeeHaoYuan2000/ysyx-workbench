// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPC_Reg.h for the primary calling header

#ifndef VERILATED_VPC_REG___024ROOT_H_
#define VERILATED_VPC_REG___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VPC_Reg__Syms;

//----------

VL_MODULE(VPC_Reg___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN64(PC_Next,63,0);
    VL_OUT64(PC,63,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    VPC_Reg__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VPC_Reg___024root);  ///< Copying not allowed
  public:
    VPC_Reg___024root(const char* name);
    ~VPC_Reg___024root();

    // INTERNAL METHODS
    void __Vconfigure(VPC_Reg__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
