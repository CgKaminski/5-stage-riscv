// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtestbench.h"
#include "Vtestbench__Syms.h"

//============================================================
// Constructors

Vtestbench::Vtestbench(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtestbench__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtestbench::Vtestbench(const char* _vcname__)
    : Vtestbench(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtestbench::~Vtestbench() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf);
void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf);
void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf);
void Vtestbench___024root___eval(Vtestbench___024root* vlSelf);

void Vtestbench::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtestbench::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtestbench___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtestbench___024root___eval_static(&(vlSymsp->TOP));
        Vtestbench___024root___eval_initial(&(vlSymsp->TOP));
        Vtestbench___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtestbench___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtestbench::eventsPending() { return false; }

uint64_t Vtestbench::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtestbench::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench::final() {
    Vtestbench___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtestbench::hierName() const { return vlSymsp->name(); }
const char* Vtestbench::modelName() const { return "Vtestbench"; }
unsigned Vtestbench::threads() const { return 1; }
