// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtransaction_random.h for the primary calling header

#ifndef VERILATED_VTRANSACTION_RANDOM_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VTRANSACTION_RANDOM_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vtransaction_random_std__03a__03aprocess;


class Vtransaction_random__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtransaction_random_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vtransaction_random__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtransaction_random_std__03a__03aprocess__Vclpkg();
    ~Vtransaction_random_std__03a__03aprocess__Vclpkg();
    void ctor(Vtransaction_random__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vtransaction_random_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(Vtransaction_random__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vtransaction_random_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vtransaction_random__Syms* __restrict vlSymsp, VlClassRef<Vtransaction_random_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vtransaction_random__Syms;

class Vtransaction_random_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;
    VlCoroutine __VnoInFunc_await(Vtransaction_random__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vtransaction_random__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vtransaction_random__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vtransaction_random__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vtransaction_random__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vtransaction_random__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(Vtransaction_random__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vtransaction_random__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtransaction_random__Syms* __restrict vlSymsp);
  public:
    Vtransaction_random_std__03a__03aprocess(Vtransaction_random__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtransaction_random_std__03a__03aprocess() {}
};

std::string VL_TO_STRING(const VlClassRef<Vtransaction_random_std__03a__03aprocess>& obj);


//*** Below code from `systemc in Verilog file
// From `systemc at /usr/local/share/verilator/include/verilated_std.sv:197:21

template<> template<>
inline bool VlClassRef<Vtransaction_random_std__03a__03aprocess>::operator==(const VlClassRef<Vtransaction_random_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process == rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vtransaction_random_std__03a__03aprocess>::operator!=(const VlClassRef<Vtransaction_random_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->__PVT__m_process != rhs.m_objp->__PVT__m_process;
};
template<> template<>
inline bool VlClassRef<Vtransaction_random_std__03a__03aprocess>::operator<(const VlClassRef<Vtransaction_random_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->__PVT__m_process < rhs.m_objp->__PVT__m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
