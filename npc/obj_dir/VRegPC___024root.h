// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRegPC.h for the primary calling header

#ifndef VERILATED_VREGPC___024ROOT_H_
#define VERILATED_VREGPC___024ROOT_H_  // guard

#include "verilated.h"

class VRegPC__Syms;

class VRegPC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(wen,0,0);
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(data,63,0);
    VL_OUT64(out,63,0);
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRegPC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRegPC___024root(VRegPC__Syms* symsp, const char* v__name);
    ~VRegPC___024root();
    VL_UNCOPYABLE(VRegPC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
