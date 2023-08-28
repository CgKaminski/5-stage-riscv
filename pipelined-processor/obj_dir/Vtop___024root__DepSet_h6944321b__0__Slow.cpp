// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->clk_i;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h7aa8ad4e__0;
    // Body
    __Vtemp_h7aa8ad4e__0[0U] = 0x2e747874U;
    __Vtemp_h7aa8ad4e__0[1U] = 0x74657374U;
    __Vtemp_h7aa8ad4e__0[2U] = 0x69736376U;
    __Vtemp_h7aa8ad4e__0[3U] = 0x72632f72U;
    __Vtemp_h7aa8ad4e__0[4U] = 0x73U;
    VL_READMEM_N(true, 32, 64, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h7aa8ad4e__0)
                 ,  &(vlSelf->top__DOT__processor__DOT__imem__DOT__ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("src/top.sv", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<SData/*10:0*/, 128> Vtop__ConstPool__TABLE_h386e9d90_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_hbabc6d44_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx1 = (0x7fU & vlSelf->top__DOT__processor__DOT__instr_d);
    vlSelf->top__DOT__processor__DOT__controller__DOT__controls 
        = Vtop__ConstPool__TABLE_h386e9d90_0[__Vtableidx1];
    vlSelf->top__DOT__processor__DOT__hazard_unit__DOT__lw_stall 
        = ((IData)(vlSelf->top__DOT__processor__DOT__result_src_e) 
           & (((0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                         >> 0xfU)) == (IData)(vlSelf->top__DOT__processor__DOT__rd_e)) 
              | ((0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                           >> 0x14U)) == (IData)(vlSelf->top__DOT__processor__DOT__rd_e))));
    vlSelf->top__DOT__processor__DOT__stall_f = vlSelf->top__DOT__processor__DOT__hazard_unit__DOT__lw_stall;
    vlSelf->top__DOT__processor__DOT__stall_d = vlSelf->top__DOT__processor__DOT__hazard_unit__DOT__lw_stall;
    vlSelf->top__DOT__processor__DOT__forward_a = (
                                                   ((((IData)(vlSelf->top__DOT__processor__DOT__rs1_e) 
                                                      == (IData)(vlSelf->top__DOT__processor__DOT__rd_m)) 
                                                     & (IData)(vlSelf->top__DOT__processor__DOT__reg_write_m)) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__processor__DOT__rs1_e)))
                                                    ? 2U
                                                    : 
                                                   (((((IData)(vlSelf->top__DOT__processor__DOT__rs1_e) 
                                                       == (IData)(vlSelf->top__DOT__processor__DOT__rd_w)) 
                                                      & (IData)(vlSelf->top__DOT__processor__DOT__reg_write_w)) 
                                                     & (0U 
                                                        != (IData)(vlSelf->top__DOT__processor__DOT__rs1_e)))
                                                     ? 1U
                                                     : 0U));
    vlSelf->top__DOT__processor__DOT__forward_b = (
                                                   ((((IData)(vlSelf->top__DOT__processor__DOT__rs2_e) 
                                                      == (IData)(vlSelf->top__DOT__processor__DOT__rd_m)) 
                                                     & (IData)(vlSelf->top__DOT__processor__DOT__reg_write_m)) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__processor__DOT__rs2_e)))
                                                    ? 2U
                                                    : 
                                                   (((((IData)(vlSelf->top__DOT__processor__DOT__rs2_e) 
                                                       == (IData)(vlSelf->top__DOT__processor__DOT__rd_w)) 
                                                      & (IData)(vlSelf->top__DOT__processor__DOT__reg_write_w)) 
                                                     & (0U 
                                                        != (IData)(vlSelf->top__DOT__processor__DOT__rs2_e)))
                                                     ? 1U
                                                     : 0U));
    __Vtableidx2 = ((((IData)((0x40000020U == (0x40000020U 
                                               & vlSelf->top__DOT__processor__DOT__instr_d)))
                       ? 1U : 0U) << 5U) | ((0x1cU 
                                             & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                >> 0xaU)) 
                                            | (3U & 
                                               ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                                >> 1U))));
    vlSelf->top__DOT__processor__DOT__alu_control_d 
        = Vtop__ConstPool__TABLE_hbabc6d44_0[__Vtableidx2];
    vlSelf->top__DOT__processor__DOT__src_a_e = ((2U 
                                                  & (IData)(vlSelf->top__DOT__processor__DOT__forward_a))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__processor__DOT__forward_a))
                                                   ? 0U
                                                   : vlSelf->top__DOT__processor__DOT__alu_result_m)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->top__DOT__processor__DOT__forward_a))
                                                   ? vlSelf->top__DOT__processor__DOT__result_w
                                                   : vlSelf->top__DOT__processor__DOT__rd1_e));
    if ((2U & (IData)(vlSelf->top__DOT__processor__DOT__forward_b))) {
        if ((1U & (IData)(vlSelf->top__DOT__processor__DOT__forward_b))) {
            vlSelf->top__DOT__processor__DOT__write_data_e = 0U;
            vlSelf->top__DOT__processor__DOT__src_b0_e = 0U;
        } else {
            vlSelf->top__DOT__processor__DOT__write_data_e 
                = vlSelf->top__DOT__processor__DOT__alu_result_m;
            vlSelf->top__DOT__processor__DOT__src_b0_e 
                = vlSelf->top__DOT__processor__DOT__alu_result_m;
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__processor__DOT__forward_b))) {
        vlSelf->top__DOT__processor__DOT__write_data_e 
            = vlSelf->top__DOT__processor__DOT__result_w;
        vlSelf->top__DOT__processor__DOT__src_b0_e 
            = vlSelf->top__DOT__processor__DOT__result_w;
    } else {
        vlSelf->top__DOT__processor__DOT__write_data_e 
            = vlSelf->top__DOT__processor__DOT__rd2_e;
        vlSelf->top__DOT__processor__DOT__src_b0_e 
            = vlSelf->top__DOT__processor__DOT__rd2_e;
    }
    if (vlSelf->top__DOT__processor__DOT__alu_src_e) {
        if (vlSelf->top__DOT__processor__DOT__alu_src_e) {
            vlSelf->top__DOT__processor__DOT__src_b_e 
                = vlSelf->top__DOT__processor__DOT__imm_ext_e;
        }
    } else {
        vlSelf->top__DOT__processor__DOT__src_b_e = vlSelf->top__DOT__processor__DOT__src_b0_e;
    }
    vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
        = (0x1ffffffffULL & ((1U & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))
                              ? ((QData)((IData)(vlSelf->top__DOT__processor__DOT__src_a_e)) 
                                 - (QData)((IData)(vlSelf->top__DOT__processor__DOT__src_b_e)))
                              : ((QData)((IData)(vlSelf->top__DOT__processor__DOT__src_a_e)) 
                                 + (QData)((IData)(vlSelf->top__DOT__processor__DOT__src_b_e)))));
    vlSelf->top__DOT__processor__DOT__alu_result_e 
        = ((4U & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))
            ? (1U & (((((~ (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e)) 
                        & ((vlSelf->top__DOT__processor__DOT__src_a_e 
                            >> 0x1fU) == (vlSelf->top__DOT__processor__DOT__src_b_e 
                                          >> 0x1fU))) 
                       | (((vlSelf->top__DOT__processor__DOT__src_a_e 
                            >> 0x1fU) != (vlSelf->top__DOT__processor__DOT__src_b_e 
                                          >> 0x1fU)) 
                          & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))) 
                      & ((~ ((IData)(vlSelf->top__DOT__processor__DOT__alu_control_e) 
                             >> 1U)) & ((vlSelf->top__DOT__processor__DOT__src_a_e 
                                         >> 0x1fU) 
                                        != (1U & (IData)(
                                                         (vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                                          >> 0x1fU)))))) 
                     ^ (IData)((vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
                                >> 0x1fU)))) : ((2U 
                                                 & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))
                                                  ? 
                                                 (vlSelf->top__DOT__processor__DOT__src_a_e 
                                                  | vlSelf->top__DOT__processor__DOT__src_b_e)
                                                  : 
                                                 (vlSelf->top__DOT__processor__DOT__src_a_e 
                                                  & vlSelf->top__DOT__processor__DOT__src_b_e))
                                                 : (IData)(vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0)));
    vlSelf->top__DOT__processor__DOT__pc_src_e = ((IData)(vlSelf->top__DOT__processor__DOT__jump_e) 
                                                  | ((IData)(vlSelf->top__DOT__processor__DOT__branch_e) 
                                                     & (0U 
                                                        == vlSelf->top__DOT__processor__DOT__alu_result_e)));
    vlSelf->top__DOT__processor__DOT__flush_e = ((IData)(vlSelf->top__DOT__processor__DOT__hazard_unit__DOT__lw_stall) 
                                                 | (IData)(vlSelf->top__DOT__processor__DOT__pc_src_e));
    vlSelf->top__DOT__processor__DOT__pc_f0 = ((IData)(vlSelf->top__DOT__processor__DOT__pc_src_e)
                                                ? (vlSelf->top__DOT__processor__DOT__pc_e 
                                                   + vlSelf->top__DOT__processor__DOT__imm_ext_e)
                                                : ((IData)(4U) 
                                                   + vlSelf->top__DOT__processor__DOT__pc_f));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->reset_i = VL_RAND_RESET_I(1);
    vlSelf->write_data_o = VL_RAND_RESET_I(32);
    vlSelf->data_adr_o = VL_RAND_RESET_I(32);
    vlSelf->mem_write_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__processor__DOT__alu_control_d = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__processor__DOT__forward_a = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__processor__DOT__forward_b = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__processor__DOT__stall_f = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__processor__DOT__stall_d = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__processor__DOT__flush_e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__processor__DOT__pc_f0 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__pc_f = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__instr_d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__pc_d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__pc_plus4_d = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__pc_src_e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__processor__DOT__reg_write_e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__processor__DOT__mem_write_e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__processor__DOT__jump_e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__processor__DOT__branch_e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__processor__DOT__alu_src_e = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__processor__DOT__result_src_e = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__processor__DOT__alu_control_e = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__processor__DOT__rs1_e = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__processor__DOT__rs2_e = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__processor__DOT__rd_e = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__processor__DOT__rd1_e = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__rd2_e = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__pc_e = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__imm_ext_e = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__pc_plus4_e = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__alu_result_e = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__src_a_e = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__src_b0_e = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__src_b_e = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__write_data_e = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__reg_write_m = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__processor__DOT__mem_write_m = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__processor__DOT__result_src_m = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__processor__DOT__rd_m = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__processor__DOT__alu_result_m = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__write_data_m = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__pc_plus4_m = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__reg_write_w = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__processor__DOT__result_src_w = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__processor__DOT__rd_w = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__processor__DOT__alu_result_w = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__rd1_w = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__pc_plus4_w = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__result_w = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__processor__DOT__controller__DOT__controls = VL_RAND_RESET_I(11);
    vlSelf->top__DOT__processor__DOT__hazard_unit__DOT__lw_stall = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__processor__DOT__imem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->top__DOT__processor__DOT__dmem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
