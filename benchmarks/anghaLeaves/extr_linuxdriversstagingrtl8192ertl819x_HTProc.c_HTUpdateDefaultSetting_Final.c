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

/* Type definitions */
struct rtllib_device {int bTxEnableFwCalcDur; scalar_t__ bTxUseDriverAssingedRate; scalar_t__ bTxDisableRateFallBack; struct rt_hi_throughput* pHTInfo; } ;
struct rt_hi_throughput {int bAcceptAddbaReq; int bRegShortGI20MHz; int bRegShortGI40MHz; int bRegBW40MHz; int bRegSuppCCK; unsigned long nAMSDU_MaxSize; int bAMPDUEnable; int AMPDU_Factor; int SelfMimoPs; int bRegRT2RTAggregation; int bRegRxReorderEnable; int RxReorderWinSize; int RxReorderPendingTime; scalar_t__ MPDU_Density; scalar_t__ bAMSDU_Support; } ;

/* Variables and functions */

void HTUpdateDefaultSetting(struct rtllib_device *ieee)
{
	struct rt_hi_throughput *pHTInfo = ieee->pHTInfo;

	pHTInfo->bAcceptAddbaReq = 1;

	pHTInfo->bRegShortGI20MHz = 1;
	pHTInfo->bRegShortGI40MHz = 1;

	pHTInfo->bRegBW40MHz = 1;

	if (pHTInfo->bRegBW40MHz)
		pHTInfo->bRegSuppCCK = 1;
	else
		pHTInfo->bRegSuppCCK = true;

	pHTInfo->nAMSDU_MaxSize = 7935UL;
	pHTInfo->bAMSDU_Support = 0;

	pHTInfo->bAMPDUEnable = 1;
	pHTInfo->AMPDU_Factor = 2;
	pHTInfo->MPDU_Density = 0;

	pHTInfo->SelfMimoPs = 3;
	if (pHTInfo->SelfMimoPs == 2)
		pHTInfo->SelfMimoPs = 3;
	ieee->bTxDisableRateFallBack = 0;
	ieee->bTxUseDriverAssingedRate = 0;

	ieee->bTxEnableFwCalcDur = 1;

	pHTInfo->bRegRT2RTAggregation = 1;

	pHTInfo->bRegRxReorderEnable = 1;
	pHTInfo->RxReorderWinSize = 64;
	pHTInfo->RxReorderPendingTime = 30;
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
          int _len_ieee0 = 1;
          struct rtllib_device * ieee = (struct rtllib_device *) malloc(_len_ieee0*sizeof(struct rtllib_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
            ieee[_i0].bTxEnableFwCalcDur = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].bTxUseDriverAssingedRate = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].bTxDisableRateFallBack = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ieee__i0__pHTInfo0 = 1;
          ieee[_i0].pHTInfo = (struct rt_hi_throughput *) malloc(_len_ieee__i0__pHTInfo0*sizeof(struct rt_hi_throughput));
          for(int _j0 = 0; _j0 < _len_ieee__i0__pHTInfo0; _j0++) {
            ieee[_i0].pHTInfo->bAcceptAddbaReq = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bRegShortGI20MHz = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bRegShortGI40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bRegBW40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bRegSuppCCK = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->nAMSDU_MaxSize = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bAMPDUEnable = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->AMPDU_Factor = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->SelfMimoPs = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bRegRT2RTAggregation = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bRegRxReorderEnable = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->RxReorderWinSize = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->RxReorderPendingTime = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->MPDU_Density = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bAMSDU_Support = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          HTUpdateDefaultSetting(ieee);
          for(int _aux = 0; _aux < _len_ieee0; _aux++) {
          free(ieee[_aux].pHTInfo);
          }
          free(ieee);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
