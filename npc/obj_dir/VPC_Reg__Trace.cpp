// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPC_Reg__Syms.h"


void VPC_Reg___024root__traceChgSub0(VPC_Reg___024root* vlSelf, VerilatedVcd* tracep);

void VPC_Reg___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VPC_Reg___024root* const __restrict vlSelf = static_cast<VPC_Reg___024root*>(voidSelf);
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VPC_Reg___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VPC_Reg___024root__traceChgSub0(VPC_Reg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->clk));
        tracep->chgBit(oldp+1,(vlSelf->rst));
        tracep->chgQData(oldp+2,(vlSelf->PC_Test),64);
        tracep->chgQData(oldp+4,(vlSelf->top__DOT__PC_Wire),64);
        tracep->chgQData(oldp+6,((4ULL + vlSelf->top__DOT__PC_Wire)),64);
    }
}

void VPC_Reg___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VPC_Reg___024root* const __restrict vlSelf = static_cast<VPC_Reg___024root*>(voidSelf);
    VPC_Reg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
