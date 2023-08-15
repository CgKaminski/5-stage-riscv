// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((~ (IData)(vlSelf->testbench__DOT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0)));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->testbench__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0))) 
                                     | ((IData)(vlSelf->testbench__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->testbench__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelf->testbench__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__reset__0 
        = vlSelf->testbench__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}
