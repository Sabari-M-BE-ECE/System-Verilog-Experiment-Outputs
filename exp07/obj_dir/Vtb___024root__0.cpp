// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("wave.vcd"s);
    vlSymsp->_traceDumpOpen();
    VL_WRITEF_NX("\nHALF ADDER\n",0);
    vlSelfRef.tb__DOT__A = 0U;
    vlSelfRef.tb__DOT__B = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.sv", 
                                         40);
    VL_WRITEF_NX("A=%b B=%b Sum=%b Carry=%b\n",0,1,
                 vlSelfRef.tb__DOT__A,1,(IData)(vlSelfRef.tb__DOT__B),
                 1,vlSelfRef.tb__DOT__HA_Sum,1,(IData)(vlSelfRef.tb__DOT__HA_Carry));
    vlSelfRef.tb__DOT__A = 0U;
    vlSelfRef.tb__DOT__B = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.sv", 
                                         45);
    VL_WRITEF_NX("A=%b B=%b Sum=%b Carry=%b\n",0,1,
                 vlSelfRef.tb__DOT__A,1,(IData)(vlSelfRef.tb__DOT__B),
                 1,vlSelfRef.tb__DOT__HA_Sum,1,(IData)(vlSelfRef.tb__DOT__HA_Carry));
    vlSelfRef.tb__DOT__A = 1U;
    vlSelfRef.tb__DOT__B = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.sv", 
                                         50);
    VL_WRITEF_NX("A=%b B=%b Sum=%b Carry=%b\n",0,1,
                 vlSelfRef.tb__DOT__A,1,(IData)(vlSelfRef.tb__DOT__B),
                 1,vlSelfRef.tb__DOT__HA_Sum,1,(IData)(vlSelfRef.tb__DOT__HA_Carry));
    vlSelfRef.tb__DOT__A = 1U;
    vlSelfRef.tb__DOT__B = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.sv", 
                                         55);
    VL_WRITEF_NX("A=%b B=%b Sum=%b Carry=%b\n\nFULL ADDER\n",0,
                 1,vlSelfRef.tb__DOT__A,1,(IData)(vlSelfRef.tb__DOT__B),
                 1,vlSelfRef.tb__DOT__HA_Sum,1,(IData)(vlSelfRef.tb__DOT__HA_Carry));
    vlSelfRef.tb__DOT__A = 0U;
    vlSelfRef.tb__DOT__B = 0U;
    vlSelfRef.tb__DOT__Cin = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.sv", 
                                         67);
    VL_WRITEF_NX("A=%b B=%b Cin=%b Sum=%b Cout=%b\n",0,
                 1,vlSelfRef.tb__DOT__A,1,(IData)(vlSelfRef.tb__DOT__B),
                 1,vlSelfRef.tb__DOT__Cin,1,(IData)(vlSelfRef.tb__DOT__FA_Sum),
                 1,vlSelfRef.tb__DOT__FA_Cout);
    vlSelfRef.tb__DOT__A = 0U;
    vlSelfRef.tb__DOT__B = 0U;
    vlSelfRef.tb__DOT__Cin = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.sv", 
                                         72);
    VL_WRITEF_NX("A=%b B=%b Cin=%b Sum=%b Cout=%b\n",0,
                 1,vlSelfRef.tb__DOT__A,1,(IData)(vlSelfRef.tb__DOT__B),
                 1,vlSelfRef.tb__DOT__Cin,1,(IData)(vlSelfRef.tb__DOT__FA_Sum),
                 1,vlSelfRef.tb__DOT__FA_Cout);
    vlSelfRef.tb__DOT__A = 0U;
    vlSelfRef.tb__DOT__B = 1U;
    vlSelfRef.tb__DOT__Cin = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.sv", 
                                         77);
    VL_WRITEF_NX("A=%b B=%b Cin=%b Sum=%b Cout=%b\n",0,
                 1,vlSelfRef.tb__DOT__A,1,(IData)(vlSelfRef.tb__DOT__B),
                 1,vlSelfRef.tb__DOT__Cin,1,(IData)(vlSelfRef.tb__DOT__FA_Sum),
                 1,vlSelfRef.tb__DOT__FA_Cout);
    vlSelfRef.tb__DOT__A = 0U;
    vlSelfRef.tb__DOT__B = 1U;
    vlSelfRef.tb__DOT__Cin = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.sv", 
                                         82);
    VL_WRITEF_NX("A=%b B=%b Cin=%b Sum=%b Cout=%b\n",0,
                 1,vlSelfRef.tb__DOT__A,1,(IData)(vlSelfRef.tb__DOT__B),
                 1,vlSelfRef.tb__DOT__Cin,1,(IData)(vlSelfRef.tb__DOT__FA_Sum),
                 1,vlSelfRef.tb__DOT__FA_Cout);
    vlSelfRef.tb__DOT__A = 1U;
    vlSelfRef.tb__DOT__B = 0U;
    vlSelfRef.tb__DOT__Cin = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.sv", 
                                         87);
    VL_WRITEF_NX("A=%b B=%b Cin=%b Sum=%b Cout=%b\n",0,
                 1,vlSelfRef.tb__DOT__A,1,(IData)(vlSelfRef.tb__DOT__B),
                 1,vlSelfRef.tb__DOT__Cin,1,(IData)(vlSelfRef.tb__DOT__FA_Sum),
                 1,vlSelfRef.tb__DOT__FA_Cout);
    vlSelfRef.tb__DOT__A = 1U;
    vlSelfRef.tb__DOT__B = 0U;
    vlSelfRef.tb__DOT__Cin = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.sv", 
                                         92);
    VL_WRITEF_NX("A=%b B=%b Cin=%b Sum=%b Cout=%b\n",0,
                 1,vlSelfRef.tb__DOT__A,1,(IData)(vlSelfRef.tb__DOT__B),
                 1,vlSelfRef.tb__DOT__Cin,1,(IData)(vlSelfRef.tb__DOT__FA_Sum),
                 1,vlSelfRef.tb__DOT__FA_Cout);
    vlSelfRef.tb__DOT__A = 1U;
    vlSelfRef.tb__DOT__B = 1U;
    vlSelfRef.tb__DOT__Cin = 0U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.sv", 
                                         97);
    VL_WRITEF_NX("A=%b B=%b Cin=%b Sum=%b Cout=%b\n",0,
                 1,vlSelfRef.tb__DOT__A,1,(IData)(vlSelfRef.tb__DOT__B),
                 1,vlSelfRef.tb__DOT__Cin,1,(IData)(vlSelfRef.tb__DOT__FA_Sum),
                 1,vlSelfRef.tb__DOT__FA_Cout);
    vlSelfRef.tb__DOT__A = 1U;
    vlSelfRef.tb__DOT__B = 1U;
    vlSelfRef.tb__DOT__Cin = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb.sv", 
                                         102);
    VL_WRITEF_NX("A=%b B=%b Cin=%b Sum=%b Cout=%b\n",0,
                 1,vlSelfRef.tb__DOT__A,1,(IData)(vlSelfRef.tb__DOT__B),
                 1,vlSelfRef.tb__DOT__Cin,1,(IData)(vlSelfRef.tb__DOT__FA_Sum),
                 1,vlSelfRef.tb__DOT__FA_Cout);
    VL_FINISH_MT("tb.sv", 106, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

void Vtb___024root___eval_triggers_vec__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers_vec__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__VdlySched.awaitingCurrentTime()));
}

