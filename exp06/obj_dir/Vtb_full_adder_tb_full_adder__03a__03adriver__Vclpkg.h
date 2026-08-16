// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_full_adder.h for the primary calling header

#ifndef VERILATED_VTB_FULL_ADDER_TB_FULL_ADDER__03A__03ADRIVER__VCLPKG_H_
#define VERILATED_VTB_FULL_ADDER_TB_FULL_ADDER__03A__03ADRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_full_adder_std__03a__03amailbox__Tz1;
class Vtb_full_adder_tb_full_adder__03a__03atransaction;


class Vtb_full_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_full_adder_tb_full_adder__03a__03adriver__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_full_adder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_full_adder_tb_full_adder__03a__03adriver__Vclpkg();
    ~Vtb_full_adder_tb_full_adder__03a__03adriver__Vclpkg();
    void ctor(Vtb_full_adder__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_full_adder_tb_full_adder__03a__03adriver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_full_adder__Syms;

class Vtb_full_adder_tb_full_adder__03a__03adriver : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_full_adder_tb_full_adder__03a__03atransaction> __PVT__tr;
    VlClassRef<Vtb_full_adder_std__03a__03amailbox__Tz1> __PVT__gen2drv;
    VlCoroutine __VnoInFunc_run(Vtb_full_adder__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_full_adder__Syms* __restrict vlSymsp);
  public:
    Vtb_full_adder_tb_full_adder__03a__03adriver(Vtb_full_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_full_adder_std__03a__03amailbox__Tz1> gen2drv);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_full_adder_tb_full_adder__03a__03adriver() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_full_adder_tb_full_adder__03a__03adriver>& obj);

#endif  // guard
