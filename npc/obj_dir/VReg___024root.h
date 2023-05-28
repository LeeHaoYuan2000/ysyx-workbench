// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VReg.h for the primary calling header

#ifndef VERILATED_VREG___024ROOT_H_
#define VERILATED_VREG___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VReg__Syms;
class VReg_VerilatedVcd;


//----------

VL_MODULE(VReg___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN64(PC_Adder__02EPC,63,0);
    VL_OUT64(PC_Adder__02EPC_Next,63,0);
    VL_IN64(PC_Reg__02EPC_Next,63,0);
    VL_OUT64(PC_Reg__02EPC,63,0);

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;

    // INTERNAL VARIABLES
    VReg__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VReg___024root);  ///< Copying not allowed
  public:
    VReg___024root(const char* name);
    ~VReg___024root();

    // INTERNAL METHODS
    void __Vconfigure(VReg__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
