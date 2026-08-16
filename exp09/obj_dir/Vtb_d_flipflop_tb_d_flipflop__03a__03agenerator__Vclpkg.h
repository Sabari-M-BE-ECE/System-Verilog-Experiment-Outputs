// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_d_flipflop.h for the primary calling header

#ifndef VERILATED_VTB_D_FLIPFLOP_TB_D_FLIPFLOP__03A__03AGENERATOR__VCLPKG_H_
#define VERILATED_VTB_D_FLIPFLOP_TB_D_FLIPFLOP__03A__03AGENERATOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_d_flipflop_std__03a__03amailbox__Tz1;
class Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction;


class Vtb_d_flipflop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_d_flipflop__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg();
    ~Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg();
    void ctor(Vtb_d_flipflop__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_d_flipflop__Syms;

class Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction> __PVT__tr;
    VlClassRef<Vtb_d_flipflop_std__03a__03amailbox__Tz1> __PVT__gen2drv;
    VlCoroutine __VnoInFunc_run(Vtb_d_flipflop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb_d_flipflop__Syms* __restrict vlSymsp);
  public:
    Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator(Vtb_d_flipflop__Syms* __restrict vlSymsp, VlClassRef<Vtb_d_flipflop_std__03a__03amailbox__Tz1> gen2drv);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator>& obj);

#endif  // guard
