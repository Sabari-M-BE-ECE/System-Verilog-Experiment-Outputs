// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vprocess_communication__pch.h"

//============================================================
// Constructors

Vprocess_communication::Vprocess_communication(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vprocess_communication__Syms(contextp(), _vcname__, this)}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , std__03a__03amailbox__Tz1__Vclpkg{vlSymsp->TOP.std__03a__03amailbox__Tz1__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vprocess_communication::Vprocess_communication(const char* _vcname__)
    : Vprocess_communication(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vprocess_communication::~Vprocess_communication() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vprocess_communication___024root___eval_debug_assertions(Vprocess_communication___024root* vlSelf);
#endif  // VL_DEBUG
void Vprocess_communication___024root___eval_static(Vprocess_communication___024root* vlSelf);
void Vprocess_communication___024root___eval_initial(Vprocess_communication___024root* vlSelf);
void Vprocess_communication___024root___eval_settle(Vprocess_communication___024root* vlSelf);
void Vprocess_communication___024root___eval(Vprocess_communication___024root* vlSelf);

void Vprocess_communication::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vprocess_communication::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vprocess_communication___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vprocess_communication___024root___eval_static(&(vlSymsp->TOP));
        Vprocess_communication___024root___eval_initial(&(vlSymsp->TOP));
        Vprocess_communication___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vprocess_communication___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vprocess_communication::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vprocess_communication::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vprocess_communication::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vprocess_communication___024root___eval_final(Vprocess_communication___024root* vlSelf);

VL_ATTR_COLD void Vprocess_communication::final() {
    Vprocess_communication___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vprocess_communication::hierName() const { return vlSymsp->name(); }
const char* Vprocess_communication::modelName() const { return "Vprocess_communication"; }
unsigned Vprocess_communication::threads() const { return 1; }
void Vprocess_communication::prepareClone() const { contextp()->prepareClone(); }
void Vprocess_communication::atClone() const {
    contextp()->threadPoolpOnClone();
}
