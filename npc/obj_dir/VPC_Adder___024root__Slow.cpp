// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_Adder.h for the primary calling header

#include "VPC_Adder___024root.h"
#include "VPC_Adder__Syms.h"

//==========


void VPC_Adder___024root___ctor_var_reset(VPC_Adder___024root* vlSelf);

VPC_Adder___024root::VPC_Adder___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VPC_Adder___024root___ctor_var_reset(this);
}

void VPC_Adder___024root::__Vconfigure(VPC_Adder__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VPC_Adder___024root::~VPC_Adder___024root() {
}

void VPC_Adder___024root___eval_initial(VPC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Adder___024root___eval_initial\n"); );
}

void VPC_Adder___024root___combo__TOP__1(VPC_Adder___024root* vlSelf);

void VPC_Adder___024root___eval_settle(VPC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Adder___024root___eval_settle\n"); );
    // Body
    VPC_Adder___024root___combo__TOP__1(vlSelf);
}

void VPC_Adder___024root___final(VPC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Adder___024root___final\n"); );
}

void VPC_Adder___024root___ctor_var_reset(VPC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Adder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->PC = VL_RAND_RESET_Q(64);
    vlSelf->PC_Next = VL_RAND_RESET_Q(64);
}
