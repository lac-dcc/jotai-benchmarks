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
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
typedef  int uint32_t ;
struct TYPE_12__ {int num_in_eps; scalar_t__ ded_fifo_en; } ;
struct TYPE_11__ {TYPE_5__ b; } ;
struct TYPE_10__ {int d32; } ;
struct TYPE_8__ {int num_dev_ep; } ;
struct TYPE_9__ {TYPE_1__ b; } ;
struct TYPE_13__ {TYPE_4__ hwcfg4; TYPE_3__ hwcfg1; TYPE_2__ hwcfg2; } ;
typedef  TYPE_6__ dwc_otg_core_if_t ;

/* Variables and functions */

__attribute__((used)) static uint32_t calc_num_in_eps(dwc_otg_core_if_t * core_if)
{
	uint32_t num_in_eps = 0;
	uint32_t num_eps = core_if->hwcfg2.b.num_dev_ep;
	uint32_t hwcfg1 = core_if->hwcfg1.d32 >> 3;
	uint32_t num_tx_fifos = core_if->hwcfg4.b.num_in_eps;
	int i;

	for (i = 0; i < num_eps; ++i) {
		if (!(hwcfg1 & 0x1))
			num_in_eps++;

		hwcfg1 >>= 2;
	}

	if (core_if->hwcfg4.b.ded_fifo_en) {
		num_in_eps =
		    (num_in_eps > num_tx_fifos) ? num_tx_fifos : num_in_eps;
	}

	return num_in_eps;
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
          int _len_core_if0 = 65025;
          struct TYPE_13__ * core_if = (struct TYPE_13__ *) malloc(_len_core_if0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_core_if0; _i0++) {
              core_if[_i0].hwcfg4.b.num_in_eps = ((-2 * (next_i()%2)) + 1) * next_i();
          core_if[_i0].hwcfg4.b.ded_fifo_en = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          core_if[_i0].hwcfg1.d32 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          core_if[_i0].hwcfg2.b.num_dev_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = calc_num_in_eps(core_if);
          printf("%d\n", benchRet); 
          free(core_if);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_core_if0 = 100;
          struct TYPE_13__ * core_if = (struct TYPE_13__ *) malloc(_len_core_if0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_core_if0; _i0++) {
              core_if[_i0].hwcfg4.b.num_in_eps = ((-2 * (next_i()%2)) + 1) * next_i();
          core_if[_i0].hwcfg4.b.ded_fifo_en = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          core_if[_i0].hwcfg1.d32 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          core_if[_i0].hwcfg2.b.num_dev_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = calc_num_in_eps(core_if);
          printf("%d\n", benchRet); 
          free(core_if);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_core_if0 = 1;
          struct TYPE_13__ * core_if = (struct TYPE_13__ *) malloc(_len_core_if0*sizeof(struct TYPE_13__));
          for(int _i0 = 0; _i0 < _len_core_if0; _i0++) {
              core_if[_i0].hwcfg4.b.num_in_eps = ((-2 * (next_i()%2)) + 1) * next_i();
          core_if[_i0].hwcfg4.b.ded_fifo_en = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          core_if[_i0].hwcfg1.d32 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          core_if[_i0].hwcfg2.b.num_dev_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
        
          }
        
          int benchRet = calc_num_in_eps(core_if);
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