bool Vtb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_anySet__act\n"); );
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

void Vtb___024root___act_sequent__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___act_sequent__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__HA_Sum = ((IData)(vlSelfRef.tb__DOT__A) 
                                 ^ (IData)(vlSelfRef.tb__DOT__B));
    vlSelfRef.tb__DOT__HA_Carry = ((IData)(vlSelfRef.tb__DOT__A) 
                                   & (IData)(vlSelfRef.tb__DOT__B));
    vlSelfRef.tb__DOT__FA_Sum = ((IData)(vlSelfRef.tb__DOT__A) 
                                 ^ ((IData)(vlSelfRef.tb__DOT__B) 
                                    ^ (IData)(vlSelfRef.tb__DOT__Cin)));
    vlSelfRef.tb__DOT__FA_Cout = (((IData)(vlSelfRef.tb__DOT__A) 
                                   & (IData)(vlSelfRef.tb__DOT__B)) 
                                  | ((IData)(vlSelfRef.tb__DOT__Cin) 
                                     & ((IData)(vlSelfRef.tb__DOT__A) 
                                        | (IData)(vlSelfRef.tb__DOT__B))));
}

void Vtb___024root___eval_act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb___024root___eval_nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vtb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vtb___024root___timing_resume(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___timing_resume\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb___024root___eval_phase__act(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__act\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb___024root___eval_triggers_vec__act(vlSelf);
    Vtb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb___024root___timing_resume(vlSelf);
        Vtb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb___024root___eval_phase__inact(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__inact\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtb___024root___eval_phase__nba(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_phase__nba\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtb___024root___eval_nba(vlSelf);
        Vtb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtb___024root___eval(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 100 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vtb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 100 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vtb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vtb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_debug_assertions\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
