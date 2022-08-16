// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct bb_reg_def {int /*<<< orphan*/  rfLSSIReadBackPi; int /*<<< orphan*/  rfLSSIReadBack; int /*<<< orphan*/  rfTxAFE; int /*<<< orphan*/  rfTxIQImbalance; int /*<<< orphan*/  rfRxAFE; int /*<<< orphan*/  rfRxIQImbalance; int /*<<< orphan*/  rfAGCControl2; int /*<<< orphan*/  rfAGCControl1; void* rfSwitchControl; int /*<<< orphan*/  rfHSSIPara2; int /*<<< orphan*/  rfHSSIPara1; void* rfTxGainStage; void* rfLSSI_Select; int /*<<< orphan*/  rf3wireOffset; void* rfintfe; void* rfintfo; void* rfintfi; void* rfintfs; } ;
struct adapter {TYPE_1__* HalData; } ;
struct TYPE_2__ {struct bb_reg_def* PHYRegDef; } ;

/* Variables and functions */
 size_t RF_PATH_A ; 
 size_t RF_PATH_B ; 
 int /*<<< orphan*/  TransceiverA_HSPI_Readback ; 
 int /*<<< orphan*/  TransceiverB_HSPI_Readback ; 
 void* rFPGA0_TxGainStage ; 
 void* rFPGA0_XAB_RFInterfaceRB ; 
 void* rFPGA0_XAB_RFInterfaceSW ; 
 void* rFPGA0_XAB_RFParameter ; 
 void* rFPGA0_XAB_SwitchControl ; 
 int /*<<< orphan*/  rFPGA0_XA_HSSIParameter1 ; 
 int /*<<< orphan*/  rFPGA0_XA_HSSIParameter2 ; 
 int /*<<< orphan*/  rFPGA0_XA_LSSIParameter ; 
 int /*<<< orphan*/  rFPGA0_XA_LSSIReadBack ; 
 void* rFPGA0_XA_RFInterfaceOE ; 
 int /*<<< orphan*/  rFPGA0_XB_HSSIParameter1 ; 
 int /*<<< orphan*/  rFPGA0_XB_HSSIParameter2 ; 
 int /*<<< orphan*/  rFPGA0_XB_LSSIParameter ; 
 int /*<<< orphan*/  rFPGA0_XB_LSSIReadBack ; 
 void* rFPGA0_XB_RFInterfaceOE ; 
 int /*<<< orphan*/  rOFDM0_XAAGCCore1 ; 
 int /*<<< orphan*/  rOFDM0_XAAGCCore2 ; 
 int /*<<< orphan*/  rOFDM0_XARxAFE ; 
 int /*<<< orphan*/  rOFDM0_XARxIQImbalance ; 
 int /*<<< orphan*/  rOFDM0_XATxAFE ; 
 int /*<<< orphan*/  rOFDM0_XATxIQImbalance ; 
 int /*<<< orphan*/  rOFDM0_XBAGCCore1 ; 
 int /*<<< orphan*/  rOFDM0_XBAGCCore2 ; 
 int /*<<< orphan*/  rOFDM0_XBRxAFE ; 
 int /*<<< orphan*/  rOFDM0_XBRxIQImbalance ; 
 int /*<<< orphan*/  rOFDM0_XBTxAFE ; 
 int /*<<< orphan*/  rOFDM0_XBTxIQImbalance ; 

