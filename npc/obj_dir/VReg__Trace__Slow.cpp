// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VReg__Syms.h"


void VReg___024root__traceInitSub0(VReg___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VReg___024root__traceInitTop(VReg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VReg___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VReg___024root__traceInitSub0(VReg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declQuad(c+1,"PC_Adder.PC", false,-1, 63,0);
        tracep->declQuad(c+3,"PC_Adder.PC_Next", false,-1, 63,0);
        tracep->declBit(c+5,"clk", false,-1);
        tracep->declBit(c+6,"rst", false,-1);
        tracep->declQuad(c+7,"PC_Reg.PC_Next", false,-1, 63,0);
        tracep->declQuad(c+9,"PC_Reg.PC", false,-1, 63,0);
        tracep->declQuad(c+1,"PC_Adder PC", false,-1, 63,0);
        tracep->declQuad(c+3,"PC_Adder PC_Next", false,-1, 63,0);
        tracep->declBit(c+5,"PC_Reg clk", false,-1);
        tracep->declBit(c+6,"PC_Reg rst", false,-1);
        tracep->declQuad(c+7,"PC_Reg PC_Next", false,-1, 63,0);
        tracep->declQuad(c+9,"PC_Reg PC", false,-1, 63,0);
        tracep->declBus(c+11,"PC_Reg pc_reg WIDTH", false,-1, 31,0);
        tracep->declQuad(c+12,"PC_Reg pc_reg RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+5,"PC_Reg pc_reg clk", false,-1);
        tracep->declBit(c+6,"PC_Reg pc_reg rst", false,-1);
        tracep->declQuad(c+7,"PC_Reg pc_reg din", false,-1, 63,0);
        tracep->declQuad(c+9,"PC_Reg pc_reg dout", false,-1, 63,0);
        tracep->declBit(c+14,"PC_Reg pc_reg wen", false,-1);
    }
}

void VReg___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VReg___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VReg___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VReg___024root__traceRegister(VReg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VReg___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VReg___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VReg___024root__traceCleanup, vlSelf);
    }
}

void VReg___024root__traceFullSub0(VReg___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VReg___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VReg___024root* const __restrict vlSelf = static_cast<VReg___024root*>(voidSelf);
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VReg___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VReg___024root__traceFullSub0(VReg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->PC_Adder__02EPC),64);
        tracep->fullQData(oldp+3,(vlSelf->PC_Adder__02EPC_Next),64);
        tracep->fullBit(oldp+5,(vlSelf->clk));
        tracep->fullBit(oldp+6,(vlSelf->rst));
        tracep->fullQData(oldp+7,(vlSelf->PC_Reg__02EPC_Next),64);
        tracep->fullQData(oldp+9,(vlSelf->PC_Reg__02EPC),64);
        tracep->fullIData(oldp+11,(0x40U),32);
        tracep->fullQData(oldp+12,(0x80000000ULL),64);
        tracep->fullBit(oldp+14,(1U));
    }
}
