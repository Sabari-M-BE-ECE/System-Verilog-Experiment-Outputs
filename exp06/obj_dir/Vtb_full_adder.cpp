// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_full_adder__pch.h"

//============================================================
// Constructors

Vtb_full_adder::Vtb_full_adder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_full_adder__Syms(contextp(), _vcname__, this)}
    , __PVT__tb_full_adder{vlSymsp->TOP.__PVT__tb_full_adder}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , tb_full_adder__03a__03atransaction__Vclpkg{vlSymsp->TOP.tb_full_adder__03a__03atransaction__Vclpkg}
    , tb_full_adder__03a__03agenerator__Vclpkg{vlSymsp->TOP.tb_full_adder__03a__03agenerator__Vclpkg}
    , tb_full_adder__03a__03adriver__Vclpkg{vlSymsp->TOP.tb_full_adder__03a__03adriver__Vclpkg}
    , tb_full_adder__03a__03amonitor__Vclpkg{vlSymsp->TOP.tb_full_adder__03a__03amonitor__Vclpkg}
    , tb_full_adder__03a__03ascoreboard__Vclpkg{vlSymsp->TOP.tb_full_adder__03a__03ascoreboard__Vclpkg}
    , tb_full_adder__03a__03aenvironment__Vclpkg{vlSymsp->TOP.tb_full_adder__03a__03aenvironment__Vclpkg}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , std__03a__03amailbox__Tz1__Vclpkg{vlSymsp->TOP.std__03a__03amailbox__Tz1__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_full_adder::Vtb_full_adder(const char* _vcname__)
    : Vtb_full_adder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_full_adder::~Vtb_full_adder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_full_adder___024root___eval_debug_assertions(Vtb_full_adder___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_full_adder___024root___eval_static(Vtb_full_adder___024root* vlSelf);
void Vtb_full_adder___024root___eval_initial(Vtb_full_adder___024root* vlSelf);
void Vtb_full_adder___024root___eval_settle(Vtb_full_adder___024root* vlSelf);
void Vtb_full_adder___024root___eval(Vtb_full_adder___024root* vlSelf);

void Vtb_full_adder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_full_adder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_full_adder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_full_adder___024root___eval_static(&(vlSymsp->TOP));
        Vtb_full_adder___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_full_adder___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_full_adder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_full_adder::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_full_adder::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_full_adder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_full_adder___024root___eval_final(Vtb_full_adder___024root* vlSelf);

VL_ATTR_COLD void Vtb_full_adder::final() {
    Vtb_full_adder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_full_adder::hierName() const { return vlSymsp->name(); }
const char* Vtb_full_adder::modelName() const { return "Vtb_full_adder"; }
unsigned Vtb_full_adder::threads() const { return 1; }
void Vtb_full_adder::prepareClone() const { contextp()->prepareClone(); }
void Vtb_full_adder::atClone() const {
    contextp()->threadPoolpOnClone();
}
