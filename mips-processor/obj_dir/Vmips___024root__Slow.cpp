// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips.h for the primary calling header

#include "verilated.h"

#include "Vmips__Syms.h"
#include "Vmips__Syms.h"
#include "Vmips___024root.h"

void Vmips___024root___ctor_var_reset(Vmips___024root* vlSelf);

Vmips___024root::Vmips___024root(Vmips__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmips___024root___ctor_var_reset(this);
}

void Vmips___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmips___024root::~Vmips___024root() {
}
