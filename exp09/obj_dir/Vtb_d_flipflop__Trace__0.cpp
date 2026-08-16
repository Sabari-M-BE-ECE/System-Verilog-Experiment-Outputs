// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_d_flipflop__Syms.h"


void Vtb_d_flipflop___024root__trace_chg_0_sub_0(Vtb_d_flipflop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_d_flipflop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root__trace_chg_0\n"); );
    // Body
    Vtb_d_flipflop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_d_flipflop___024root*>(voidSelf);
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_d_flipflop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_d_flipflop___024root__trace_chg_0_sub_0(Vtb_d_flipflop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root__trace_chg_0_sub_0\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    bufp->chgBit(oldp+0,(vlSymsp->TOP__tb_d_flipflop.__PVT__clk));
    bufp->chgBit(oldp+1,(vlSymsp->TOP__tb_d_flipflop.__PVT__reset));
    bufp->chgBit(oldp+2,(vlSymsp->TOP__tb_d_flipflop.__PVT__d));
    bufp->chgBit(oldp+3,(vlSymsp->TOP__tb_d_flipflop.__PVT__q));
}

void Vtb_d_flipflop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root__trace_cleanup\n"); );
    // Locals
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    Vtb_d_flipflop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_d_flipflop___024root*>(voidSelf);
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
