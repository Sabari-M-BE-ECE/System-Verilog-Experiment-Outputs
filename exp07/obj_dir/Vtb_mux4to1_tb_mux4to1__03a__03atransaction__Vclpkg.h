// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mux4to1.h for the primary calling header

#ifndef VERILATED_VTB_MUX4TO1_TB_MUX4TO1__03A__03ATRANSACTION__VCLPKG_H_
#define VERILATED_VTB_MUX4TO1_TB_MUX4TO1__03A__03ATRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_mux4to1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_mux4to1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg();
    ~Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg();
    void ctor(Vtb_mux4to1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_mux4to1_tb_mux4to1__03a__03atransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_mux4to1__Syms;

class Vtb_mux4to1_tb_mux4to1__03a__03atransaction : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__i0;
    CData/*0:0*/ __PVT__i1;
    CData/*0:0*/ __PVT__i2;
    CData/*0:0*/ __PVT__i3;
    CData/*0:0*/ __PVT__s1;
    CData/*0:0*/ __PVT__s0;
    CData/*0:0*/ __PVT__y;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc___VBasicRand(Vtb_mux4to1__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    void __VnoInFunc_display(Vtb_mux4to1__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(Vtb_mux4to1__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_mux4to1__Syms* __restrict vlSymsp);
  public:
    Vtb_mux4to1_tb_mux4to1__03a__03atransaction(Vtb_mux4to1__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_mux4to1_tb_mux4to1__03a__03atransaction() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03atransaction>& obj);

#endif  // guard
