// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransaction_random.h for the primary calling header

#ifndef VERILATED_VTRANSACTION_RANDOM_TRANSACTION_RANDOM__03A__03ATRANSACTION__VCLPKG_H_
#define VERILATED_VTRANSACTION_RANDOM_TRANSACTION_RANDOM__03A__03ATRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtransaction_random__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransaction_random_transaction_random__03a__03atransaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransaction_random__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransaction_random_transaction_random__03a__03atransaction__Vclpkg();
    ~Vtransaction_random_transaction_random__03a__03atransaction__Vclpkg();
    void ctor(Vtransaction_random__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransaction_random_transaction_random__03a__03atransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtransaction_random__Syms;

class Vtransaction_random_transaction_random__03a__03atransaction : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__a;
    CData/*0:0*/ __PVT__b;
    CData/*0:0*/ __PVT__cin;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc___VBasicRand(Vtransaction_random__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    void __VnoInFunc_display(Vtransaction_random__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(Vtransaction_random__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtransaction_random__Syms* __restrict vlSymsp);
  public:
    Vtransaction_random_transaction_random__03a__03atransaction(Vtransaction_random__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtransaction_random_transaction_random__03a__03atransaction() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransaction_random_transaction_random__03a__03atransaction>& obj);

#endif  // guard
