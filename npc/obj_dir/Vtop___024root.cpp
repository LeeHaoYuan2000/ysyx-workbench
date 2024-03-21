// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

extern const VlUnpacked<CData/*2:0*/, 64> Vtop__ConstPool__TABLE_2d10de51_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*5:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdly__top__DOT__READ_INSTR_START;
    CData/*0:0*/ __Vdly__INSTR_ARRIVE;
    CData/*0:0*/ __Vdly__top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY;
    CData/*0:0*/ __Vdly__top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY;
    CData/*0:0*/ __Vdly__top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID;
    QData/*63:0*/ __Vdly__top__DOT__PC_TO_IFU;
    // Body
    __Vdly__top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY 
        = vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY;
    __Vdly__top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY 
        = vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY;
    __Vdly__top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID 
        = vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID;
    __Vdly__top__DOT__PC_TO_IFU = vlSelf->top__DOT__PC_TO_IFU;
    __Vdly__INSTR_ARRIVE = vlSelf->INSTR_ARRIVE;
    __Vdly__top__DOT__READ_INSTR_START = vlSelf->top__DOT__READ_INSTR_START;
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_RESP = 0U;
    __Vdly__top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY 
        = ((~ (IData)(vlSelf->rst)) & ((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID) 
                                       & (~ (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY))));
    vlSelf->READ_SIGNAL = ((~ (IData)(vlSelf->rst)) 
                           & (((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID) 
                               & (~ (IData)(vlSelf->READ_SIGNAL))) 
                              | ((~ ((IData)(vlSelf->READ_FINISH) 
                                     & (IData)(vlSelf->READ_SIGNAL))) 
                                 & (IData)(vlSelf->READ_SIGNAL))));
    __Vdly__top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY 
        = ((~ (IData)(vlSelf->rst)) & ((~ (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY)) 
                                       & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID)));
    __Vdly__top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID 
        = ((~ (IData)(vlSelf->rst)) & (((IData)(vlSelf->READ_FINISH) 
                                        & (~ (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID))) 
                                       | ((~ ((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID) 
                                              & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY))) 
                                          & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID))));
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID 
        = ((~ (IData)(vlSelf->rst)) & ((((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_req) 
                                         & (~ (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID))) 
                                        & (~ (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state))) 
                                       | ((~ (((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID) 
                                               & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY)) 
                                              & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state))) 
                                          & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_VALID))));
    if (vlSelf->rst) {
        __Vdly__top__DOT__PC_TO_IFU = 0x80000000ULL;
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address = 0ULL;
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_data = 0ULL;
    } else {
        __Vdly__top__DOT__PC_TO_IFU = ((IData)(vlSelf->INSTR_Complete)
                                        ? vlSelf->top__DOT__PC_NEXT
                                        : vlSelf->top__DOT__PC_TO_IFU);
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address 
            = vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR;
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_data 
            = vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf;
    }
    __Vdly__INSTR_ARRIVE = ((~ (IData)(vlSelf->rst)) 
                            & (((IData)(vlSelf->top__DOT__READ_INSTR_FINISH) 
                                & (~ (IData)(vlSelf->INSTR_ARRIVE))) 
                               | ((~ ((IData)(vlSelf->INSTR_ARRIVE) 
                                      & (IData)(vlSelf->INSTR_Complete))) 
                                  & (IData)(vlSelf->INSTR_ARRIVE))));
    if (vlSelf->rst) {
        vlSelf->INSTR_DATA = 0U;
        vlSelf->top__DOT__INSTR_ADDR = 0ULL;
    } else {
        vlSelf->INSTR_DATA = (((IData)(vlSelf->top__DOT__READ_INSTR_FINISH) 
                               & (~ (IData)(vlSelf->INSTR_ARRIVE)))
                               ? (IData)(vlSelf->top__DOT__INSTR_TO_IFU)
                               : vlSelf->INSTR_DATA);
        vlSelf->top__DOT__INSTR_ADDR = ((1U & ((((~ (IData)(vlSelf->top__DOT__READ_INSTR_FINISH)) 
                                                 & (~ (IData)(vlSelf->INSTR_ARRIVE))) 
                                                & (~ (IData)(vlSelf->INSTR_Complete))) 
                                               & (~ (IData)(vlSelf->top__DOT__READ_INSTR_START))))
                                         ? vlSelf->top__DOT__PC_TO_IFU
                                         : vlSelf->top__DOT__INSTR_ADDR);
    }
    __Vdly__top__DOT__READ_INSTR_START = (1U & ((~ (IData)(vlSelf->rst)) 
                                                & (((((~ (IData)(vlSelf->top__DOT__READ_INSTR_FINISH)) 
                                                      & (~ (IData)(vlSelf->INSTR_ARRIVE))) 
                                                     & (~ (IData)(vlSelf->INSTR_Complete))) 
                                                    & (~ (IData)(vlSelf->top__DOT__READ_INSTR_START))) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->top__DOT__READ_INSTR_FINISH) 
                                                        & (~ (IData)(vlSelf->top__DOT__READ_INSTR_START)))) 
                                                      & (IData)(vlSelf->top__DOT__READ_INSTR_START)))));
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state 
        = ((~ (IData)(vlSelf->rst)) & (((~ (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state)) 
                                        & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_req)) 
                                       | ((~ ((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state) 
                                              & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish))) 
                                          & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_master__DOT__lock_state))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri = 1U;
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot = 0U;
    } else {
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri 
            = ((2U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state))
                ? ((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__aribter_release)
                    ? ((2U & ((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri) 
                              << 1U)) | (1U & ((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri) 
                                               >> 1U)))
                    : (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri))
                : (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri));
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot 
            = (((1U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state)) 
                & (2U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state)))
                ? ((IData)(vlSelf->top__DOT__READ_INSTR_START) 
                   << 1U) : ((1U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state))
                              ? 0U : (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot)));
    }
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY 
        = __Vdly__top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_READY;
    vlSelf->top__DOT__PC_TO_IFU = __Vdly__top__DOT__PC_TO_IFU;
    vlSelf->INSTR_ARRIVE = __Vdly__INSTR_ARRIVE;
    vlSelf->top__DOT__READ_INSTR_START = __Vdly__top__DOT__READ_INSTR_START;
    vlSelf->READ_ADDR = vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_address;
    if (vlSelf->rst) {
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR = 0ULL;
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf = 0ULL;
    } else {
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__AR_ADDR 
            = vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_addr;
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__read_slave__DOT__data_buf 
            = vlSelf->READ_DATA;
    }
    vlSelf->top__DOT__PC_NEXT = (4ULL + vlSelf->top__DOT__PC_TO_IFU);
    if (vlSelf->rst) {
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish = 0U;
    } else if (((~ (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY)) 
                & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID))) {
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish = 1U;
    } else if (((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY) 
                & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID))) {
        vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish = 0U;
    }
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state 
        = ((IData)(vlSelf->rst) ? 1U : (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state));
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY 
        = __Vdly__top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_READY;
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID 
        = __Vdly__top__DOT__axi4_read_with_arbiter__DOT__AXI4_READ_MODUAL__DOT__R_VALID;
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel 
        = ((2U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state))
            ? ((~ ((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot) 
                   - (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__pri))) 
               & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__req_shot))
            : 0U);
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_addr 
        = ((1U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel))
            ? 0ULL : ((2U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel))
                       ? vlSelf->top__DOT__INSTR_ADDR
                       : 0ULL));
    if ((1U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel))) {
        vlSelf->ex_data = vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_data;
    }
    if ((1U != (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel))) {
        if ((2U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel))) {
            vlSelf->top__DOT__INSTR_TO_IFU = vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_data;
        }
    }
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_req 
        = ((1U != (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel)) 
           & ((2U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel)) 
              & (IData)(vlSelf->top__DOT__READ_INSTR_START)));
    vlSelf->ec_finish = ((1U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel)) 
                         & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish));
    vlSelf->top__DOT__READ_INSTR_FINISH = ((1U != (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel)) 
                                           & ((2U == (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__choose_channel)) 
                                              & (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__read_finish)));
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__aribter_release 
        = ((IData)(vlSelf->ec_finish) | (IData)(vlSelf->top__DOT__READ_INSTR_FINISH));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__aribter_release) 
                     << 5U) | (((IData)(vlSelf->top__DOT__READ_INSTR_START) 
                                << 4U) | (IData)(vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__cur_state)));
    vlSelf->top__DOT__axi4_read_with_arbiter__DOT__rr_arbiter__DOT__next_state 
        = Vtop__ConstPool__TABLE_2d10de51_0[__Vtableidx1];
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->READ_FINISH & 0xfeU))) {
        Verilated::overWidthError("READ_FINISH");}
    if (VL_UNLIKELY((vlSelf->INSTR_Complete & 0xfeU))) {
        Verilated::overWidthError("INSTR_Complete");}
}
#endif  // VL_DEBUG
