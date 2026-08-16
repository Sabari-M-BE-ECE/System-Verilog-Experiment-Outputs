// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_environment.h for the primary calling header

#ifndef VERILATED_VTB_ENVIRONMENT_TB_ENVIRONMENT__03A__03AENVIRONMENT__VCLPKG_H_
#define VERILATED_VTB_ENVIRONMENT_TB_ENVIRONMENT__03A__03AENVIRONMENT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_environment_std__03a__03amailbox__Tz1;
class Vtb_environment_tb_environment__03a__03adriver;
class Vtb_environment_tb_environment__03a__03agenerator;


class Vtb_environment__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_environment__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg();
    ~Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg();
    void ctor(Vtb_environment__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_environment_tb_environment__03a__03aenvironment__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_environment__Syms;

class Vtb_environment_tb_environment__03a__03aenvironment : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_environment_tb_environment__03a__03agenerator> __PVT__gen;
    VlClassRef<Vtb_environment_tb_environment__03a__03adriver> __PVT__drv;
    VlClassRef<Vtb_environment_std__03a__03amailbox__Tz1> __PVT__gen2drv;
    VlCoroutine __VnoInFunc_run(Vtb_environment__Syms* __restrict vlSymsp);
  private:
    VlCoroutine __VnoInFunc_run____Vfork_1__0(Vtb_environment__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync);
    VlCoroutine __VnoInFunc_run____Vfork_1__1(Vtb_environment__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync);
    void _ctor_var_reset(Vtb_environment__Syms* __restrict vlSymsp);
  public:
    Vtb_environment_tb_environment__03a__03aenvironment(Vtb_environment__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_environment_tb_environment__03a__03aenvironment() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_environment_tb_environment__03a__03aenvironment>& obj);

#endif  // guard
