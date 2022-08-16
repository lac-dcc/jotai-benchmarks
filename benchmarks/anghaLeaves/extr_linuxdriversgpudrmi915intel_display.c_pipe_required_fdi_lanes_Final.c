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
struct TYPE_2__ {scalar_t__ enable; } ;
struct intel_crtc_state {int fdi_lanes; scalar_t__ has_pch_encoder; TYPE_1__ base; } ;

/* Variables and functions */

__attribute__((used)) static int pipe_required_fdi_lanes(struct intel_crtc_state *crtc_state)
{
	if (crtc_state->base.enable && crtc_state->has_pch_encoder)
		return crtc_state->fdi_lanes;

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
          int _len_crtc_state0 = 1;
          struct intel_crtc_state * crtc_state = (struct intel_crtc_state *) malloc(_len_crtc_state0*sizeof(struct intel_crtc_state));
          for(int _i0 = 0; _i0 < _len_crtc_state0; _i0++) {
            crtc_state[_i0].fdi_lanes = ((-2 * (next_i()%2)) + 1) * next_i();
        crtc_state[_i0].has_pch_encoder = ((-2 * (next_i()%2)) + 1) * next_i();
        crtc_state[_i0].base.enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pipe_required_fdi_lanes(crtc_state);
          printf("%d\n", benchRet); 
          free(crtc_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
