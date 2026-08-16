// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_d_flipflop__Syms.h"


VL_ATTR_COLD void Vtb_d_flipflop___024root__trace_init_sub__TOP__tb_d_flipflop__0(Vtb_d_flipflop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_d_flipflop___024root__trace_init_sub__TOP__0(Vtb_d_flipflop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root__trace_init_sub__TOP__0\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("tb_d_flipflop", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_d_flipflop___024root__trace_init_sub__TOP__tb_d_flipflop__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_d_flipflop___024root__trace_init_sub__TOP__tb_d_flipflop__0(Vtb_d_flipflop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root__trace_init_sub__TOP__tb_d_flipflop__0\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+0,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+0,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_d_flipflop___024root__trace_init_top(Vtb_d_flipflop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root__trace_init_top\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_d_flipflop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_d_flipflop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_d_flipflop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_d_flipflop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_d_flipflop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_d_flipflop___024root__trace_register(Vtb_d_flipflop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root__trace_register\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_d_flipflop___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_d_flipflop___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_d_flipflop___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_d_flipflop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_d_flipflop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root__trace_const_0\n"); );
    // Body
    Vtb_d_flipflop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_d_flipflop___024root*>(voidSelf);
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_d_flipflop___024root__trace_full_0_sub_0(Vtb_d_flipflop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_d_flipflop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root__trace_full_0\n"); );
    // Body
    Vtb_d_flipflop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_d_flipflop___024root*>(voidSelf);
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_d_flipflop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_d_flipflop___024root__trace_full_0_sub_0(Vtb_d_flipflop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_d_flipflop___024root__trace_full_0_sub_0\n"); );
    Vtb_d_flipflop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSymsp->TOP__tb_d_flipflop.__PVT__clk));
    bufp->fullBit(oldp+1,(vlSymsp->TOP__tb_d_flipflop.__PVT__reset));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__tb_d_flipflop.__PVT__d));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__tb_d_flipflop.__PVT__q));
}
