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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  bforced_tx20Mhz; } ;
struct ieee80211_device {TYPE_1__ bandwidth_auto_switch; TYPE_2__* pHTInfo; } ;
struct cb_desc {int bPacketBW; int data_rate; scalar_t__ bBroadcast; scalar_t__ bMulticast; } ;
struct TYPE_4__ {scalar_t__ bCurTxBW40MHz; scalar_t__ bCurBW40MHz; int /*<<< orphan*/  bEnableHT; int /*<<< orphan*/  bCurrentHTSupport; } ;
typedef  TYPE_2__* PRT_HIGH_THROUGHPUT ;

/* Variables and functions */

__attribute__((used)) static void ieee80211_query_BandwidthMode(struct ieee80211_device *ieee,
					  struct cb_desc *tcb_desc)
{
	PRT_HIGH_THROUGHPUT	pHTInfo = ieee->pHTInfo;

	tcb_desc->bPacketBW = false;

	if(!pHTInfo->bCurrentHTSupport||!pHTInfo->bEnableHT)
		return;

	if(tcb_desc->bMulticast || tcb_desc->bBroadcast)
		return;

	if((tcb_desc->data_rate & 0x80)==0) // If using legacy rate, it shall use 20MHz channel.
		return;
	//BandWidthAutoSwitch is for auto switch to 20 or 40 in long distance
	if(pHTInfo->bCurBW40MHz && pHTInfo->bCurTxBW40MHz && !ieee->bandwidth_auto_switch.bforced_tx20Mhz)
		tcb_desc->bPacketBW = true;
	return;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_ieee0 = 65025;
          struct ieee80211_device * ieee = (struct ieee80211_device *) malloc(_len_ieee0*sizeof(struct ieee80211_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
              ieee[_i0].bandwidth_auto_switch.bforced_tx20Mhz = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ieee__i0__pHTInfo0 = 1;
          ieee[_i0].pHTInfo = (struct TYPE_4__ *) malloc(_len_ieee__i0__pHTInfo0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ieee__i0__pHTInfo0; _j0++) {
              ieee[_i0].pHTInfo->bCurTxBW40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
          ieee[_i0].pHTInfo->bCurBW40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
          ieee[_i0].pHTInfo->bEnableHT = ((-2 * (next_i()%2)) + 1) * next_i();
          ieee[_i0].pHTInfo->bCurrentHTSupport = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_tcb_desc0 = 65025;
          struct cb_desc * tcb_desc = (struct cb_desc *) malloc(_len_tcb_desc0*sizeof(struct cb_desc));
          for(int _i0 = 0; _i0 < _len_tcb_desc0; _i0++) {
              tcb_desc[_i0].bPacketBW = ((-2 * (next_i()%2)) + 1) * next_i();
          tcb_desc[_i0].data_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          tcb_desc[_i0].bBroadcast = ((-2 * (next_i()%2)) + 1) * next_i();
          tcb_desc[_i0].bMulticast = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ieee80211_query_BandwidthMode(ieee,tcb_desc);
          for(int _aux = 0; _aux < _len_ieee0; _aux++) {
          free(ieee[_aux].pHTInfo);
          }
          free(ieee);
          free(tcb_desc);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_ieee0 = 100;
          struct ieee80211_device * ieee = (struct ieee80211_device *) malloc(_len_ieee0*sizeof(struct ieee80211_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
              ieee[_i0].bandwidth_auto_switch.bforced_tx20Mhz = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ieee__i0__pHTInfo0 = 1;
          ieee[_i0].pHTInfo = (struct TYPE_4__ *) malloc(_len_ieee__i0__pHTInfo0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ieee__i0__pHTInfo0; _j0++) {
              ieee[_i0].pHTInfo->bCurTxBW40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
          ieee[_i0].pHTInfo->bCurBW40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
          ieee[_i0].pHTInfo->bEnableHT = ((-2 * (next_i()%2)) + 1) * next_i();
          ieee[_i0].pHTInfo->bCurrentHTSupport = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_tcb_desc0 = 100;
          struct cb_desc * tcb_desc = (struct cb_desc *) malloc(_len_tcb_desc0*sizeof(struct cb_desc));
          for(int _i0 = 0; _i0 < _len_tcb_desc0; _i0++) {
              tcb_desc[_i0].bPacketBW = ((-2 * (next_i()%2)) + 1) * next_i();
          tcb_desc[_i0].data_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          tcb_desc[_i0].bBroadcast = ((-2 * (next_i()%2)) + 1) * next_i();
          tcb_desc[_i0].bMulticast = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ieee80211_query_BandwidthMode(ieee,tcb_desc);
          for(int _aux = 0; _aux < _len_ieee0; _aux++) {
          free(ieee[_aux].pHTInfo);
          }
          free(ieee);
          free(tcb_desc);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 12
          // ------------------------------- 
          // static_instructions_O2 : 12
          // dynamic_instructions_O2 : 12
          // ------------------------------- 
          // static_instructions_O3 : 12
          // dynamic_instructions_O3 : 12
          // ------------------------------- 
          // static_instructions_Ofast : 12
          // dynamic_instructions_Ofast : 12
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 12
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_ieee0 = 1;
          struct ieee80211_device * ieee = (struct ieee80211_device *) malloc(_len_ieee0*sizeof(struct ieee80211_device));
          for(int _i0 = 0; _i0 < _len_ieee0; _i0++) {
              ieee[_i0].bandwidth_auto_switch.bforced_tx20Mhz = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ieee__i0__pHTInfo0 = 1;
          ieee[_i0].pHTInfo = (struct TYPE_4__ *) malloc(_len_ieee__i0__pHTInfo0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ieee__i0__pHTInfo0; _j0++) {
              ieee[_i0].pHTInfo->bCurTxBW40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
          ieee[_i0].pHTInfo->bCurBW40MHz = ((-2 * (next_i()%2)) + 1) * next_i();
          ieee[_i0].pHTInfo->bEnableHT = ((-2 * (next_i()%2)) + 1) * next_i();
          ieee[_i0].pHTInfo->bCurrentHTSupport = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int _len_tcb_desc0 = 1;
          struct cb_desc * tcb_desc = (struct cb_desc *) malloc(_len_tcb_desc0*sizeof(struct cb_desc));
          for(int _i0 = 0; _i0 < _len_tcb_desc0; _i0++) {
              tcb_desc[_i0].bPacketBW = ((-2 * (next_i()%2)) + 1) * next_i();
          tcb_desc[_i0].data_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          tcb_desc[_i0].bBroadcast = ((-2 * (next_i()%2)) + 1) * next_i();
          tcb_desc[_i0].bMulticast = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          ieee80211_query_BandwidthMode(ieee,tcb_desc);
          for(int _aux = 0; _aux < _len_ieee0; _aux++) {
          free(ieee[_aux].pHTInfo);
          }
          free(ieee);
          free(tcb_desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
