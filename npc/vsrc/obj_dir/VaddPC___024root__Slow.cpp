// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VaddPC.h for the primary calling header

#include "VaddPC___024root.h"
#include "VaddPC__Syms.h"

//==========


void VaddPC___024root___ctor_var_reset(VaddPC___024root* vlSelf);

VaddPC___024root::VaddPC___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VaddPC___024root___ctor_var_reset(this);
}

void VaddPC___024root::__Vconfigure(VaddPC__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VaddPC___024root::~VaddPC___024root() {
}

void VaddPC___024root___eval_initial(VaddPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VaddPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPC___024root___eval_initial\n"); );
}

void VaddPC___024root___eval_settle(VaddPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VaddPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPC___024root___eval_settle\n"); );
}

void VaddPC___024root___final(VaddPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VaddPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPC___024root___final\n"); );
}

void VaddPC___024root___ctor_var_reset(VaddPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VaddPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->PC = VL_RAND_RESET_Q(64);
    vlSelf->adder = VL_RAND_RESET_I(3);
    vlSelf->out = VL_RAND_RESET_Q(64);
}
