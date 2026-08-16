// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_counter.h for the primary calling header

#ifndef VERILATED_VTB_COUNTER_TB_COUNTER__03A__03ATRANSACTION__VCLPKG_H_
#define VERILATED_VTB_COUNTER_TB_COUNTER__03A__03ATRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vtb_counter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_counter_tb_counter__03a__03atransaction__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_counter__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_counter_tb_counter__03a__03atransaction__Vclpkg();
    ~Vtb_counter_tb_counter__03a__03atransaction__Vclpkg();
    void ctor(Vtb_counter__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_counter_tb_counter__03a__03atransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_counter__Syms;

class Vtb_counter_tb_counter__03a__03atransaction : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__reset;
    CData/*3:0*/ __PVT__count;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc___VBasicRand(Vtb_counter__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    void __VnoInFunc_display(Vtb_counter__Syms* __restrict vlSymsp);
    void __VnoInFunc_randomize(Vtb_counter__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_counter__Syms* __restrict vlSymsp);
  public:
    Vtb_counter_tb_counter__03a__03atransaction(Vtb_counter__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_counter_tb_counter__03a__03atransaction() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_counter_tb_counter__03a__03atransaction>& obj);

#endif  // guard
