// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprocess_communication.h for the primary calling header

#ifndef VERILATED_VPROCESS_COMMUNICATION_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VPROCESS_COMMUNICATION_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vprocess_communication__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vprocess_communication_std__03a__03asemaphore__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vprocess_communication__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vprocess_communication_std__03a__03asemaphore__Vclpkg();
    ~Vprocess_communication_std__03a__03asemaphore__Vclpkg();
    void ctor(Vprocess_communication__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vprocess_communication_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vprocess_communication__Syms;

class Vprocess_communication_std__03a__03asemaphore : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    VlCoroutine __VnoInFunc_get(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vprocess_communication__Syms* __restrict vlSymsp);
  public:
    Vprocess_communication_std__03a__03asemaphore(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vprocess_communication_std__03a__03asemaphore() {}
};

std::string VL_TO_STRING(const VlClassRef<Vprocess_communication_std__03a__03asemaphore>& obj);

#endif  // guard
