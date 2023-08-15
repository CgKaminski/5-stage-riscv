// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmips.h"
#include "Vmips__Syms.h"

//============================================================
// Constructors

Vmips::Vmips(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmips__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , memwrite{vlSymsp->TOP.memwrite}
    , writedata{vlSymsp->TOP.writedata}
    , dataadr{vlSymsp->TOP.dataadr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmips::Vmips(const char* _vcname__)
    : Vmips(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmips::~Vmips() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmips___024root___eval_debug_assertions(Vmips___024root* vlSelf);
#endif  // VL_DEBUG
void Vmips___024root___eval_static(Vmips___024root* vlSelf);
void Vmips___024root___eval_initial(Vmips___024root* vlSelf);
void Vmips___024root___eval_settle(Vmips___024root* vlSelf);
void Vmips___024root___eval(Vmips___024root* vlSelf);

void Vmips::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmips::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmips___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmips___024root___eval_static(&(vlSymsp->TOP));
        Vmips___024root___eval_initial(&(vlSymsp->TOP));
        Vmips___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmips___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmips::eventsPending() { return false; }

uint64_t Vmips::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmips::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmips___024root___eval_final(Vmips___024root* vlSelf);

VL_ATTR_COLD void Vmips::final() {
    Vmips___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmips::hierName() const { return vlSymsp->name(); }
const char* Vmips::modelName() const { return "Vmips"; }
unsigned Vmips::threads() const { return 1; }
