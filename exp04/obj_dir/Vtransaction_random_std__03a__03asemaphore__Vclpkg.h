// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransaction_random.h for the primary calling header

#ifndef VERILATED_VTRANSACTION_RANDOM_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VTRANSACTION_RANDOM_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtransaction_random__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransaction_random_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransaction_random__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransaction_random_std__03a__03asemaphore__Vclpkg();
    ~Vtransaction_random_std__03a__03asemaphore__Vclpkg();
    void ctor(Vtransaction_random__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransaction_random_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtransaction_random__Syms;

class Vtransaction_random_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    VlCoroutine __VnoInFunc_get(Vtransaction_random__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vtransaction_random__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vtransaction_random__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtransaction_random__Syms* __restrict vlSymsp);
  public:
    Vtransaction_random_std__03a__03asemaphore(Vtransaction_random__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtransaction_random_std__03a__03asemaphore() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransaction_random_std__03a__03asemaphore>& obj);

#endif  // guard
