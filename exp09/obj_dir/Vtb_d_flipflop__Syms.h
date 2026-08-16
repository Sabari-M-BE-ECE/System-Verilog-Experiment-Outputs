// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_D_FLIPFLOP__SYMS_H_
#define VERILATED_VTB_D_FLIPFLOP__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vtb_d_flipflop.h"

// INCLUDE MODULE CLASSES
#include "Vtb_d_flipflop___024root.h"
#include "Vtb_d_flipflop_tb_d_flipflop.h"
#include "Vtb_d_flipflop___024unit.h"
#include "Vtb_d_flipflop_std.h"
#include "Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction__Vclpkg.h"
#include "Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg.h"
#include "Vtb_d_flipflop_tb_d_flipflop__03a__03adriver__Vclpkg.h"
#include "Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor__Vclpkg.h"
#include "Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard__Vclpkg.h"
#include "Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment__Vclpkg.h"
#include "Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg.h"
#include "Vtb_d_flipflop_std__03a__03aprocess__Vclpkg.h"
#include "Vtb_d_flipflop_std__03a__03amailbox__Tz1__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_d_flipflop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_d_flipflop* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_d_flipflop___024root       TOP;
    Vtb_d_flipflop_std             TOP__std;
    Vtb_d_flipflop_tb_d_flipflop   TOP__tb_d_flipflop;
    Vtb_d_flipflop_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vtb_d_flipflop_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vtb_d_flipflop_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;
    Vtb_d_flipflop_tb_d_flipflop__03a__03adriver__Vclpkg TOP__tb_d_flipflop__03a__03adriver__Vclpkg;
    Vtb_d_flipflop_tb_d_flipflop__03a__03aenvironment__Vclpkg TOP__tb_d_flipflop__03a__03aenvironment__Vclpkg;
    Vtb_d_flipflop_tb_d_flipflop__03a__03agenerator__Vclpkg TOP__tb_d_flipflop__03a__03agenerator__Vclpkg;
    Vtb_d_flipflop_tb_d_flipflop__03a__03amonitor__Vclpkg TOP__tb_d_flipflop__03a__03amonitor__Vclpkg;
    Vtb_d_flipflop_tb_d_flipflop__03a__03ascoreboard__Vclpkg TOP__tb_d_flipflop__03a__03ascoreboard__Vclpkg;
    Vtb_d_flipflop_tb_d_flipflop__03a__03atransaction__Vclpkg TOP__tb_d_flipflop__03a__03atransaction__Vclpkg;

    // CONSTRUCTORS
    Vtb_d_flipflop__Syms(VerilatedContext* contextp, const char* namep, Vtb_d_flipflop* modelp);
    ~Vtb_d_flipflop__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
