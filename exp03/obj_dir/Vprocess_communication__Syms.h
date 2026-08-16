// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPROCESS_COMMUNICATION__SYMS_H_
#define VERILATED_VPROCESS_COMMUNICATION__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vprocess_communication.h"

// INCLUDE MODULE CLASSES
#include "Vprocess_communication___024root.h"
#include "Vprocess_communication___024unit.h"
#include "Vprocess_communication_std.h"
#include "Vprocess_communication_std__03a__03asemaphore__Vclpkg.h"
#include "Vprocess_communication_std__03a__03aprocess__Vclpkg.h"
#include "Vprocess_communication_std__03a__03amailbox__Tz1__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vprocess_communication__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vprocess_communication* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vprocess_communication___024root TOP;
    Vprocess_communication_std     TOP__std;
    Vprocess_communication_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vprocess_communication_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vprocess_communication_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // CONSTRUCTORS
    Vprocess_communication__Syms(VerilatedContext* contextp, const char* namep, Vprocess_communication* modelp);
    ~Vprocess_communication__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
