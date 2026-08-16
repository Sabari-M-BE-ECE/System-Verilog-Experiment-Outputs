// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtransaction_random__pch.h"

//============================================================
// Constructors

Vtransaction_random::Vtransaction_random(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtransaction_random__Syms(contextp(), _vcname__, this)}
    , __PVT__transaction_random{vlSymsp->TOP.__PVT__transaction_random}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , transaction_random__03a__03atransaction__Vclpkg{vlSymsp->TOP.transaction_random__03a__03atransaction__Vclpkg}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtransaction_random::Vtransaction_random(const char* _vcname__)
    : Vtransaction_random(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtransaction_random::~Vtransaction_random() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtransaction_random___024root___eval_debug_assertions(Vtransaction_random___024root* vlSelf);
#endif  // VL_DEBUG
void Vtransaction_random___024root___eval_static(Vtransaction_random___024root* vlSelf);
void Vtransaction_random___024root___eval_initial(Vtransaction_random___024root* vlSelf);
void Vtransaction_random___024root___eval_settle(Vtransaction_random___024root* vlSelf);
void Vtransaction_random___024root___eval(Vtransaction_random___024root* vlSelf);

void Vtransaction_random::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtransaction_random::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtransaction_random___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtransaction_random___024root___eval_static(&(vlSymsp->TOP));
        Vtransaction_random___024root___eval_initial(&(vlSymsp->TOP));
        Vtransaction_random___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtransaction_random___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtransaction_random::eventsPending() { return false; }

uint64_t Vtransaction_random::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtransaction_random::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtransaction_random___024root___eval_final(Vtransaction_random___024root* vlSelf);

VL_ATTR_COLD void Vtransaction_random::final() {
    Vtransaction_random___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtransaction_random::hierName() const { return vlSymsp->name(); }
const char* Vtransaction_random::modelName() const { return "Vtransaction_random"; }
unsigned Vtransaction_random::threads() const { return 1; }
void Vtransaction_random::prepareClone() const { contextp()->prepareClone(); }
void Vtransaction_random::atClone() const {
    contextp()->threadPoolpOnClone();
}
