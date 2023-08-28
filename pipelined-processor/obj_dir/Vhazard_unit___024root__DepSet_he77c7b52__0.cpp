// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhazard_unit.h for the primary calling header

#include "verilated.h"

#include "Vhazard_unit__Syms.h"
#include "Vhazard_unit___024root.h"

VL_INLINE_OPT void Vhazard_unit___024root___ico_sequent__TOP__0(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ hazard_unit__DOT__lw_stall;
    hazard_unit__DOT__lw_stall = 0;
    // Body
    vlSelf->flush_d_o = vlSelf->pc_src_e_i;
    vlSelf->forward_a_o = (((((IData)(vlSelf->rs1_e_i) 
                              == (IData)(vlSelf->rd_m_i)) 
                             & (IData)(vlSelf->reg_write_m_i)) 
                            & (0U != (IData)(vlSelf->rs1_e_i)))
                            ? 2U : (((((IData)(vlSelf->rs1_e_i) 
                                       == (IData)(vlSelf->rd_w_i)) 
                                      & (IData)(vlSelf->reg_write_w_i)) 
                                     & (0U != (IData)(vlSelf->rs1_e_i)))
                                     ? 1U : 0U));
    vlSelf->forward_b_o = (((((IData)(vlSelf->rs2_e_i) 
                              == (IData)(vlSelf->rd_m_i)) 
                             & (IData)(vlSelf->reg_write_m_i)) 
                            & (0U != (IData)(vlSelf->rs2_e_i)))
                            ? 2U : (((((IData)(vlSelf->rs2_e_i) 
                                       == (IData)(vlSelf->rd_w_i)) 
                                      & (IData)(vlSelf->reg_write_w_i)) 
                                     & (0U != (IData)(vlSelf->rs2_e_i)))
                                     ? 1U : 0U));
    hazard_unit__DOT__lw_stall = ((IData)(vlSelf->result_src_e_i) 
                                  & (((IData)(vlSelf->rs1_d_i) 
                                      == (IData)(vlSelf->rd_e_i)) 
                                     | ((IData)(vlSelf->rs2_d_i) 
                                        == (IData)(vlSelf->rd_e_i))));
    vlSelf->stall_f_o = hazard_unit__DOT__lw_stall;
    vlSelf->stall_d_o = hazard_unit__DOT__lw_stall;
    vlSelf->flush_e_o = ((IData)(hazard_unit__DOT__lw_stall) 
                         | (IData)(vlSelf->pc_src_e_i));
}

void Vhazard_unit___024root___eval_ico(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vhazard_unit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vhazard_unit___024root___eval_act(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___eval_act\n"); );
}

void Vhazard_unit___024root___eval_nba(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___eval_nba\n"); );
}

void Vhazard_unit___024root___eval_triggers__ico(Vhazard_unit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhazard_unit___024root___dump_triggers__ico(Vhazard_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vhazard_unit___024root___eval_triggers__act(Vhazard_unit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhazard_unit___024root___dump_triggers__act(Vhazard_unit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhazard_unit___024root___dump_triggers__nba(Vhazard_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vhazard_unit___024root___eval(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___eval\n"); );
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
        Vhazard_unit___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vhazard_unit___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("src/hazard_unit.sv", 7, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vhazard_unit___024root___eval_ico(vlSelf);
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
            Vhazard_unit___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vhazard_unit___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("src/hazard_unit.sv", 7, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vhazard_unit___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vhazard_unit___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("src/hazard_unit.sv", 7, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vhazard_unit___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vhazard_unit___024root___eval_debug_assertions(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rs1_e_i & 0xe0U))) {
        Verilated::overWidthError("rs1_e_i");}
    if (VL_UNLIKELY((vlSelf->rs2_e_i & 0xe0U))) {
        Verilated::overWidthError("rs2_e_i");}
    if (VL_UNLIKELY((vlSelf->rd_m_i & 0xe0U))) {
        Verilated::overWidthError("rd_m_i");}
    if (VL_UNLIKELY((vlSelf->rd_w_i & 0xe0U))) {
        Verilated::overWidthError("rd_w_i");}
    if (VL_UNLIKELY((vlSelf->reg_write_m_i & 0xfeU))) {
        Verilated::overWidthError("reg_write_m_i");}
    if (VL_UNLIKELY((vlSelf->reg_write_w_i & 0xfeU))) {
        Verilated::overWidthError("reg_write_w_i");}
    if (VL_UNLIKELY((vlSelf->rs1_d_i & 0xe0U))) {
        Verilated::overWidthError("rs1_d_i");}
    if (VL_UNLIKELY((vlSelf->rs2_d_i & 0xe0U))) {
        Verilated::overWidthError("rs2_d_i");}
    if (VL_UNLIKELY((vlSelf->rd_e_i & 0xe0U))) {
        Verilated::overWidthError("rd_e_i");}
    if (VL_UNLIKELY((vlSelf->pc_src_e_i & 0xfeU))) {
        Verilated::overWidthError("pc_src_e_i");}
    if (VL_UNLIKELY((vlSelf->result_src_e_i & 0xfeU))) {
        Verilated::overWidthError("result_src_e_i");}
}
#endif  // VL_DEBUG
