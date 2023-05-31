// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_Adder.h for the primary calling header

#include "VPC_Adder___024root.h"
#include "VPC_Adder__Syms.h"

//==========

VL_INLINE_OPT void VPC_Adder___024root___combo__TOP__1(VPC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Adder___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->PC_Next = (4ULL + vlSelf->PC);
}

void VPC_Adder___024root___eval(VPC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Adder___024root___eval\n"); );
    // Body
    VPC_Adder___024root___combo__TOP__1(vlSelf);
}

QData VPC_Adder___024root___change_request_1(VPC_Adder___024root* vlSelf);

VL_INLINE_OPT QData VPC_Adder___024root___change_request(VPC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Adder___024root___change_request\n"); );
    // Body
    return (VPC_Adder___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VPC_Adder___024root___change_request_1(VPC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Adder___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPC_Adder___024root___eval_debug_assertions(VPC_Adder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Adder___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
