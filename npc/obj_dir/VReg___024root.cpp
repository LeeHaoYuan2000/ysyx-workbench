// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VReg.h for the primary calling header

#include "VReg___024root.h"
#include "VReg__Syms.h"

//==========

VL_INLINE_OPT void VReg___024root___combo__TOP__1(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->PC_Adder__02EPC_Next = (4ULL + vlSelf->PC_Adder__02EPC);
}

VL_INLINE_OPT void VReg___024root___sequent__TOP__3(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->PC_Reg__02EPC = ((IData)(vlSelf->rst) ? 0x80000000ULL
                              : vlSelf->PC_Reg__02EPC_Next);
}

void VReg___024root___eval(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___eval\n"); );
    // Body
    VReg___024root___combo__TOP__1(vlSelf);
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VReg___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData VReg___024root___change_request_1(VReg___024root* vlSelf);

VL_INLINE_OPT QData VReg___024root___change_request(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___change_request\n"); );
    // Body
    return (VReg___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VReg___024root___change_request_1(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VReg___024root___eval_debug_assertions(VReg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VReg___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
