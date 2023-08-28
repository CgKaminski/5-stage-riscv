// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhazard_unit.h for the primary calling header

#include "verilated.h"

#include "Vhazard_unit__Syms.h"
#include "Vhazard_unit__Syms.h"
#include "Vhazard_unit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhazard_unit___024root___dump_triggers__ico(Vhazard_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vhazard_unit___024root___eval_triggers__ico(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhazard_unit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhazard_unit___024root___dump_triggers__act(Vhazard_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vhazard_unit___024root___eval_triggers__act(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhazard_unit___024root___dump_triggers__act(vlSelf);
    }
#endif
}
