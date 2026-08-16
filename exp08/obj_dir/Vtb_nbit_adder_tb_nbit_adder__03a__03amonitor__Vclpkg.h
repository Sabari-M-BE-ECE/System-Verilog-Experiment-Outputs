// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_nbit_adder.h for the primary calling header

#ifndef VERILATED_VTB_NBIT_ADDER_TB_NBIT_ADDER__03A__03AMONITOR__VCLPKG_H_
#define VERILATED_VTB_NBIT_ADDER_TB_NBIT_ADDER__03A__03AMONITOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_nbit_adder_std__03a__03amailbox__Tz1;
class Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction;


class Vtb_nbit_adder__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_nbit_adder__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor__Vclpkg();
    ~Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor__Vclpkg();
    void ctor(Vtb_nbit_adder__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_nbit_adder__Syms;

class Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_nbit_adder_tb_nbit_adder__03a__03atransaction> __PVT__tr;
    VlClassRef<Vtb_nbit_adder_std__03a__03amailbox__Tz1> __PVT__mon2scb;
    VlCoroutine __VnoInFunc_run(Vtb_nbit_adder__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_nbit_adder__Syms* __restrict vlSymsp);
  public:
    Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor(Vtb_nbit_adder__Syms* __restrict vlSymsp, VlClassRef<Vtb_nbit_adder_std__03a__03amailbox__Tz1> mon2scb);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_nbit_adder_tb_nbit_adder__03a__03amonitor>& obj);

#endif  // guard
