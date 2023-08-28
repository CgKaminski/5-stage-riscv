// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcontroller.h for the primary calling header

#include "verilated.h"

#include "Vcontroller__Syms.h"
#include "Vcontroller__Syms.h"
#include "Vcontroller___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcontroller___024root___dump_triggers__stl(Vcontroller___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcontroller___024root___eval_triggers__stl(Vcontroller___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcontroller__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcontroller___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcontroller___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
