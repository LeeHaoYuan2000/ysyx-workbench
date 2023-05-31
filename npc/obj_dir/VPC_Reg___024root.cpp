// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPC_Reg.h for the primary calling header

#include "VPC_Reg___024root.h"
#include "VPC_Reg__Syms.h"

//==========

VL_INLINE_OPT void VPC_Reg___024root___sequent__TOP__1(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->PC = ((IData)(vlSelf->rst) ? 0x80000000ULL
                   : vlSelf->PC_Next);
}

void VPC_Reg___024root___eval(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VPC_Reg___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData VPC_Reg___024root___change_request_1(VPC_Reg___024root* vlSelf);

VL_INLINE_OPT QData VPC_Reg___024root___change_request(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___change_request\n"); );
    // Body
    return (VPC_Reg___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VPC_Reg___024root___change_request_1(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VPC_Reg___024root___eval_debug_assertions(VPC_Reg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPC_Reg___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
