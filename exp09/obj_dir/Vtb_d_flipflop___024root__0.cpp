// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_d_flipflop.h for the primary calling header

#include "Vtb_d_flipflop__pch.h"

VL_ATTR_COLD void Vtb_d_flipflop_tb_d_flipflop___eval_initial__TOP__tb_d_flipflop(Vtb_d_flipflop_tb_d_flipflop* vlSelf);
VlCoroutine Vtb_d_flipflop_tb_d_flipflop___eval_initial__TOP__tb_d_flipflop__Vtiming__0(Vtb_d_flipflop_tb_d_flipflop* vlSelf);
VlCoroutine Vtb_d_flipflop_tb_d_flipflop___eval_initial__TOP__tb_d_flipflop__Vtiming__1(Vtb_d_flipflop_tb_d_flipflop* vlSelf);

void Vtb_d_flipflop___024root___eval_initial(Vtb_d_flipflop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root___eval_initial\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_d_flipflop_tb_d_flipflop___eval_initial__TOP__tb_d_flipflop((&vlSymsp->TOP__tb_d_flipflop));
    Vtb_d_flipflop_tb_d_flipflop___eval_initial__TOP__tb_d_flipflop__Vtiming__0((&vlSymsp->TOP__tb_d_flipflop));
    Vtb_d_flipflop_tb_d_flipflop___eval_initial__TOP__tb_d_flipflop__Vtiming__1((&vlSymsp->TOP__tb_d_flipflop));
}

void Vtb_d_flipflop___024root___eval_triggers_vec__act(Vtb_d_flipflop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root___eval_triggers_vec__act\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = VL_EXTEND_QI(64,4, 
                                                 ((VL_EXTEND_II(2,1, vlSelfRef.__VdynSched.evaluate()) 
                                                   << 2U) 
                                                  | ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSymsp->TOP__tb_d_flipflop.__PVT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_d_flipflop____PVT__clk__0 
        = vlSymsp->TOP__tb_d_flipflop.__PVT__clk;
    vlSelfRef.__VdynSched.doPostUpdates();
}

bool Vtb_d_flipflop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root___trigger_anySet__act\n"); );
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

void Vtb_d_flipflop_tb_d_flipflop___nba_sequent__TOP__tb_d_flipflop__0(Vtb_d_flipflop_tb_d_flipflop* vlSelf);

void Vtb_d_flipflop___024root___eval_nba(Vtb_d_flipflop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root___eval_nba\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb_d_flipflop_tb_d_flipflop___nba_sequent__TOP__tb_d_flipflop__0((&vlSymsp->TOP__tb_d_flipflop));
    }
}

void Vtb_d_flipflop___024root___timing_resume(Vtb_d_flipflop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root___timing_resume\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdynSched.resume();
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_d_flipflop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb_d_flipflop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_d_flipflop___024root___eval_phase__act(Vtb_d_flipflop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root___eval_phase__act\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_d_flipflop___024root___eval_triggers_vec__act(vlSelf);
    Vtb_d_flipflop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_d_flipflop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_d_flipflop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_d_flipflop___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_d_flipflop___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_d_flipflop___024root___eval_phase__inact(Vtb_d_flipflop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root___eval_phase__inact\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_d_flipflop.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_d_flipflop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb_d_flipflop___024root___eval_phase__nba(Vtb_d_flipflop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root___eval_phase__nba\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_d_flipflop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb_d_flipflop___024root___eval_nba(vlSelf);
        Vtb_d_flipflop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb_d_flipflop___024root___eval(Vtb_d_flipflop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root___eval\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_d_flipflop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb_d_flipflop.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb_d_flipflop.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb_d_flipflop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb_d_flipflop.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb_d_flipflop___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb_d_flipflop___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb_d_flipflop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb_d_flipflop___024root___eval_debug_assertions(Vtb_d_flipflop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root___eval_debug_assertions\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
