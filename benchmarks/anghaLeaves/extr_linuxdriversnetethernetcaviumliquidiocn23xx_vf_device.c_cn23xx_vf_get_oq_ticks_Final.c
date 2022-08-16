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
       1            big-arr-10x\n\
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
typedef  int u32 ;
struct TYPE_2__ {int /*<<< orphan*/  coproc_tics_per_us; } ;
struct octeon_device {TYPE_1__ pfvf_hsword; } ;

/* Variables and functions */

u32 cn23xx_vf_get_oq_ticks(struct octeon_device *oct, u32 time_intr_in_us)
{
	/* This gives the SLI clock per microsec */
	u32 oqticks_per_us = (u32)oct->pfvf_hsword.coproc_tics_per_us;

	/* This gives the clock cycles per millisecond */
	oqticks_per_us *= 1000;

	/* This gives the oq ticks (1024 core clock cycles) per millisecond */
	oqticks_per_us /= 1024;

	/* time_intr is in microseconds. The next 2 steps gives the oq ticks
	 * corressponding to time_intr.
	 */
	oqticks_per_us *= time_intr_in_us;
	oqticks_per_us /= 1000;

	return oqticks_per_us;
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
          int time_intr_in_us = 100;
          int _len_oct0 = 1;
          struct octeon_device * oct = (struct octeon_device *) malloc(_len_oct0*sizeof(struct octeon_device));
          for(int _i0 = 0; _i0 < _len_oct0; _i0++) {
            oct[_i0].pfvf_hsword.coproc_tics_per_us = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cn23xx_vf_get_oq_ticks(oct,time_intr_in_us);
          printf("%d\n", benchRet); 
          free(oct);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int time_intr_in_us = 10;
          int _len_oct0 = 100;
          struct octeon_device * oct = (struct octeon_device *) malloc(_len_oct0*sizeof(struct octeon_device));
          for(int _i0 = 0; _i0 < _len_oct0; _i0++) {
            oct[_i0].pfvf_hsword.coproc_tics_per_us = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cn23xx_vf_get_oq_ticks(oct,time_intr_in_us);
          printf("%d\n", benchRet); 
          free(oct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
