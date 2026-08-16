// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mux4to1.h for the primary calling header

#ifndef VERILATED_VTB_MUX4TO1_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_
#define VERILATED_VTB_MUX4TO1_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtb_mux4to1_tb_mux4to1__03a__03atransaction;


class Vtb_mux4to1__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mux4to1_std__03a__03amailbox__Tz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtb_mux4to1__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_mux4to1_std__03a__03amailbox__Tz1__Vclpkg();
    ~Vtb_mux4to1_std__03a__03amailbox__Tz1__Vclpkg();
    void ctor(Vtb_mux4to1__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtb_mux4to1_std__03a__03amailbox__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb_mux4to1__Syms;

class Vtb_mux4to1_std__03a__03amailbox__Tz1 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03atransaction>> __PVT__m_queue;
    VlCoroutine __VnoInFunc_get(Vtb_mux4to1__Syms* __restrict vlSymsp, VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03atransaction> &message);
    void __VnoInFunc_num(Vtb_mux4to1__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vtb_mux4to1__Syms* __restrict vlSymsp, VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03atransaction> &message);
    VlCoroutine __VnoInFunc_put(Vtb_mux4to1__Syms* __restrict vlSymsp, VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03atransaction> message);
    void __VnoInFunc_try_get(Vtb_mux4to1__Syms* __restrict vlSymsp, VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03atransaction> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vtb_mux4to1__Syms* __restrict vlSymsp, VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03atransaction> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vtb_mux4to1__Syms* __restrict vlSymsp, VlClassRef<Vtb_mux4to1_tb_mux4to1__03a__03atransaction> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb_mux4to1__Syms* __restrict vlSymsp);
  public:
    Vtb_mux4to1_std__03a__03amailbox__Tz1(Vtb_mux4to1__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_mux4to1_std__03a__03amailbox__Tz1() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtb_mux4to1_std__03a__03amailbox__Tz1>& obj);

#endif  // guard
