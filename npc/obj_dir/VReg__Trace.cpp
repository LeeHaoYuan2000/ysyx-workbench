// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VReg__Syms.h"


void VReg___024root__traceChgSub0(VReg___024root* vlSelf, VerilatedVcd* tracep);

void VReg___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VReg___024root* const __restrict vlSelf = static_cast<VReg___024root*>(voidSelf);
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VReg___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VReg___024root__traceChgSub0(VReg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgQData(oldp+0,(vlSelf->PC_Adder__02EPC),64);
        tracep->chgQData(oldp+2,(vlSelf->PC_Adder__02EPC_Next),64);
        tracep->chgBit(oldp+4,(vlSelf->clk));
        tracep->chgBit(oldp+5,(vlSelf->rst));
        tracep->chgQData(oldp+6,(vlSelf->PC_Reg__02EPC_Next),64);
        tracep->chgQData(oldp+8,(vlSelf->PC_Reg__02EPC),64);
    }
}

void VReg___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VReg___024root* const __restrict vlSelf = static_cast<VReg___024root*>(voidSelf);
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
