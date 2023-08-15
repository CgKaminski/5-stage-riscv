// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmips.h for the primary calling header

#include "verilated.h"

#include "Vmips__Syms.h"
#include "Vmips__Syms.h"
#include "Vmips___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmips___024root___dump_triggers__act(Vmips___024root* vlSelf);
#endif  // VL_DEBUG

void Vmips___024root___eval_triggers__act(Vmips___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmips__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmips___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmips___024root___dump_triggers__act(vlSelf);
    }
#endif
}
