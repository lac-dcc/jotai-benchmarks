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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u64 ;
struct TYPE_3__ {int /*<<< orphan*/  psxmitwait; int /*<<< orphan*/  psrcvpkts; int /*<<< orphan*/  psxmitpkts; int /*<<< orphan*/  psrcvdata; int /*<<< orphan*/  psxmitdata; } ;
struct TYPE_4__ {TYPE_1__ counter_cache; } ;
struct qib_pportdata {TYPE_2__ cong_stats; } ;
typedef  int __be16 ;

/* Variables and functions */
#define  IB_PMA_PORT_RCV_DATA 132 
#define  IB_PMA_PORT_RCV_PKTS 131 
#define  IB_PMA_PORT_XMIT_DATA 130 
#define  IB_PMA_PORT_XMIT_PKTS 129 
#define  IB_PMA_PORT_XMIT_WAIT 128 

__attribute__((used)) static u64 get_cache_hw_sample_counters(struct qib_pportdata *ppd,
					__be16 sel)
{
	u64 ret;

	switch (sel) {
	case IB_PMA_PORT_XMIT_DATA:
		ret = ppd->cong_stats.counter_cache.psxmitdata;
		break;
	case IB_PMA_PORT_RCV_DATA:
		ret = ppd->cong_stats.counter_cache.psrcvdata;
		break;
	case IB_PMA_PORT_XMIT_PKTS:
		ret = ppd->cong_stats.counter_cache.psxmitpkts;
		break;
	case IB_PMA_PORT_RCV_PKTS:
		ret = ppd->cong_stats.counter_cache.psrcvpkts;
		break;
	case IB_PMA_PORT_XMIT_WAIT:
		ret = ppd->cong_stats.counter_cache.psxmitwait;
		break;
	default:
		ret = 0;
	}

	return ret;
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
          int sel = 100;
          int _len_ppd0 = 1;
          struct qib_pportdata * ppd = (struct qib_pportdata *) malloc(_len_ppd0*sizeof(struct qib_pportdata));
          for(int _i0 = 0; _i0 < _len_ppd0; _i0++) {
            ppd[_i0].cong_stats.counter_cache.psxmitwait = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].cong_stats.counter_cache.psrcvpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].cong_stats.counter_cache.psxmitpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].cong_stats.counter_cache.psrcvdata = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].cong_stats.counter_cache.psxmitdata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_cache_hw_sample_counters(ppd,sel);
          printf("%d\n", benchRet); 
          free(ppd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
