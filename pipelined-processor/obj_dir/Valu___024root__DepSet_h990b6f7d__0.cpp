// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu.h for the primary calling header

#include "verilated.h"

#include "Valu__Syms.h"
#include "Valu___024root.h"

VL_INLINE_OPT void Valu___024root___ico_sequent__TOP__0(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___ico_sequent__TOP__0\n"); );
    // Init
    QData/*32:0*/ alu__DOT____VdfgTmp_ha2cdf9b6__0;
    alu__DOT____VdfgTmp_ha2cdf9b6__0 = 0;
    // Body
    alu__DOT____VdfgTmp_ha2cdf9b6__0 = (0x1ffffffffULL 
                                        & ((1U & (IData)(vlSelf->alu_control_i))
                                            ? ((QData)((IData)(vlSelf->src_a_i)) 
                                               - (QData)((IData)(vlSelf->src_b_i)))
                                            : ((QData)((IData)(vlSelf->src_a_i)) 
                                               + (QData)((IData)(vlSelf->src_b_i)))));
    vlSelf->carry_o = (1U & (IData)(((0U == (6U & (IData)(vlSelf->alu_control_i))) 
                                     & (alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                        >> 0x20U))));
    vlSelf->overflow_o = ((((~ (IData)(vlSelf->alu_control_i)) 
                            & ((vlSelf->src_a_i >> 0x1fU) 
                               == (vlSelf->src_b_i 
                                   >> 0x1fU))) | ((
                                                   (vlSelf->src_a_i 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelf->src_b_i 
                                                    >> 0x1fU)) 
                                                  & (IData)(vlSelf->alu_control_i))) 
                          & ((~ ((IData)(vlSelf->alu_control_i) 
                                 >> 1U)) & ((vlSelf->src_a_i 
                                             >> 0x1fU) 
                                            != (1U 
                                                & (IData)(
                                                          (alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                                           >> 0x1fU))))));
    vlSelf->result_o = ((4U & (IData)(vlSelf->alu_control_i))
                         ? (1U & ((IData)(vlSelf->overflow_o) 
                                  ^ (IData)((alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                             >> 0x1fU))))
                         : ((2U & (IData)(vlSelf->alu_control_i))
                             ? ((1U & (IData)(vlSelf->alu_control_i))
                                 ? (vlSelf->src_a_i 
                                    | vlSelf->src_b_i)
                                 : (vlSelf->src_a_i 
                                    & vlSelf->src_b_i))
                             : (IData)(alu__DOT____VdfgTmp_ha2cdf9b6__0)));
    vlSelf->negative_o = (vlSelf->result_o >> 0x1fU);
    vlSelf->zero_o = (0U == vlSelf->result_o);
}

void Valu___024root___eval_ico(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Valu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Valu___024root___eval_act(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_act\n"); );
}

void Valu___024root___eval_nba(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_nba\n"); );
}

void Valu___024root___eval_triggers__ico(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__ico(Valu___024root* vlSelf);
#endif  // VL_DEBUG
void Valu___024root___eval_triggers__act(Valu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__act(Valu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu___024root___dump_triggers__nba(Valu___024root* vlSelf);
#endif  // VL_DEBUG

void Valu___024root___eval(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Valu___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("src/alu.sv", 4, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Valu___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Valu___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Valu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("src/alu.sv", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Valu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Valu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("src/alu.sv", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Valu___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Valu___024root___eval_debug_assertions(Valu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->alu_control_i & 0xf8U))) {
        Verilated::overWidthError("alu_control_i");}
}
#endif  // VL_DEBUG
