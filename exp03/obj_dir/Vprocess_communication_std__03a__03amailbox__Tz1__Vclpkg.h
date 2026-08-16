// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprocess_communication.h for the primary calling header

#ifndef VERILATED_VPROCESS_COMMUNICATION_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_
#define VERILATED_VPROCESS_COMMUNICATION_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vprocess_communication__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vprocess_communication_std__03a__03amailbox__Tz1__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vprocess_communication__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vprocess_communication_std__03a__03amailbox__Tz1__Vclpkg();
    ~Vprocess_communication_std__03a__03amailbox__Tz1__Vclpkg();
    void ctor(Vprocess_communication__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vprocess_communication_std__03a__03amailbox__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vprocess_communication__Syms;

class Vprocess_communication_std__03a__03amailbox__Tz1 : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<IData/*31:0*/> __PVT__m_queue;
    VlCoroutine __VnoInFunc_get(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ &message);
    void __VnoInFunc_num(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ &message);
    VlCoroutine __VnoInFunc_put(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ message);
    void __VnoInFunc_try_get(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vprocess_communication__Syms* __restrict vlSymsp);
  public:
    Vprocess_communication_std__03a__03amailbox__Tz1(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vprocess_communication_std__03a__03amailbox__Tz1() {}
};

std::string VL_TO_STRING(const VlClassRef<Vprocess_communication_std__03a__03amailbox__Tz1>& obj);

#endif  // guard
