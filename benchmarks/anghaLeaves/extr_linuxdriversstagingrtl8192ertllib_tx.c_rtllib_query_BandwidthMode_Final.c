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
struct TYPE_2__ {int /*<<< orphan*/  bforced_tx20Mhz; } ;
struct rtllib_device {TYPE_1__ bandwidth_auto_switch; struct rt_hi_throughput* pHTInfo; } ;
struct rt_hi_throughput {scalar_t__ bCurTxBW40MHz; scalar_t__ bCurBW40MHz; int /*<<< orphan*/  bEnableHT; int /*<<< orphan*/  bCurrentHTSupport; } ;
struct cb_desc {int bPacketBW; int data_rate; scalar_t__ bBroadcast; scalar_t__ bMulticast; } ;

/* Variables and functions */

__attribute__((used)) static void rtllib_query_BandwidthMode(struct rtllib_device *ieee,
				       struct cb_desc *tcb_desc)
{
	struct rt_hi_throughput *pHTInfo = ieee->pHTInfo;

	tcb_desc->bPacketBW = false;

	if (!pHTInfo->bCurrentHTSupport || !pHTInfo->bEnableHT)
		return;

	if (tcb_desc->bMulticast || tcb_desc->bBroadcast)
		return;

	if ((tcb_desc->data_rate & 0x80) == 0)
		return;
	if (pHTInfo->bCurBW40MHz && pHTInfo->bCurTxBW40MHz &&
	    !ieee->bandwidth_auto_switch.bforced_tx20Mhz)
		tcb_desc->bPacketBW = true;
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
            ieee[_i0].bandwidth_auto_switch.bforced_tx20Mhz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ieee__i0__pHTInfo0 = 1;
          ieee[_i0].pHTInfo = (struct rt_hi_throughput *) malloc(_len_ieee__i0__pHTInfo0*sizeof(struct rt_hi_throughput));
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
          rtllib_query_BandwidthMode(ieee,tcb_desc);
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
