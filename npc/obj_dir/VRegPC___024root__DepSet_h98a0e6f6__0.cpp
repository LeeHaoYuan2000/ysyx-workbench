// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegPC.h for the primary calling header

#include "verilated.h"

#include "VRegPC___024root.h"

void VRegPC___024root___eval_act(VRegPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegPC___024root___eval_act\n"); );
}

VL_INLINE_OPT void VRegPC___024root___nba_sequent__TOP__0(VRegPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegPC___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->rst) {
        vlSelf->out = 0x80000000ULL;
    } else if (vlSelf->wen) {
        vlSelf->out = vlSelf->data;
    }
}

void VRegPC___024root___eval_nba(VRegPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegPC___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VRegPC___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VRegPC___024root___eval_triggers__act(VRegPC___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegPC___024root___dump_triggers__act(VRegPC___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegPC___024root___dump_triggers__nba(VRegPC___024root* vlSelf);
#endif  // VL_DEBUG

void VRegPC___024root___eval(VRegPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegPC___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VRegPC___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VRegPC___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("vsrc/RegPC.v", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VRegPC___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VRegPC___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("vsrc/RegPC.v", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VRegPC___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VRegPC___024root___eval_debug_assertions(VRegPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegPC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->wen & 0xfeU))) {
        Verilated::overWidthError("wen");}
}
#endif  // VL_DEBUG
