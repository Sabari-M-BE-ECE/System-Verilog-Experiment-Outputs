// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_counter.h for the primary calling header

#ifndef VERILATED_VTB_COUNTER_TB_COUNTER__03A__03ASCOREBOARD__VCLPKG_H_
#define VERILATED_VTB_COUNTER_TB_COUNTER__03A__03ASCOREBOARD__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_counter_std__03a__03amailbox__Tz1;
class Vtb_counter_tb_counter__03a__03atransaction;


class Vtb_counter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_counter_tb_counter__03a__03ascoreboard__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_counter__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_counter_tb_counter__03a__03ascoreboard__Vclpkg();
    ~Vtb_counter_tb_counter__03a__03ascoreboard__Vclpkg();
    void ctor(Vtb_counter__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_counter_tb_counter__03a__03ascoreboard__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_counter__Syms;

class Vtb_counter_tb_counter__03a__03ascoreboard : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__expected_count;
    IData/*31:0*/ __PVT__pass_count;
    IData/*31:0*/ __PVT__fail_count;
    VlClassRef<Vtb_counter_tb_counter__03a__03atransaction> __PVT__tr;
    VlClassRef<Vtb_counter_std__03a__03amailbox__Tz1> __PVT__mon2scb;
    VlCoroutine __VnoInFunc_run(Vtb_counter__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_counter__Syms* __restrict vlSymsp);
  public:
    Vtb_counter_tb_counter__03a__03ascoreboard(Vtb_counter__Syms* __restrict vlSymsp, VlClassRef<Vtb_counter_std__03a__03amailbox__Tz1> mon2scb);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_counter_tb_counter__03a__03ascoreboard() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_counter_tb_counter__03a__03ascoreboard>& obj);

#endif  // guard