__attribute__((used)) static void rtl88e_phy_init_bb_rf_register_definition(struct adapter *adapter)
{
	struct bb_reg_def               *reg[4];

	reg[RF_PATH_A] = &adapter->HalData->PHYRegDef[RF_PATH_A];
	reg[RF_PATH_B] = &adapter->HalData->PHYRegDef[RF_PATH_B];

	reg[RF_PATH_A]->rfintfs = rFPGA0_XAB_RFInterfaceSW;
	reg[RF_PATH_B]->rfintfs = rFPGA0_XAB_RFInterfaceSW;

	reg[RF_PATH_A]->rfintfi = rFPGA0_XAB_RFInterfaceRB;
	reg[RF_PATH_B]->rfintfi = rFPGA0_XAB_RFInterfaceRB;

	reg[RF_PATH_A]->rfintfo = rFPGA0_XA_RFInterfaceOE;
	reg[RF_PATH_B]->rfintfo = rFPGA0_XB_RFInterfaceOE;

	reg[RF_PATH_A]->rfintfe = rFPGA0_XA_RFInterfaceOE;
	reg[RF_PATH_B]->rfintfe = rFPGA0_XB_RFInterfaceOE;

	reg[RF_PATH_A]->rf3wireOffset = rFPGA0_XA_LSSIParameter;
	reg[RF_PATH_B]->rf3wireOffset = rFPGA0_XB_LSSIParameter;

	reg[RF_PATH_A]->rfLSSI_Select = rFPGA0_XAB_RFParameter;
	reg[RF_PATH_B]->rfLSSI_Select = rFPGA0_XAB_RFParameter;

	reg[RF_PATH_A]->rfTxGainStage = rFPGA0_TxGainStage;
	reg[RF_PATH_B]->rfTxGainStage = rFPGA0_TxGainStage;

	reg[RF_PATH_A]->rfHSSIPara1 = rFPGA0_XA_HSSIParameter1;
	reg[RF_PATH_B]->rfHSSIPara1 = rFPGA0_XB_HSSIParameter1;

	reg[RF_PATH_A]->rfHSSIPara2 = rFPGA0_XA_HSSIParameter2;
	reg[RF_PATH_B]->rfHSSIPara2 = rFPGA0_XB_HSSIParameter2;

	reg[RF_PATH_A]->rfSwitchControl = rFPGA0_XAB_SwitchControl;
	reg[RF_PATH_B]->rfSwitchControl = rFPGA0_XAB_SwitchControl;

	reg[RF_PATH_A]->rfAGCControl1 = rOFDM0_XAAGCCore1;
	reg[RF_PATH_B]->rfAGCControl1 = rOFDM0_XBAGCCore1;

	reg[RF_PATH_A]->rfAGCControl2 = rOFDM0_XAAGCCore2;
	reg[RF_PATH_B]->rfAGCControl2 = rOFDM0_XBAGCCore2;

	reg[RF_PATH_A]->rfRxIQImbalance = rOFDM0_XARxIQImbalance;
	reg[RF_PATH_B]->rfRxIQImbalance = rOFDM0_XBRxIQImbalance;

	reg[RF_PATH_A]->rfRxAFE = rOFDM0_XARxAFE;
	reg[RF_PATH_B]->rfRxAFE = rOFDM0_XBRxAFE;

	reg[RF_PATH_A]->rfTxIQImbalance = rOFDM0_XATxIQImbalance;
	reg[RF_PATH_B]->rfTxIQImbalance = rOFDM0_XBTxIQImbalance;

	reg[RF_PATH_A]->rfTxAFE = rOFDM0_XATxAFE;
	reg[RF_PATH_B]->rfTxAFE = rOFDM0_XBTxAFE;

	reg[RF_PATH_A]->rfLSSIReadBack = rFPGA0_XA_LSSIReadBack;
	reg[RF_PATH_B]->rfLSSIReadBack = rFPGA0_XB_LSSIReadBack;

	reg[RF_PATH_A]->rfLSSIReadBackPi = TransceiverA_HSPI_Readback;
	reg[RF_PATH_B]->rfLSSIReadBackPi = TransceiverB_HSPI_Readback;
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int _len_adapter0 = 1;
          struct adapter * adapter = (struct adapter *) malloc(_len_adapter0*sizeof(struct adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__HalData0 = 1;
          adapter[_i0].HalData = (struct TYPE_2__ *) malloc(_len_adapter__i0__HalData0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__HalData0; _j0++) {
              int _len_adapter__i0__HalData_PHYRegDef0 = 1;
          adapter[_i0].HalData->PHYRegDef = (struct bb_reg_def *) malloc(_len_adapter__i0__HalData_PHYRegDef0*sizeof(struct bb_reg_def));
          for(int _j0 = 0; _j0 < _len_adapter__i0__HalData_PHYRegDef0; _j0++) {
            adapter[_i0].HalData->PHYRegDef->rfLSSIReadBackPi = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].HalData->PHYRegDef->rfLSSIReadBack = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].HalData->PHYRegDef->rfTxAFE = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].HalData->PHYRegDef->rfTxIQImbalance = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].HalData->PHYRegDef->rfRxAFE = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].HalData->PHYRegDef->rfRxIQImbalance = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].HalData->PHYRegDef->rfAGCControl2 = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].HalData->PHYRegDef->rfAGCControl1 = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].HalData->PHYRegDef->rfHSSIPara2 = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].HalData->PHYRegDef->rfHSSIPara1 = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].HalData->PHYRegDef->rf3wireOffset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rtl88e_phy_init_bb_rf_register_definition(adapter);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].HalData);
          }
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
