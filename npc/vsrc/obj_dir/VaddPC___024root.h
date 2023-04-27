// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VaddPC.h for the primary calling header

#ifndef VERILATED_VADDPC___024ROOT_H_
#define VERILATED_VADDPC___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VaddPC__Syms;

//----------

VL_MODULE(VaddPC___024root) {
  public:

    // PORTS
    VL_IN8(rst,0,0);
    VL_IN8(adder,2,0);
    VL_IN64(PC,63,0);
    VL_OUT64(out,63,0);

    // INTERNAL VARIABLES
    VaddPC__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VaddPC___024root);  ///< Copying not allowed
  public:
    VaddPC___024root(const char* name);
    ~VaddPC___024root();

    // INTERNAL METHODS
    void __Vconfigure(VaddPC__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
