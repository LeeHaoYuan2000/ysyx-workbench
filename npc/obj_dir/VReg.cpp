// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VReg.h"
#include "VReg__Syms.h"

//============================================================
// Constructors

VReg::VReg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VReg__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , din{vlSymsp->TOP.din}
    , dout{vlSymsp->TOP.dout}
    , wen{vlSymsp->TOP.wen}
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
            VL_FATAL_MT("vsrc/Example/Reg.v", 4, "",
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
            VL_FATAL_MT("vsrc/Example/Reg.v", 4, "",
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
