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
typedef  int u8 ;
struct ieee80211_device {int basic_rate; scalar_t__ mode; TYPE_1__* pHTInfo; } ;
struct TYPE_2__ {int IOTAction; int /*<<< orphan*/  bCurSuppCCK; } ;
typedef  TYPE_1__* PRT_HIGH_THROUGHPUT ;

/* Variables and functions */
 int HT_IOT_ACT_MGNT_USE_CCK_6M ; 
 scalar_t__ IEEE_A ; 
 scalar_t__ IEEE_N_24G ; 
 scalar_t__ IEEE_N_5G ; 

__attribute__((used)) static u8 MgntQuery_MgntFrameTxRate(struct ieee80211_device *ieee)
{
	PRT_HIGH_THROUGHPUT      pHTInfo = ieee->pHTInfo;
	u8 rate;

	/* 2008/01/25 MH For broadcom, MGNT frame set as OFDM 6M. */
	if (pHTInfo->IOTAction & HT_IOT_ACT_MGNT_USE_CCK_6M)
		rate = 0x0c;
	else
		rate = ieee->basic_rate & 0x7f;

	if (rate == 0) {
		/* 2005.01.26, by rcnjko. */
		if (ieee->mode == IEEE_A ||
		    ieee->mode == IEEE_N_5G ||
		    (ieee->mode == IEEE_N_24G && !pHTInfo->bCurSuppCCK))
			rate = 0x0c;
		else
			rate = 0x02;
	}

	/*
	// Data rate of ProbeReq is already decided. Annie, 2005-03-31
	if( pMgntInfo->bScanInProgress || (pMgntInfo->bDualModeScanStep!=0) ) {
	if(pMgntInfo->dot11CurrentWirelessMode==WIRELESS_MODE_A)
	rate = 0x0c;
	else
	rate = 0x02;
	}
	 */
	return rate;
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
          struct ieee80211_device * ieee = (struct ieee80211_device *) malloc(_len_ieee0*sizeof(struct ieee80211_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
            ieee[_i0].basic_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ieee__i0__pHTInfo0 = 1;
          ieee[_i0].pHTInfo = (struct TYPE_2__ *) malloc(_len_ieee__i0__pHTInfo0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ieee__i0__pHTInfo0; _j0++) {
            ieee[_i0].pHTInfo->IOTAction = ((-2 * (next_i()%2)) + 1) * next_i();
        ieee[_i0].pHTInfo->bCurSuppCCK = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = MgntQuery_MgntFrameTxRate(ieee);
          printf("%d\n", benchRet); 
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
