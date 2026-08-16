// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTRANSACTION_RANDOM__SYMS_H_
#define VERILATED_VTRANSACTION_RANDOM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtransaction_random.h"

// INCLUDE MODULE CLASSES
#include "Vtransaction_random___024root.h"
#include "Vtransaction_random_transaction_random.h"
#include "Vtransaction_random_std.h"
#include "Vtransaction_random_transaction_random__03a__03atransaction__Vclpkg.h"
#include "Vtransaction_random_std__03a__03asemaphore__Vclpkg.h"
#include "Vtransaction_random_std__03a__03aprocess__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtransaction_random__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtransaction_random* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtransaction_random___024root  TOP;
    Vtransaction_random_std        TOP__std;
    Vtransaction_random_transaction_random TOP__transaction_random;
    Vtransaction_random_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vtransaction_random_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;
    Vtransaction_random_transaction_random__03a__03atransaction__Vclpkg TOP__transaction_random__03a__03atransaction__Vclpkg;

    // CONSTRUCTORS
    Vtransaction_random__Syms(VerilatedContext* contextp, const char* namep, Vtransaction_random* modelp);
    ~Vtransaction_random__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
