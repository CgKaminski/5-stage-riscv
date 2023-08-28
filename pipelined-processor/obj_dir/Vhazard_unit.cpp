// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhazard_unit.h"
#include "Vhazard_unit__Syms.h"

//============================================================
// Constructors

Vhazard_unit::Vhazard_unit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhazard_unit__Syms(contextp(), _vcname__, this)}
    , rs1_e_i{vlSymsp->TOP.rs1_e_i}
    , rs2_e_i{vlSymsp->TOP.rs2_e_i}
    , rd_m_i{vlSymsp->TOP.rd_m_i}
    , rd_w_i{vlSymsp->TOP.rd_w_i}
    , reg_write_m_i{vlSymsp->TOP.reg_write_m_i}
    , reg_write_w_i{vlSymsp->TOP.reg_write_w_i}
    , rs1_d_i{vlSymsp->TOP.rs1_d_i}
    , rs2_d_i{vlSymsp->TOP.rs2_d_i}
    , rd_e_i{vlSymsp->TOP.rd_e_i}
    , pc_src_e_i{vlSymsp->TOP.pc_src_e_i}
    , result_src_e_i{vlSymsp->TOP.result_src_e_i}
    , forward_a_o{vlSymsp->TOP.forward_a_o}
    , forward_b_o{vlSymsp->TOP.forward_b_o}
    , stall_f_o{vlSymsp->TOP.stall_f_o}
    , stall_d_o{vlSymsp->TOP.stall_d_o}
    , flush_e_o{vlSymsp->TOP.flush_e_o}
    , flush_d_o{vlSymsp->TOP.flush_d_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vhazard_unit::Vhazard_unit(const char* _vcname__)
    : Vhazard_unit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhazard_unit::~Vhazard_unit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhazard_unit___024root___eval_debug_assertions(Vhazard_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vhazard_unit___024root___eval_static(Vhazard_unit___024root* vlSelf);
void Vhazard_unit___024root___eval_initial(Vhazard_unit___024root* vlSelf);
void Vhazard_unit___024root___eval_settle(Vhazard_unit___024root* vlSelf);
void Vhazard_unit___024root___eval(Vhazard_unit___024root* vlSelf);

void Vhazard_unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhazard_unit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhazard_unit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhazard_unit___024root___eval_static(&(vlSymsp->TOP));
        Vhazard_unit___024root___eval_initial(&(vlSymsp->TOP));
        Vhazard_unit___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhazard_unit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vhazard_unit::eventsPending() { return false; }

uint64_t Vhazard_unit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vhazard_unit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhazard_unit___024root___eval_final(Vhazard_unit___024root* vlSelf);

VL_ATTR_COLD void Vhazard_unit::final() {
    Vhazard_unit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhazard_unit::hierName() const { return vlSymsp->name(); }
const char* Vhazard_unit::modelName() const { return "Vhazard_unit"; }
unsigned Vhazard_unit::threads() const { return 1; }
