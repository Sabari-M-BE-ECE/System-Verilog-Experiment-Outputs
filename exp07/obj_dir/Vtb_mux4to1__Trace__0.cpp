// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_mux4to1__Syms.h"


void Vtb_mux4to1___024root__trace_chg_0_sub_0(Vtb_mux4to1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_mux4to1___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root__trace_chg_0\n"); );
    // Body
    Vtb_mux4to1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mux4to1___024root*>(voidSelf);
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_mux4to1___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_mux4to1___024root__trace_chg_0_sub_0(Vtb_mux4to1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root__trace_chg_0_sub_0\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[3U])))) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__tb_mux4to1.__PVT__i0));
        bufp->chgBit(oldp+1,(vlSymsp->TOP__tb_mux4to1.__PVT__i1));
        bufp->chgBit(oldp+2,(vlSymsp->TOP__tb_mux4to1.__PVT__i2));
        bufp->chgBit(oldp+3,(vlSymsp->TOP__tb_mux4to1.__PVT__i3));
        bufp->chgBit(oldp+4,(vlSymsp->TOP__tb_mux4to1.__PVT__s1));
        bufp->chgBit(oldp+5,(vlSymsp->TOP__tb_mux4to1.__PVT__s0));
        bufp->chgBit(oldp+6,(((IData)(vlSymsp->TOP__tb_mux4to1.__PVT__s1)
                               ? ((IData)(vlSymsp->TOP__tb_mux4to1.__PVT__s0)
                                   ? (IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i3)
                                   : (IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i2))
                               : ((IData)(vlSymsp->TOP__tb_mux4to1.__PVT__s0)
                                   ? (IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i1)
                                   : (IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i0)))));
    }
    bufp->chgBit(oldp+7,(vlSymsp->TOP__tb_mux4to1.__PVT__clk));
}

void Vtb_mux4to1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root__trace_cleanup\n"); );
    // Body
    Vtb_mux4to1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mux4to1___024root*>(voidSelf);
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
