// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegPC.h for the primary calling header

#include "verilated.h"

#include "VRegPC__Syms.h"
#include "VRegPC___024root.h"

void VRegPC___024root___ctor_var_reset(VRegPC___024root* vlSelf);

VRegPC___024root::VRegPC___024root(VRegPC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRegPC___024root___ctor_var_reset(this);
}

void VRegPC___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRegPC___024root::~VRegPC___024root() {
}
