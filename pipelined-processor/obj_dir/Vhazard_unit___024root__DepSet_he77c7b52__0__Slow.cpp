// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhazard_unit.h for the primary calling header

#include "verilated.h"

#include "Vhazard_unit__Syms.h"
#include "Vhazard_unit___024root.h"

VL_ATTR_COLD void Vhazard_unit___024root___eval_static(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vhazard_unit___024root___eval_initial(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vhazard_unit___024root___eval_final(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vhazard_unit___024root___eval_triggers__stl(Vhazard_unit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhazard_unit___024root___dump_triggers__stl(Vhazard_unit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vhazard_unit___024root___eval_stl(Vhazard_unit___024root* vlSelf);

VL_ATTR_COLD void Vhazard_unit___024root___eval_settle(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vhazard_unit___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vhazard_unit___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("src/hazard_unit.sv", 7, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vhazard_unit___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhazard_unit___024root___dump_triggers__stl(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vhazard_unit___024root___ico_sequent__TOP__0(Vhazard_unit___024root* vlSelf);

VL_ATTR_COLD void Vhazard_unit___024root___eval_stl(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vhazard_unit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhazard_unit___024root___dump_triggers__ico(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhazard_unit___024root___dump_triggers__act(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhazard_unit___024root___dump_triggers__nba(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhazard_unit___024root___ctor_var_reset(Vhazard_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vhazard_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhazard_unit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rs1_e_i = VL_RAND_RESET_I(5);
    vlSelf->rs2_e_i = VL_RAND_RESET_I(5);
    vlSelf->rd_m_i = VL_RAND_RESET_I(5);
    vlSelf->rd_w_i = VL_RAND_RESET_I(5);
    vlSelf->reg_write_m_i = VL_RAND_RESET_I(1);
    vlSelf->reg_write_w_i = VL_RAND_RESET_I(1);
    vlSelf->rs1_d_i = VL_RAND_RESET_I(5);
    vlSelf->rs2_d_i = VL_RAND_RESET_I(5);
    vlSelf->rd_e_i = VL_RAND_RESET_I(5);
    vlSelf->pc_src_e_i = VL_RAND_RESET_I(1);
    vlSelf->result_src_e_i = VL_RAND_RESET_I(1);
    vlSelf->forward_a_o = VL_RAND_RESET_I(2);
    vlSelf->forward_b_o = VL_RAND_RESET_I(2);
    vlSelf->stall_f_o = VL_RAND_RESET_I(1);
    vlSelf->stall_d_o = VL_RAND_RESET_I(1);
    vlSelf->flush_e_o = VL_RAND_RESET_I(1);
    vlSelf->flush_d_o = VL_RAND_RESET_I(1);
}
