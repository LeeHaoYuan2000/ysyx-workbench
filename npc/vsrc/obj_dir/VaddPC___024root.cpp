// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VaddPC.h for the primary calling header

#include "VaddPC___024root.h"
#include "VaddPC__Syms.h"

//==========

void VaddPC___024root___eval(VaddPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VaddPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPC___024root___eval\n"); );
}

QData VaddPC___024root___change_request_1(VaddPC___024root* vlSelf);

VL_INLINE_OPT QData VaddPC___024root___change_request(VaddPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VaddPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPC___024root___change_request\n"); );
    // Body
    return (VaddPC___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VaddPC___024root___change_request_1(VaddPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VaddPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPC___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VaddPC___024root___eval_debug_assertions(VaddPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VaddPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VaddPC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->adder & 0xf8U))) {
        Verilated::overWidthError("adder");}
}
#endif  // VL_DEBUG
