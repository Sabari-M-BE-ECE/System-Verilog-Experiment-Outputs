// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vprocess_communication.h for the primary calling header

#ifndef VERILATED_VPROCESS_COMMUNICATION_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VPROCESS_COMMUNICATION_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vprocess_communication_std__03a__03aprocess;


class Vprocess_communication__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vprocess_communication_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vprocess_communication__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vprocess_communication_std__03a__03aprocess__Vclpkg();
    ~Vprocess_communication_std__03a__03aprocess__Vclpkg();
    void ctor(Vprocess_communication__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vprocess_communication_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(Vprocess_communication__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vprocess_communication_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vprocess_communication__Syms* __restrict vlSymsp, VlClassRef<Vprocess_communication_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vprocess_communication__Syms;

class Vprocess_communication_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;
    VlCoroutine __VnoInFunc_await(Vprocess_communication__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vprocess_communication__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vprocess_communication__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vprocess_communication__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vprocess_communication__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vprocess_communication__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vprocess_communication__Syms* __restrict vlSymsp);
  public:
    Vprocess_communication_std__03a__03aprocess(Vprocess_communication__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vprocess_communication_std__03a__03aprocess() {}
};

std::string VL_TO_STRING(const VlClassRef<Vprocess_communication_std__03a__03aprocess>& obj);


//*** Below code from `systemc in Verilog file
// From `systemc at /usr/local/share/verilator/include/verilated_std.sv:197:21

template<> template<>
inline bool VlClassRef<Vprocess_communication_std__03a__03aprocess>::operator==(const VlClassRef<Vprocess_communication_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process == rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vprocess_communication_std__03a__03aprocess>::operator!=(const VlClassRef<Vprocess_communication_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->__PVT__m_process != rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vprocess_communication_std__03a__03aprocess>::operator<(const VlClassRef<Vprocess_communication_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process < rhs.m_objp->__PVT__m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
