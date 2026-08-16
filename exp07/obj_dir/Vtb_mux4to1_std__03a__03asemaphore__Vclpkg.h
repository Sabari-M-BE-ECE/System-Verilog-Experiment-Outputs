// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mux4to1.h for the primary calling header

#ifndef VERILATED_VTB_MUX4TO1_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VTB_MUX4TO1_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_mux4to1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mux4to1_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_mux4to1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mux4to1_std__03a__03asemaphore__Vclpkg();
    ~Vtb_mux4to1_std__03a__03asemaphore__Vclpkg();
    void ctor(Vtb_mux4to1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_mux4to1_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_mux4to1__Syms;

class Vtb_mux4to1_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    VlCoroutine __VnoInFunc_get(Vtb_mux4to1__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vtb_mux4to1__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vtb_mux4to1__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_mux4to1__Syms* __restrict vlSymsp);
  public:
    Vtb_mux4to1_std__03a__03asemaphore(Vtb_mux4to1__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_mux4to1_std__03a__03asemaphore() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_mux4to1_std__03a__03asemaphore>& obj);

#endif  // guard
