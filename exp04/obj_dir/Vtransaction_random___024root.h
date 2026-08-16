// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransaction_random.h for the primary calling header

#ifndef VERILATED_VTRANSACTION_RANDOM___024ROOT_H_
#define VERILATED_VTRANSACTION_RANDOM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransaction_random_std;
class Vtransaction_random_std__03a__03aprocess__Vclpkg;
class Vtransaction_random_std__03a__03asemaphore__Vclpkg;
class Vtransaction_random_transaction_random;
class Vtransaction_random_transaction_random__03a__03atransaction__Vclpkg;


class Vtransaction_random__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransaction_random___024root final {
  public:
    // CELLS
    Vtransaction_random_transaction_random* __PVT__transaction_random;
    Vtransaction_random_std* __PVT__std;
    Vtransaction_random_transaction_random__03a__03atransaction__Vclpkg* transaction_random__03a__03atransaction__Vclpkg;
    Vtransaction_random_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vtransaction_random_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDynamicTriggerScheduler __VdynSched;

    // INTERNAL VARIABLES
    Vtransaction_random__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransaction_random___024root(Vtransaction_random__Syms* symsp, const char* namep);
    ~Vtransaction_random___024root();
    VL_UNCOPYABLE(Vtransaction_random___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
