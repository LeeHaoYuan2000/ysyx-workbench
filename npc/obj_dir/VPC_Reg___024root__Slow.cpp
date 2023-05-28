// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_Reg.h for the primary calling header

#include "VPC_Reg___024root.h"
#include "VPC_Reg__Syms.h"

//==========


void VPC_Reg___024root___ctor_var_reset(VPC_Reg___024root* vlSelf);

VPC_Reg___024root::VPC_Reg___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VPC_Reg___024root___ctor_var_reset(this);
}

void VPC_Reg___024root::__Vconfigure(VPC_Reg__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VPC_Reg___024root::~VPC_Reg___024root() {
}

void VPC_Reg___024root___settle__TOP__2(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->PC_Test = vlSelf->top__DOT__PC_Wire;
    vlSelf->top__DOT__PC_Next_Wire = (4ULL + vlSelf->top__DOT__PC_Wire);
}

void VPC_Reg___024root___eval_initial(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void VPC_Reg___024root___eval_settle(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___eval_settle\n"); );
    // Body
    VPC_Reg___024root___settle__TOP__2(vlSelf);
}

void VPC_Reg___024root___final(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___final\n"); );
}

void VPC_Reg___024root___ctor_var_reset(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->PC_Test = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__PC_Wire = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__PC_Next_Wire = VL_RAND_RESET_Q(64);
}
