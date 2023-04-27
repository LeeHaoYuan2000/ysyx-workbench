// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VaddPC.h"
#include "VaddPC__Syms.h"

//============================================================
// Constructors

VaddPC::VaddPC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VaddPC__Syms(_vcontextp__, _vcname__, this)}
    , rst{vlSymsp->TOP.rst}
    , PC{vlSymsp->TOP.PC}
    , adder{vlSymsp->TOP.adder}
    , out{vlSymsp->TOP.out}
    , rootp{&(vlSymsp->TOP)}
{
}

VaddPC::VaddPC(const char* _vcname__)
    : VaddPC(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VaddPC::~VaddPC() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VaddPC___024root___eval_initial(VaddPC___024root* vlSelf);
void VaddPC___024root___eval_settle(VaddPC___024root* vlSelf);
void VaddPC___024root___eval(VaddPC___024root* vlSelf);
QData VaddPC___024root___change_request(VaddPC___024root* vlSelf);
#ifdef VL_DEBUG
void VaddPC___024root___eval_debug_assertions(VaddPC___024root* vlSelf);
#endif  // VL_DEBUG
void VaddPC___024root___final(VaddPC___024root* vlSelf);

static void _eval_initial_loop(VaddPC__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VaddPC___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VaddPC___024root___eval_settle(&(vlSymsp->TOP));
        VaddPC___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VaddPC___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("addPC.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VaddPC___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VaddPC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VaddPC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VaddPC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VaddPC___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VaddPC___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("addPC.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VaddPC___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VaddPC::final() {
    VaddPC___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VaddPC::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VaddPC::name() const {
    return vlSymsp->name();
}
