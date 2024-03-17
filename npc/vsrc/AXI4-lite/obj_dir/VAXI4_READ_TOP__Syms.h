// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAXI4_READ_TOP__SYMS_H_
#define VERILATED_VAXI4_READ_TOP__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VAXI4_READ_TOP.h"

// INCLUDE MODULE CLASSES
#include "VAXI4_READ_TOP___024root.h"

// SYMS CLASS (contains all model state)
class VAXI4_READ_TOP__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VAXI4_READ_TOP* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VAXI4_READ_TOP___024root       TOP;

    // CONSTRUCTORS
    VAXI4_READ_TOP__Syms(VerilatedContext* contextp, const char* namep, VAXI4_READ_TOP* modelp);
    ~VAXI4_READ_TOP__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
