// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VHAZARD_UNIT__SYMS_H_
#define VERILATED_VHAZARD_UNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vhazard_unit.h"

// INCLUDE MODULE CLASSES
#include "Vhazard_unit___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vhazard_unit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vhazard_unit* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vhazard_unit___024root         TOP;

    // CONSTRUCTORS
    Vhazard_unit__Syms(VerilatedContext* contextp, const char* namep, Vhazard_unit* modelp);
    ~Vhazard_unit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
