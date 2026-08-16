// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mux4to1.h for the primary calling header

#ifndef VERILATED_VTB_MUX4TO1_TB_MUX4TO1__03A__03AENVIRONMENT__VCLPKG_H_
#define VERILATED_VTB_MUX4TO1_TB_MUX4TO1__03A__03AENVIRONMENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_mux4to1_std__03a__03amailbox__Tz1;
class Vtb_mux4to1_tb_mux4to1__03a__03adriver;
class Vtb_mux4to1_tb_mux4to1__03a__03agenerator;
class Vtb_mux4to1_tb_mux4to1__03a__03amonitor;
class Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard;


class Vtb_mux4to1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mux4to1_tb_mux4to1__03a__03aenvironment__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_mux4to1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mux4to1_tb_mux4to1__03a__03aenvironment__Vclpkg();
    ~Vtb_mux4to1_tb_mux4to1__03a__03aenvironment__Vclpkg();
    void ctor(Vtb_mux4to1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_mux4to1_tb_mux4to1__03a__03aenvironment__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_mux4to1__Syms;

class Vtb_mux4to1_tb_mux4to1__03a__03aenvironment : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03agenerator> __PVT__gen;
    VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03adriver> __PVT__drv;
    VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03amonitor> __PVT__mon;
    VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03ascoreboard> __PVT__scb;
    VlCoroutine __VnoInFunc_run(Vtb_mux4to1__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_run____Vfork_1__0(Vtb_mux4to1__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync);
    VlCoroutine __VnoInFunc_run____Vfork_1__1(Vtb_mux4to1__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync);
    VlCoroutine __VnoInFunc_run____Vfork_1__2(Vtb_mux4to1__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync);
    VlCoroutine __VnoInFunc_run____Vfork_1__3(Vtb_mux4to1__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync);
    void _ctor_var_reset(Vtb_mux4to1__Syms* __restrict vlSymsp);
  public:
    Vtb_mux4to1_tb_mux4to1__03a__03aenvironment(Vtb_mux4to1__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_mux4to1_tb_mux4to1__03a__03aenvironment() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03aenvironment>& obj);

#endif  // guard
