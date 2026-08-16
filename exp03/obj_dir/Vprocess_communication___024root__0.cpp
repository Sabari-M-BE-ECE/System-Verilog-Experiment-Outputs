// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprocess_communication.h for the primary calling header

#include "Vprocess_communication__pch.h"

VlCoroutine Vprocess_communication___024root___eval_initial__TOP__Vtiming__0(Vprocess_communication___024root* vlSelf);

void Vprocess_communication___024root___eval_initial(Vprocess_communication___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___eval_initial\n"); );
    Vprocess_communication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vprocess_communication___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vprocess_communication___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vprocess_communication___024root* vlSelf, VlForkSync __Vfork_1__sync);
VlCoroutine Vprocess_communication___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vprocess_communication___024root* vlSelf, VlForkSync __Vfork_1__sync);

VlCoroutine Vprocess_communication___024root___eval_initial__TOP__Vtiming__0(Vprocess_communication___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vprocess_communication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.process_communication__DOT__mbx = VL_NEW(Vprocess_communication_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    VL_WRITEF_NX("\n====================================\n PROCESS COMMUNICATION EXPERIMENT\n====================================\n\n",0);
    VlForkSync __Vfork_1__sync;
    __Vfork_1__sync.init(2U, nullptr);
    Vprocess_communication___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(vlSelf, __Vfork_1__sync);
    Vprocess_communication___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(vlSelf, __Vfork_1__sync);
    co_await __Vfork_1__sync.join(nullptr, "process_communication.sv", 
                                  90);
    VL_WRITEF_NX("\n[%0t ns] Communication completed\n\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    VL_FINISH_MT("process_communication.sv", 106, "");
    co_return;
}

VlCoroutine Vprocess_communication___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1(Vprocess_communication___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___eval_initial__TOP__Vtiming__0____Vfork_1__1\n"); );
    Vprocess_communication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("[%0t ns] Consumer started\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    co_await VL_NULL_CHECK(vlSelfRef.process_communication__DOT__mbx, "process_communication.sv", 53)->__VnoInFunc_get(vlSymsp, vlSelfRef.process_communication__DOT__consumer__Vstatic__data);
    VL_WRITEF_NX("[%0t ns] Consumer received data = %0d\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.process_communication__DOT__consumer__Vstatic__data);
    co_await VL_NULL_CHECK(vlSelfRef.process_communication__DOT__mbx, "process_communication.sv", 59)->__VnoInFunc_get(vlSymsp, vlSelfRef.process_communication__DOT__consumer__Vstatic__data);
    VL_WRITEF_NX("[%0t ns] Consumer received data = %0d\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.process_communication__DOT__consumer__Vstatic__data);
    __Vfork_1__sync.done("process_communication.sv", 
                         94);
    co_return;
}

VlCoroutine Vprocess_communication___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0(Vprocess_communication___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___eval_initial__TOP__Vtiming__0____Vfork_1__0\n"); );
    Vprocess_communication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("[%0t ns] Producer started\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "process_communication.sv", 
                                         22);
    co_await VL_NULL_CHECK(vlSelfRef.process_communication__DOT__mbx, "process_communication.sv", 24)->__VnoInFunc_put(vlSymsp, 0x00000064U);
    VL_WRITEF_NX("[%0t ns] Producer sent data = 100\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "process_communication.sv", 
                                         29);
    co_await VL_NULL_CHECK(vlSelfRef.process_communication__DOT__mbx, "process_communication.sv", 31)->__VnoInFunc_put(vlSymsp, 0x000000c8U);
    VL_WRITEF_NX("[%0t ns] Producer sent data = 200\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    __Vfork_1__sync.done("process_communication.sv", 
                         92);
    co_return;
}

void Vprocess_communication___024root___eval_triggers_vec__act(Vprocess_communication___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___eval_triggers_vec__act\n"); );
    Vprocess_communication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,2, 
                                                 ((vlSelfRef.__VdynSched.evaluate() 
                                                   << 1U) 
                                                  | vlSelfRef.__VdlySched.awaitingCurrentTime()));
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vprocess_communication___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vprocess_communication___024root___timing_resume(Vprocess_communication___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___timing_resume\n"); );
    Vprocess_communication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdynSched.resume();
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vprocess_communication___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vprocess_communication___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vprocess_communication___024root___eval_phase__act(Vprocess_communication___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___eval_phase__act\n"); );
    Vprocess_communication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vprocess_communication___024root___eval_triggers_vec__act(vlSelf);
    Vprocess_communication___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vprocess_communication___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vprocess_communication___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vprocess_communication___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vprocess_communication___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vprocess_communication___024root___eval_phase__inact(Vprocess_communication___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___eval_phase__inact\n"); );
    Vprocess_communication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("process_communication.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vprocess_communication___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vprocess_communication___024root___eval_phase__nba(Vprocess_communication___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___eval_phase__nba\n"); );
    Vprocess_communication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vprocess_communication___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vprocess_communication___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vprocess_communication___024root___eval(Vprocess_communication___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___eval\n"); );
    Vprocess_communication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vprocess_communication___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("process_communication.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("process_communication.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vprocess_communication___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("process_communication.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vprocess_communication___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vprocess_communication___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vprocess_communication___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vprocess_communication___024root___eval_debug_assertions(Vprocess_communication___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprocess_communication___024root___eval_debug_assertions\n"); );
    Vprocess_communication__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
