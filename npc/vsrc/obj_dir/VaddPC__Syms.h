// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VADDPC__SYMS_H_
#define VERILATED_VADDPC__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VaddPC.h"

// INCLUDE MODULE CLASSES
#include "VaddPC___024root.h"

// SYMS CLASS (contains all model state)
class VaddPC__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VaddPC* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VaddPC___024root               TOP;

    // CONSTRUCTORS
    VaddPC__Syms(VerilatedContext* contextp, const char* namep, VaddPC* modelp);
    ~VaddPC__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
