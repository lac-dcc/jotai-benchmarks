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
struct timing_generator {int dummy; } ;
struct TYPE_2__ {int INTERLACE; } ;
struct dc_crtc_timing {int v_front_porch; TYPE_1__ flags; } ;

/* Variables and functions */

__attribute__((used)) static void optc1_apply_front_porch_workaround(
	struct timing_generator *optc,
	struct dc_crtc_timing *timing)
{
	if (timing->flags.INTERLACE == 1) {
		if (timing->v_front_porch < 2)
			timing->v_front_porch = 2;
	} else {
		if (timing->v_front_porch < 1)
			timing->v_front_porch = 1;
	}
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
          int _len_optc0 = 1;
          struct timing_generator * optc = (struct timing_generator *) malloc(_len_optc0*sizeof(struct timing_generator));
          for(int _i0 = 0; _i0 < _len_optc0; _i0++) {
            optc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_timing0 = 1;
          struct dc_crtc_timing * timing = (struct dc_crtc_timing *) malloc(_len_timing0*sizeof(struct dc_crtc_timing));
          for(int _i0 = 0; _i0 < _len_timing0; _i0++) {
            timing[_i0].v_front_porch = ((-2 * (next_i()%2)) + 1) * next_i();
        timing[_i0].flags.INTERLACE = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          optc1_apply_front_porch_workaround(optc,timing);
          free(optc);
          free(timing);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
