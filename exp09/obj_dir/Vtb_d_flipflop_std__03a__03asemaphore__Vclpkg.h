// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_d_flipflop.h for the primary calling header

#ifndef VERILATED_VTB_D_FLIPFLOP_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VTB_D_FLIPFLOP_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_d_flipflop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_d_flipflop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg();
    ~Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg();
    void ctor(Vtb_d_flipflop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_d_flipflop__Syms;

class Vtb_d_flipflop_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    VlCoroutine __VnoInFunc_get(Vtb_d_flipflop__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vtb_d_flipflop__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vtb_d_flipflop__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_d_flipflop__Syms* __restrict vlSymsp);
  public:
    Vtb_d_flipflop_std__03a__03asemaphore(Vtb_d_flipflop__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_d_flipflop_std__03a__03asemaphore() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_d_flipflop_std__03a__03asemaphore>& obj);

#endif  // guard
