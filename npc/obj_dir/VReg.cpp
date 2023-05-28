// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VReg.h"
#include "VReg__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VReg::VReg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VReg__Syms(_vcontextp__, _vcname__, this)}
    , PC_Adder__02EPC{vlSymsp->TOP.PC_Adder__02EPC}
    , PC_Adder__02EPC_Next{vlSymsp->TOP.PC_Adder__02EPC_Next}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , PC_Reg__02EPC_Next{vlSymsp->TOP.PC_Reg__02EPC_Next}
    , PC_Reg__02EPC{vlSymsp->TOP.PC_Reg__02EPC}
    , rootp{&(vlSymsp->TOP)}
{
}

VReg::VReg(const char* _vcname__)
    : VReg(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VReg::~VReg() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VReg___024root___eval_initial(VReg___024root* vlSelf);
void VReg___024root___eval_settle(VReg___024root* vlSelf);
void VReg___024root___eval(VReg___024root* vlSelf);
QData VReg___024root___change_request(VReg___024root* vlSelf);
#ifdef VL_DEBUG
void VReg___024root___eval_debug_assertions(VReg___024root* vlSelf);
#endif  // VL_DEBUG
void VReg___024root___final(VReg___024root* vlSelf);

static void _eval_initial_loop(VReg__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VReg___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VReg___024root___eval_settle(&(vlSymsp->TOP));
        VReg___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VReg___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/PC/PC_Adder.v", 2, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VReg___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VReg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VReg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VReg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VReg___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VReg___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/PC/PC_Adder.v", 2, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VReg___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VReg::final() {
    VReg___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VReg::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VReg::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VReg___024root__traceInitTop(VReg___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VReg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VReg___024root*>(voidSelf);
    VReg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VReg___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VReg___024root__traceRegister(VReg___024root* vlSelf, VerilatedVcd* tracep);

void VReg::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VReg___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
