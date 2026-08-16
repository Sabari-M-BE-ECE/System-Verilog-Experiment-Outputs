// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_mux4to1__Syms.h"


VL_ATTR_COLD void Vtb_mux4to1___024root__trace_init_sub__TOP__tb_mux4to1__0(Vtb_mux4to1___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_mux4to1___024root__trace_init_sub__TOP__0(Vtb_mux4to1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root__trace_init_sub__TOP__0\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("tb_mux4to1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_mux4to1___024root__trace_init_sub__TOP__tb_mux4to1__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_mux4to1___024root__trace_init_sub__TOP__tb_mux4to1__0(Vtb_mux4to1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root__trace_init_sub__TOP__tb_mux4to1__0\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+0,0,"i0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"s0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+0,0,"i0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"i1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"i2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"i3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"s1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"s0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_mux4to1___024root__trace_init_top(Vtb_mux4to1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root__trace_init_top\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_mux4to1___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_mux4to1___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_mux4to1___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_mux4to1___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_mux4to1___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_mux4to1___024root__trace_register(Vtb_mux4to1___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root__trace_register\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_mux4to1___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_mux4to1___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_mux4to1___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_mux4to1___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_mux4to1___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root__trace_const_0\n"); );
    // Body
    Vtb_mux4to1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mux4to1___024root*>(voidSelf);
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vtb_mux4to1___024root__trace_full_0_sub_0(Vtb_mux4to1___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_mux4to1___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root__trace_full_0\n"); );
    // Body
    Vtb_mux4to1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_mux4to1___024root*>(voidSelf);
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_mux4to1___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_mux4to1___024root__trace_full_0_sub_0(Vtb_mux4to1___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mux4to1___024root__trace_full_0_sub_0\n"); );
    Vtb_mux4to1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+0,(vlSymsp->TOP__tb_mux4to1.__PVT__i0));
    bufp->fullBit(oldp+1,(vlSymsp->TOP__tb_mux4to1.__PVT__i1));
    bufp->fullBit(oldp+2,(vlSymsp->TOP__tb_mux4to1.__PVT__i2));
    bufp->fullBit(oldp+3,(vlSymsp->TOP__tb_mux4to1.__PVT__i3));
    bufp->fullBit(oldp+4,(vlSymsp->TOP__tb_mux4to1.__PVT__s1));
    bufp->fullBit(oldp+5,(vlSymsp->TOP__tb_mux4to1.__PVT__s0));
    bufp->fullBit(oldp+6,(((IData)(vlSymsp->TOP__tb_mux4to1.__PVT__s1)
                            ? ((IData)(vlSymsp->TOP__tb_mux4to1.__PVT__s0)
                                ? (IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i3)
                                : (IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i2))
                            : ((IData)(vlSymsp->TOP__tb_mux4to1.__PVT__s0)
                                ? (IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i1)
                                : (IData)(vlSymsp->TOP__tb_mux4to1.__PVT__i0)))));
    bufp->fullBit(oldp+7,(vlSymsp->TOP__tb_mux4to1.__PVT__clk));
}
