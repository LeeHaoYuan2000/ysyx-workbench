// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VReg.h for the primary calling header

#include "VReg___024root.h"
#include "VReg__Syms.h"

//==========


void VReg___024root___ctor_var_reset(VReg___024root* vlSelf);

VReg___024root::VReg___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VReg___024root___ctor_var_reset(this);
}

void VReg___024root::__Vconfigure(VReg__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VReg___024root::~VReg___024root() {
}

void VReg___024root___eval_initial(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void VReg___024root___combo__TOP__1(VReg___024root* vlSelf);

void VReg___024root___eval_settle(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___eval_settle\n"); );
    // Body
    VReg___024root___combo__TOP__1(vlSelf);
}

void VReg___024root___final(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___final\n"); );
}

void VReg___024root___ctor_var_reset(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->PC_Adder__02EPC = VL_RAND_RESET_Q(64);
    vlSelf->PC_Adder__02EPC_Next = VL_RAND_RESET_Q(64);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->PC_Reg__02EPC_Next = VL_RAND_RESET_Q(64);
    vlSelf->PC_Reg__02EPC = VL_RAND_RESET_Q(64);
}
