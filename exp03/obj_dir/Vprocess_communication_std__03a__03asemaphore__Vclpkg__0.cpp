// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprocess_communication.h for the primary calling header

#include "Vprocess_communication__pch.h"

Vprocess_communication_std__03a__03asemaphore::Vprocess_communication_std__03a__03asemaphore(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vprocess_communication_std__03a__03asemaphore::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_keyCount = keyCount;
}

void Vprocess_communication_std__03a__03asemaphore::__VnoInFunc_put(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vprocess_communication_std__03a__03asemaphore::__VnoInFunc_put\n"); );
    // Body
    this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                               + keyCount);
}

VlCoroutine Vprocess_communication_std__03a__03asemaphore::__VnoInFunc_get(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vprocess_communication_std__03a__03asemaphore::__VnoInFunc_get\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h32399f90__0;
    __Vtrigprevexpr_h32399f90__0 = 0;
    // Body
    VL_KEEP_THIS;
    while (VL_LTS_III(32, this->__PVT__m_keyCount, keyCount)) {
        if (VL_LTS_III(32, this->__PVT__m_keyCount, keyCount)) {
            CData/*0:0*/ __VdynTrigger_h54464cb8__0;
            __VdynTrigger_h54464cb8__0 = 0;
            __VdynTrigger_h54464cb8__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h54464cb8__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::semaphore.m_keyCount >= std::semaphore.keyCount))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             114);
                __Vtrigprevexpr_h32399f90__0 = VL_GTES_III(32, this->__PVT__m_keyCount, keyCount);
                __VdynTrigger_h54464cb8__0 = __Vtrigprevexpr_h32399f90__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h54464cb8__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::semaphore.m_keyCount >= std::semaphore.keyCount))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         114);
        }
    }
    this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                               - keyCount);
    co_return;
}

void Vprocess_communication_std__03a__03asemaphore::__VnoInFunc_try_get(Vprocess_communication__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vprocess_communication_std__03a__03asemaphore::__VnoInFunc_try_get\n"); );
    // Body
    {
        try_get__Vfuncrtn = 0;
        if (VL_GTES_III(32, this->__PVT__m_keyCount, keyCount)) {
            this->__PVT__m_keyCount = (this->__PVT__m_keyCount 
                                       - keyCount);
            try_get__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        try_get__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vprocess_communication_std__03a__03asemaphore::_ctor_var_reset(Vprocess_communication__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vprocess_communication_std__03a__03asemaphore::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_keyCount = 0;
}

std::string VL_TO_STRING(const VlClassRef<Vprocess_communication_std__03a__03asemaphore>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vprocess_communication_std__03a__03asemaphore::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vprocess_communication_std__03a__03asemaphore::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vprocess_communication_std__03a__03asemaphore::to_string\n"); );
    // Body
    return ("'{"s + to_string_middle() + "}");
}

std::string Vprocess_communication_std__03a__03asemaphore::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vprocess_communication_std__03a__03asemaphore::to_string_middle\n"); );
    // Body
    std::string out;
    out += "m_keyCount:" + VL_TO_STRING(__PVT__m_keyCount);
    return (out);
}
