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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_5__ {int num_dev_perio_in_ep; } ;
struct TYPE_6__ {TYPE_1__ b; } ;
struct TYPE_7__ {int p_tx_msk; TYPE_2__ hwcfg4; } ;
typedef  TYPE_3__ dwc_otg_core_if_t ;

/* Variables and functions */

__attribute__((used)) static uint32_t assign_perio_tx_fifo(dwc_otg_core_if_t * core_if)
{
	uint32_t PerTxMsk = 1;
	int i;
	for (i = 0; i < core_if->hwcfg4.b.num_dev_perio_in_ep; ++i) {
		if ((PerTxMsk & core_if->p_tx_msk) == 0) {
			core_if->p_tx_msk |= PerTxMsk;
			return i + 1;
		}
		PerTxMsk <<= 1;
	}
	return 0;
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
          int _len_core_if0 = 1;
          struct TYPE_7__ * core_if = (struct TYPE_7__ *) malloc(_len_core_if0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_core_if0; _i0++) {
            core_if[_i0].p_tx_msk = ((-2 * (next_i()%2)) + 1) * next_i();
        core_if[_i0].hwcfg4.b.num_dev_perio_in_ep = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = assign_perio_tx_fifo(core_if);
          printf("%d\n", benchRet); 
          free(core_if);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
