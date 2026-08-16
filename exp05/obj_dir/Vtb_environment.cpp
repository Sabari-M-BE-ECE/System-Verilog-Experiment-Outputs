// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_environment__pch.h"

//============================================================
// Constructors

Vtb_environment::Vtb_environment(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_environment__Syms(contextp(), _vcname__, this)}
    , __PVT__tb_environment{vlSymsp->TOP.__PVT__tb_environment}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , tb_environment__03a__03atransaction__Vclpkg{vlSymsp->TOP.tb_environment__03a__03atransaction__Vclpkg}
    , tb_environment__03a__03agenerator__Vclpkg{vlSymsp->TOP.tb_environment__03a__03agenerator__Vclpkg}
    , tb_environment__03a__03adriver__Vclpkg{vlSymsp->TOP.tb_environment__03a__03adriver__Vclpkg}
    , tb_environment__03a__03aenvironment__Vclpkg{vlSymsp->TOP.tb_environment__03a__03aenvironment__Vclpkg}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , std__03a__03amailbox__Tz1__Vclpkg{vlSymsp->TOP.std__03a__03amailbox__Tz1__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_environment::Vtb_environment(const char* _vcname__)
    : Vtb_environment(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_environment::~Vtb_environment() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_environment___024root___eval_debug_assertions(Vtb_environment___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_environment___024root___eval_static(Vtb_environment___024root* vlSelf);
void Vtb_environment___024root___eval_initial(Vtb_environment___024root* vlSelf);
void Vtb_environment___024root___eval_settle(Vtb_environment___024root* vlSelf);
void Vtb_environment___024root___eval(Vtb_environment___024root* vlSelf);

void Vtb_environment::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_environment::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_environment___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_environment___024root___eval_static(&(vlSymsp->TOP));
        Vtb_environment___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_environment___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_environment___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_environment::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_environment::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_environment::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_environment___024root___eval_final(Vtb_environment___024root* vlSelf);

VL_ATTR_COLD void Vtb_environment::final() {
    Vtb_environment___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_environment::hierName() const { return vlSymsp->name(); }
const char* Vtb_environment::modelName() const { return "Vtb_environment"; }
unsigned Vtb_environment::threads() const { return 1; }
void Vtb_environment::prepareClone() const { contextp()->prepareClone(); }
void Vtb_environment::atClone() const {
    contextp()->threadPoolpOnClone();
}
