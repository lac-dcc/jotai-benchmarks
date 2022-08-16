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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  GetDeltaSwingTable; int /*<<< orphan*/  PHY_LCCalibrate; int /*<<< orphan*/  DoIQK; int /*<<< orphan*/  ODM_TxPwrTrackSetPwr; int /*<<< orphan*/  ThermalRegAddr; int /*<<< orphan*/  RfPathCount; int /*<<< orphan*/  AverageThermalNum; int /*<<< orphan*/  Threshold_IQK; int /*<<< orphan*/  SwingTableSize_OFDM; int /*<<< orphan*/  SwingTableSize_CCK; } ;
typedef  TYPE_1__* PTXPWRTRACK_CFG ;

/* Variables and functions */
 int /*<<< orphan*/  AVG_THERMAL_NUM_8723B ; 
 int /*<<< orphan*/  CCK_TABLE_SIZE ; 
 int /*<<< orphan*/  DoIQK_8723B ; 
 int /*<<< orphan*/  GetDeltaSwingTable_8723B ; 
 int /*<<< orphan*/  IQK_THRESHOLD ; 
 int /*<<< orphan*/  MAX_PATH_NUM_8723B ; 
 int /*<<< orphan*/  ODM_TxPwrTrackSetPwr_8723B ; 
 int /*<<< orphan*/  OFDM_TABLE_SIZE ; 
 int /*<<< orphan*/  PHY_LCCalibrate_8723B ; 
 int /*<<< orphan*/  RF_T_METER_8723B ; 

void ConfigureTxpowerTrack_8723B(PTXPWRTRACK_CFG pConfig)
{
	pConfig->SwingTableSize_CCK = CCK_TABLE_SIZE;
	pConfig->SwingTableSize_OFDM = OFDM_TABLE_SIZE;
	pConfig->Threshold_IQK = IQK_THRESHOLD;
	pConfig->AverageThermalNum = AVG_THERMAL_NUM_8723B;
	pConfig->RfPathCount = MAX_PATH_NUM_8723B;
	pConfig->ThermalRegAddr = RF_T_METER_8723B;

	pConfig->ODM_TxPwrTrackSetPwr = ODM_TxPwrTrackSetPwr_8723B;
	pConfig->DoIQK = DoIQK_8723B;
	pConfig->PHY_LCCalibrate = PHY_LCCalibrate_8723B;
	pConfig->GetDeltaSwingTable = GetDeltaSwingTable_8723B;
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
          int _len_pConfig0 = 1;
          struct TYPE_3__ * pConfig = (struct TYPE_3__ *) malloc(_len_pConfig0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pConfig0; _i0++) {
            pConfig[_i0].GetDeltaSwingTable = ((-2 * (next_i()%2)) + 1) * next_i();
        pConfig[_i0].PHY_LCCalibrate = ((-2 * (next_i()%2)) + 1) * next_i();
        pConfig[_i0].DoIQK = ((-2 * (next_i()%2)) + 1) * next_i();
        pConfig[_i0].ODM_TxPwrTrackSetPwr = ((-2 * (next_i()%2)) + 1) * next_i();
        pConfig[_i0].ThermalRegAddr = ((-2 * (next_i()%2)) + 1) * next_i();
        pConfig[_i0].RfPathCount = ((-2 * (next_i()%2)) + 1) * next_i();
        pConfig[_i0].AverageThermalNum = ((-2 * (next_i()%2)) + 1) * next_i();
        pConfig[_i0].Threshold_IQK = ((-2 * (next_i()%2)) + 1) * next_i();
        pConfig[_i0].SwingTableSize_OFDM = ((-2 * (next_i()%2)) + 1) * next_i();
        pConfig[_i0].SwingTableSize_CCK = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ConfigureTxpowerTrack_8723B(pConfig);
          free(pConfig);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
