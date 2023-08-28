// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlUnpacked<SData/*10:0*/, 128> Vtop__ConstPool__TABLE_h386e9d90_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtop__ConstPool__TABLE_hbabc6d44_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__top__DOT__processor__DOT__pc_f;
    __Vdly__top__DOT__processor__DOT__pc_f = 0;
    IData/*31:0*/ __Vdly__top__DOT__processor__DOT__pc_d;
    __Vdly__top__DOT__processor__DOT__pc_d = 0;
    IData/*31:0*/ __Vdly__top__DOT__processor__DOT__instr_d;
    __Vdly__top__DOT__processor__DOT__instr_d = 0;
    IData/*31:0*/ __Vdly__top__DOT__processor__DOT__pc_plus4_d;
    __Vdly__top__DOT__processor__DOT__pc_plus4_d = 0;
    CData/*5:0*/ __Vdlyvdim0__top__DOT__processor__DOT__dmem__DOT__ram__v0;
    __Vdlyvdim0__top__DOT__processor__DOT__dmem__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__processor__DOT__dmem__DOT__ram__v0;
    __Vdlyvval__top__DOT__processor__DOT__dmem__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__processor__DOT__dmem__DOT__ram__v0;
    __Vdlyvset__top__DOT__processor__DOT__dmem__DOT__ram__v0 = 0;
    // Body
    __Vdly__top__DOT__processor__DOT__pc_f = vlSelf->top__DOT__processor__DOT__pc_f;
    __Vdly__top__DOT__processor__DOT__pc_plus4_d = vlSelf->top__DOT__processor__DOT__pc_plus4_d;
    __Vdly__top__DOT__processor__DOT__pc_d = vlSelf->top__DOT__processor__DOT__pc_d;
    __Vdly__top__DOT__processor__DOT__instr_d = vlSelf->top__DOT__processor__DOT__instr_d;
    __Vdlyvset__top__DOT__processor__DOT__dmem__DOT__ram__v0 = 0U;
    if (vlSelf->top__DOT__processor__DOT__stall_f) {
        if (vlSelf->top__DOT__processor__DOT__stall_f) {
            __Vdly__top__DOT__processor__DOT__pc_f 
                = vlSelf->top__DOT__processor__DOT__pc_f;
        }
    } else {
        __Vdly__top__DOT__processor__DOT__pc_f = vlSelf->top__DOT__processor__DOT__pc_f0;
    }
    if (vlSelf->reset_i) {
        __Vdly__top__DOT__processor__DOT__pc_f = 0U;
    }
    if (vlSelf->top__DOT__processor__DOT__mem_write_m) {
        __Vdlyvval__top__DOT__processor__DOT__dmem__DOT__ram__v0 
            = vlSelf->top__DOT__processor__DOT__write_data_m;
        __Vdlyvset__top__DOT__processor__DOT__dmem__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__processor__DOT__dmem__DOT__ram__v0 
            = (0x3fU & (vlSelf->top__DOT__processor__DOT__alu_result_m 
                        >> 2U));
    }
    vlSelf->write_data_o = vlSelf->top__DOT__processor__DOT__write_data_m;
    vlSelf->top__DOT__processor__DOT__branch_e = (1U 
                                                  & ((~ (IData)(vlSelf->top__DOT__processor__DOT__flush_e)) 
                                                     & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                                        >> 3U)));
    vlSelf->top__DOT__processor__DOT__jump_e = (1U 
                                                & ((~ (IData)(vlSelf->top__DOT__processor__DOT__flush_e)) 
                                                   & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls)));
    vlSelf->mem_write_o = vlSelf->top__DOT__processor__DOT__mem_write_m;
    vlSelf->data_adr_o = vlSelf->top__DOT__processor__DOT__alu_result_m;
    vlSelf->top__DOT__processor__DOT__alu_src_e = (1U 
                                                   & ((~ (IData)(vlSelf->top__DOT__processor__DOT__flush_e)) 
                                                      & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                                                         >> 7U)));
    vlSelf->top__DOT__processor__DOT__reg_write_w = vlSelf->top__DOT__processor__DOT__reg_write_m;
    vlSelf->top__DOT__processor__DOT__rd_w = vlSelf->top__DOT__processor__DOT__rd_m;
    vlSelf->top__DOT__processor__DOT__result_w = ((2U 
                                                   & (IData)(vlSelf->top__DOT__processor__DOT__result_src_w))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__processor__DOT__result_src_w))
                                                    ? 0U
                                                    : vlSelf->top__DOT__processor__DOT__pc_plus4_w)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__processor__DOT__result_src_w))
                                                    ? vlSelf->top__DOT__processor__DOT__rd1_w
                                                    : vlSelf->top__DOT__processor__DOT__alu_result_w));
    if (vlSelf->top__DOT__processor__DOT__pc_src_e) {
        __Vdly__top__DOT__processor__DOT__pc_plus4_d = 0U;
        __Vdly__top__DOT__processor__DOT__pc_d = 0U;
        __Vdly__top__DOT__processor__DOT__instr_d = 0U;
    } else if (vlSelf->top__DOT__processor__DOT__stall_d) {
        __Vdly__top__DOT__processor__DOT__pc_plus4_d 
            = vlSelf->top__DOT__processor__DOT__pc_plus4_d;
        __Vdly__top__DOT__processor__DOT__pc_d = vlSelf->top__DOT__processor__DOT__pc_d;
        __Vdly__top__DOT__processor__DOT__instr_d = vlSelf->top__DOT__processor__DOT__instr_d;
    } else {
        __Vdly__top__DOT__processor__DOT__pc_plus4_d 
            = ((IData)(4U) + vlSelf->top__DOT__processor__DOT__pc_f);
        __Vdly__top__DOT__processor__DOT__pc_d = vlSelf->top__DOT__processor__DOT__pc_f;
        __Vdly__top__DOT__processor__DOT__instr_d = 
            vlSelf->top__DOT__processor__DOT__imem__DOT__ram
            [(0x3fU & (vlSelf->top__DOT__processor__DOT__pc_f 
                       >> 2U))];
    }
    vlSelf->top__DOT__processor__DOT__pc_f = __Vdly__top__DOT__processor__DOT__pc_f;
    if (vlSelf->top__DOT__processor__DOT__flush_e) {
        vlSelf->top__DOT__processor__DOT__alu_control_e = 0U;
        vlSelf->top__DOT__processor__DOT__rs1_e = 0U;
        vlSelf->top__DOT__processor__DOT__rs2_e = 0U;
        vlSelf->top__DOT__processor__DOT__pc_e = 0U;
    } else {
        vlSelf->top__DOT__processor__DOT__alu_control_e 
            = vlSelf->top__DOT__processor__DOT__alu_control_d;
        vlSelf->top__DOT__processor__DOT__rs1_e = (0x1fU 
                                                   & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                      >> 0xfU));
        vlSelf->top__DOT__processor__DOT__rs2_e = (0x1fU 
                                                   & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                      >> 0x14U));
        vlSelf->top__DOT__processor__DOT__pc_e = vlSelf->top__DOT__processor__DOT__pc_d;
    }
    vlSelf->top__DOT__processor__DOT__pc_d = __Vdly__top__DOT__processor__DOT__pc_d;
    vlSelf->top__DOT__processor__DOT__write_data_m 
        = vlSelf->top__DOT__processor__DOT__write_data_e;
    vlSelf->top__DOT__processor__DOT__mem_write_m = vlSelf->top__DOT__processor__DOT__mem_write_e;
    vlSelf->top__DOT__processor__DOT__reg_write_m = vlSelf->top__DOT__processor__DOT__reg_write_e;
    vlSelf->top__DOT__processor__DOT__rd_m = vlSelf->top__DOT__processor__DOT__rd_e;
    vlSelf->top__DOT__processor__DOT__pc_plus4_w = vlSelf->top__DOT__processor__DOT__pc_plus4_m;
    vlSelf->top__DOT__processor__DOT__result_src_w 
        = vlSelf->top__DOT__processor__DOT__result_src_m;
    vlSelf->top__DOT__processor__DOT__alu_result_w 
        = vlSelf->top__DOT__processor__DOT__alu_result_m;
    vlSelf->top__DOT__processor__DOT__rd1_w = vlSelf->top__DOT__processor__DOT__dmem__DOT__ram
        [(0x3fU & (vlSelf->top__DOT__processor__DOT__alu_result_m 
                   >> 2U))];
    if (__Vdlyvset__top__DOT__processor__DOT__dmem__DOT__ram__v0) {
        vlSelf->top__DOT__processor__DOT__dmem__DOT__ram[__Vdlyvdim0__top__DOT__processor__DOT__dmem__DOT__ram__v0] 
            = __Vdlyvval__top__DOT__processor__DOT__dmem__DOT__ram__v0;
    }
    vlSelf->top__DOT__processor__DOT__mem_write_e = 
        (1U & ((~ (IData)(vlSelf->top__DOT__processor__DOT__flush_e)) 
               & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                  >> 6U)));
    vlSelf->top__DOT__processor__DOT__reg_write_e = 
        ((~ (IData)(vlSelf->top__DOT__processor__DOT__flush_e)) 
         & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
            >> 0xaU));
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
    vlSelf->top__DOT__processor__DOT__pc_plus4_m = vlSelf->top__DOT__processor__DOT__pc_plus4_e;
    vlSelf->top__DOT__processor__DOT__result_src_m 
        = vlSelf->top__DOT__processor__DOT__result_src_e;
    if (vlSelf->top__DOT__processor__DOT__flush_e) {
        vlSelf->top__DOT__processor__DOT__rd1_e = 0U;
        vlSelf->top__DOT__processor__DOT__rd2_e = 0U;
        vlSelf->top__DOT__processor__DOT__imm_ext_e = 0U;
        vlSelf->top__DOT__processor__DOT__rd_e = 0U;
        vlSelf->top__DOT__processor__DOT__pc_plus4_e = 0U;
        vlSelf->top__DOT__processor__DOT__result_src_e = 0U;
    } else {
        vlSelf->top__DOT__processor__DOT__rd1_e = (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                        >> 0xfU)))
                                                    ? 0U
                                                    : 
                                                   vlSelf->top__DOT__processor__DOT__regfile__DOT__rf
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                       >> 0xfU))]);
        vlSelf->top__DOT__processor__DOT__rd2_e = (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                        >> 0x14U)))
                                                    ? 0U
                                                    : 
                                                   vlSelf->top__DOT__processor__DOT__regfile__DOT__rf
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                       >> 0x14U))]);
        vlSelf->top__DOT__processor__DOT__imm_ext_e 
            = ((0x200U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))
                ? ((0x100U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))
                    ? (((- (IData)((vlSelf->top__DOT__processor__DOT__instr_d 
                                    >> 0x1fU))) << 0x14U) 
                       | ((0xff000U & vlSelf->top__DOT__processor__DOT__instr_d) 
                          | ((0x800U & (vlSelf->top__DOT__processor__DOT__instr_d 
                                        >> 9U)) | (0x7feU 
                                                   & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                      >> 0x14U)))))
                    : (((- (IData)((vlSelf->top__DOT__processor__DOT__instr_d 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0x800U & (vlSelf->top__DOT__processor__DOT__instr_d 
                                     << 4U)) | ((0x7e0U 
                                                 & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                    >> 0x14U)) 
                                                | (0x1eU 
                                                   & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                      >> 7U))))))
                : ((0x100U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))
                    ? (((- (IData)((vlSelf->top__DOT__processor__DOT__instr_d 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->top__DOT__processor__DOT__instr_d 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->top__DOT__processor__DOT__instr_d 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->top__DOT__processor__DOT__instr_d 
                          >> 0x14U))));
        vlSelf->top__DOT__processor__DOT__rd_e = (0x1fU 
                                                  & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                     >> 7U));
        vlSelf->top__DOT__processor__DOT__pc_plus4_e 
            = vlSelf->top__DOT__processor__DOT__pc_plus4_d;
        vlSelf->top__DOT__processor__DOT__result_src_e 
            = (3U & ((IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls) 
                     >> 4U));
    }
    vlSelf->top__DOT__processor__DOT__alu_result_m 
        = vlSelf->top__DOT__processor__DOT__alu_result_e;
    vlSelf->top__DOT__processor__DOT__instr_d = __Vdly__top__DOT__processor__DOT__instr_d;
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
    if (vlSelf->top__DOT__processor__DOT__alu_src_e) {
        if (vlSelf->top__DOT__processor__DOT__alu_src_e) {
            vlSelf->top__DOT__processor__DOT__src_b_e 
                = vlSelf->top__DOT__processor__DOT__imm_ext_e;
        }
    } else {
        vlSelf->top__DOT__processor__DOT__src_b_e = vlSelf->top__DOT__processor__DOT__src_b0_e;
    }
    vlSelf->top__DOT__processor__DOT__pc_plus4_d = __Vdly__top__DOT__processor__DOT__pc_plus4_d;
    __Vtableidx1 = (0x7fU & vlSelf->top__DOT__processor__DOT__instr_d);
    vlSelf->top__DOT__processor__DOT__controller__DOT__controls 
        = Vtop__ConstPool__TABLE_h386e9d90_0[__Vtableidx1];
    vlSelf->top__DOT__processor__DOT__alu__DOT____VdfgTmp_ha2cdf9b6__0 
        = (0x1ffffffffULL & ((1U & (IData)(vlSelf->top__DOT__processor__DOT__alu_control_e))
                              ? ((QData)((IData)(vlSelf->top__DOT__processor__DOT__src_a_e)) 
                                 - (QData)((IData)(vlSelf->top__DOT__processor__DOT__src_b_e)))
                              : ((QData)((IData)(vlSelf->top__DOT__processor__DOT__src_a_e)) 
                                 + (QData)((IData)(vlSelf->top__DOT__processor__DOT__src_b_e)))));
    vlSelf->top__DOT__processor__DOT__hazard_unit__DOT__lw_stall 
        = ((IData)(vlSelf->top__DOT__processor__DOT__result_src_e) 
           & (((0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                         >> 0xfU)) == (IData)(vlSelf->top__DOT__processor__DOT__rd_e)) 
              | ((0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                           >> 0x14U)) == (IData)(vlSelf->top__DOT__processor__DOT__rd_e))));
    vlSelf->top__DOT__processor__DOT__stall_f = vlSelf->top__DOT__processor__DOT__hazard_unit__DOT__lw_stall;
    vlSelf->top__DOT__processor__DOT__stall_d = vlSelf->top__DOT__processor__DOT__hazard_unit__DOT__lw_stall;
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
    vlSelf->top__DOT__processor__DOT__pc_f0 = ((IData)(vlSelf->top__DOT__processor__DOT__pc_src_e)
                                                ? (vlSelf->top__DOT__processor__DOT__pc_e 
                                                   + vlSelf->top__DOT__processor__DOT__imm_ext_e)
                                                : ((IData)(4U) 
                                                   + vlSelf->top__DOT__processor__DOT__pc_f));
    vlSelf->top__DOT__processor__DOT__flush_e = ((IData)(vlSelf->top__DOT__processor__DOT__hazard_unit__DOT__lw_stall) 
                                                 | (IData)(vlSelf->top__DOT__processor__DOT__pc_src_e));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__processor__DOT__regfile__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__processor__DOT__regfile__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__processor__DOT__regfile__DOT__rf__v0;
    __Vdlyvval__top__DOT__processor__DOT__regfile__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__processor__DOT__regfile__DOT__rf__v0;
    __Vdlyvset__top__DOT__processor__DOT__regfile__DOT__rf__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__processor__DOT__regfile__DOT__rf__v0 = 0U;
    VL_WRITEF("-------------------------------------------------\nHazards\nForward A      : %b\nForward B      : %b\nStall F        : %b\nStall D        : %b\nFlush D        : %b\nFlush E        : %b\n-------------------------------------------------\nFetch Stage\nInstruction    : %b\nStall F        : %b\nPC             : %b\nPC + 4         : %b\n-------------------------------------------------\nDecode Stage\nInstruction    : %b\nA1             : %b\nA2             : %b\nRegister Data 1: %b\nRegister Data 2: %b\n",
              2,vlSelf->top__DOT__processor__DOT__forward_a,
              2,(IData)(vlSelf->top__DOT__processor__DOT__forward_b),
              1,vlSelf->top__DOT__processor__DOT__stall_f,
              1,(IData)(vlSelf->top__DOT__processor__DOT__stall_d),
              1,vlSelf->top__DOT__processor__DOT__pc_src_e,
              1,(IData)(vlSelf->top__DOT__processor__DOT__flush_e),
              32,vlSelf->top__DOT__processor__DOT__imem__DOT__ram
              [(0x3fU & (vlSelf->top__DOT__processor__DOT__pc_f 
                         >> 2U))],1,vlSelf->top__DOT__processor__DOT__stall_f,
              32,vlSelf->top__DOT__processor__DOT__pc_f,
              32,((IData)(4U) + vlSelf->top__DOT__processor__DOT__pc_f),
              32,vlSelf->top__DOT__processor__DOT__instr_d,
              5,(0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                          >> 0xfU)),5,(0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                >> 0x14U)),
              32,((0U == (0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                   >> 0xfU))) ? 0U : 
                  vlSelf->top__DOT__processor__DOT__regfile__DOT__rf
                  [(0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                             >> 0xfU))]),32,((0U == 
                                              (0x1fU 
                                               & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                  >> 0x14U)))
                                              ? 0U : 
                                             vlSelf->top__DOT__processor__DOT__regfile__DOT__rf
                                             [(0x1fU 
                                               & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                  >> 0x14U))]));
    VL_WRITEF("A3             : %b\nReg Write      : %b\nImmediate      : %b\nPC             : %b\nPC + 4         : %b\n-------------------------------------------------\nExecute Stage\nRegister Data 1: %b\nRegister Data 2: %b\nAlu src e      : %b\nALU src A      : %b\nALU src B      : %b\nALU Result     : %b\nWrite Data     : %b\nImmediate      : %b\nForward A      : %b\nForward B      : %b\nPC             : %b\nPC + 4         : %b\n-------------------------------------------------\nMemory Stage\nData Memory A  : %b\n",
              5,vlSelf->top__DOT__processor__DOT__rd_w,
              1,(IData)(vlSelf->top__DOT__processor__DOT__reg_write_w),
              32,((0x200U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))
                   ? ((0x100U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))
                       ? (((- (IData)((vlSelf->top__DOT__processor__DOT__instr_d 
                                       >> 0x1fU))) 
                           << 0x14U) | ((0xff000U & vlSelf->top__DOT__processor__DOT__instr_d) 
                                        | ((0x800U 
                                            & (vlSelf->top__DOT__processor__DOT__instr_d 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                 >> 0x14U)))))
                       : (((- (IData)((vlSelf->top__DOT__processor__DOT__instr_d 
                                       >> 0x1fU))) 
                           << 0xcU) | ((0x800U & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                  << 4U)) 
                                       | ((0x7e0U & 
                                           (vlSelf->top__DOT__processor__DOT__instr_d 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                >> 7U))))))
                   : ((0x100U & (IData)(vlSelf->top__DOT__processor__DOT__controller__DOT__controls))
                       ? (((- (IData)((vlSelf->top__DOT__processor__DOT__instr_d 
                                       >> 0x1fU))) 
                           << 0xcU) | ((0xfe0U & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                  >> 0x14U)) 
                                       | (0x1fU & (vlSelf->top__DOT__processor__DOT__instr_d 
                                                   >> 7U))))
                       : (((- (IData)((vlSelf->top__DOT__processor__DOT__instr_d 
                                       >> 0x1fU))) 
                           << 0xcU) | (vlSelf->top__DOT__processor__DOT__instr_d 
                                       >> 0x14U)))),
              32,vlSelf->top__DOT__processor__DOT__pc_d,
              32,vlSelf->top__DOT__processor__DOT__pc_plus4_d,
              32,vlSelf->top__DOT__processor__DOT__rd1_e,
              32,vlSelf->top__DOT__processor__DOT__rd2_e,
              1,(IData)(vlSelf->top__DOT__processor__DOT__alu_src_e),
              32,vlSelf->top__DOT__processor__DOT__src_a_e,
              32,vlSelf->top__DOT__processor__DOT__src_b_e,
              32,vlSelf->top__DOT__processor__DOT__alu_result_e,
              32,vlSelf->top__DOT__processor__DOT__write_data_e,
              32,vlSelf->top__DOT__processor__DOT__imm_ext_e,
              2,(IData)(vlSelf->top__DOT__processor__DOT__forward_a),
              2,vlSelf->top__DOT__processor__DOT__forward_b,
              32,vlSelf->top__DOT__processor__DOT__pc_e,
              32,vlSelf->top__DOT__processor__DOT__pc_plus4_e,
              32,vlSelf->top__DOT__processor__DOT__alu_result_m);
    VL_WRITEF("Data Memory WD : %b\nWrite Enable   : %b\nRead Data      : %b\nPC + 4         : %b\n-------------------------------------------------\nWriteback Stage\nALU Result W   : %b\nRead Data W    : %b\nResult W       : %b\nResult Src W   : %b\nRd W           : %b\nPC + 4         : %b\n=================================================\n\n\n",
              32,vlSelf->top__DOT__processor__DOT__write_data_m,
              1,(IData)(vlSelf->top__DOT__processor__DOT__mem_write_m),
              32,vlSelf->top__DOT__processor__DOT__dmem__DOT__ram
              [(0x3fU & (vlSelf->top__DOT__processor__DOT__alu_result_m 
                         >> 2U))],32,vlSelf->top__DOT__processor__DOT__pc_plus4_m,
              32,vlSelf->top__DOT__processor__DOT__alu_result_w,
              32,vlSelf->top__DOT__processor__DOT__rd1_w,
              32,vlSelf->top__DOT__processor__DOT__result_w,
              2,(IData)(vlSelf->top__DOT__processor__DOT__result_src_w),
              5,vlSelf->top__DOT__processor__DOT__rd_w,
              32,vlSelf->top__DOT__processor__DOT__pc_plus4_w);
    if (vlSelf->top__DOT__processor__DOT__reg_write_w) {
        __Vdlyvval__top__DOT__processor__DOT__regfile__DOT__rf__v0 
            = vlSelf->top__DOT__processor__DOT__result_w;
        __Vdlyvset__top__DOT__processor__DOT__regfile__DOT__rf__v0 = 1U;
        __Vdlyvdim0__top__DOT__processor__DOT__regfile__DOT__rf__v0 
            = vlSelf->top__DOT__processor__DOT__rd_w;
    }
    if (__Vdlyvset__top__DOT__processor__DOT__regfile__DOT__rf__v0) {
        vlSelf->top__DOT__processor__DOT__regfile__DOT__rf[__Vdlyvdim0__top__DOT__processor__DOT__regfile__DOT__rf__v0] 
            = __Vdlyvval__top__DOT__processor__DOT__regfile__DOT__rf__v0;
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("src/top.sv", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("src/top.sv", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->reset_i & 0xfeU))) {
        Verilated::overWidthError("reset_i");}
}
#endif  // VL_DEBUG
