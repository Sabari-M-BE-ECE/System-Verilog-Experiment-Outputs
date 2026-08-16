// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mux4to1.h for the primary calling header

#include "Vtb_mux4to1__pch.h"

VL_ATTR_COLD void Vtb_mux4to1_tb_mux4to1___eval_initial__TOP__tb_mux4to1(Vtb_mux4to1_tb_mux4to1* vlSelf);
VlCoroutine Vtb_mux4to1_tb_mux4to1___eval_initial__TOP__tb_mux4to1__Vtiming__0(Vtb_mux4to1_tb_mux4to1* vlSelf);
VlCoroutine Vtb_mux4to1_tb_mux4to1___eval_initial__TOP__tb_mux4to1__Vtiming__1(Vtb_mux4to1_tb_mux4to1* vlSelf);

void Vtb_mux4to1___024root___eval_initial(Vtb_mux4to1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root___eval_initial\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_mux4to1_tb_mux4to1___eval_initial__TOP__tb_mux4to1((&vlSymsp->TOP__tb_mux4to1));
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_mux4to1_tb_mux4to1___eval_initial__TOP__tb_mux4to1__Vtiming__0((&vlSymsp->TOP__tb_mux4to1));
    Vtb_mux4to1_tb_mux4to1___eval_initial__TOP__tb_mux4to1__Vtiming__1((&vlSymsp->TOP__tb_mux4to1));
}

void Vtb_mux4to1___024root___eval_triggers_vec__act(Vtb_mux4to1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root___eval_triggers_vec__act\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,2, 
                                                 ((vlSelfRef.__VdynSched.evaluate() 
                                                   << 1U) 
                                                  | vlSelfRef.__VdlySched.awaitingCurrentTime()));
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vtb_mux4to1___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root___trigger_anySet__act\n"); );
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

void Vtb_mux4to1___024root___timing_resume(Vtb_mux4to1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root___timing_resume\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdynSched.resume();
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_mux4to1___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_mux4to1___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_mux4to1___024root___eval_phase__act(Vtb_mux4to1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root___eval_phase__act\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_mux4to1___024root___eval_triggers_vec__act(vlSelf);
    Vtb_mux4to1___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mux4to1___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_mux4to1___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_mux4to1___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_mux4to1___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_mux4to1___024root___eval_phase__inact(Vtb_mux4to1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root___eval_phase__inact\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_mux4to1.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_mux4to1___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_mux4to1___024root___eval_phase__nba(Vtb_mux4to1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root___eval_phase__nba\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_mux4to1___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_mux4to1___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_mux4to1___024root___eval(Vtb_mux4to1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root___eval\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_mux4to1___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_mux4to1.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_mux4to1.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_mux4to1___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_mux4to1.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_mux4to1___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_mux4to1___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_mux4to1___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_mux4to1___024root___eval_debug_assertions(Vtb_mux4to1___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root___eval_debug_assertions\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
