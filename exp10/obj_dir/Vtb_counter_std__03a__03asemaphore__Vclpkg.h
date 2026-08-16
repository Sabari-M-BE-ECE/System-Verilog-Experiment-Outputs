// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_counter.h for the primary calling header

#ifndef VERILATED_VTB_COUNTER_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VTB_COUNTER_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_counter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_counter_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_counter__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_counter_std__03a__03asemaphore__Vclpkg();
    ~Vtb_counter_std__03a__03asemaphore__Vclpkg();
    void ctor(Vtb_counter__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_counter_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_counter__Syms;

class Vtb_counter_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    VlCoroutine __VnoInFunc_get(Vtb_counter__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vtb_counter__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vtb_counter__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_counter__Syms* __restrict vlSymsp);
  public:
    Vtb_counter_std__03a__03asemaphore(Vtb_counter__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_counter_std__03a__03asemaphore() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_counter_std__03a__03asemaphore>& obj);

#endif  // guard
