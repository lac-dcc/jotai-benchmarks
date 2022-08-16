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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int control; } ;
typedef  TYPE_1__ hdcd_state ;
struct TYPE_6__ {scalar_t__ force_pe; } ;
typedef  TYPE_2__ HDCDContext ;

/* Variables and functions */

__attribute__((used)) static void hdcd_control(HDCDContext *ctx, hdcd_state *state, int *peak_extend, int *target_gain)
{
    *peak_extend = (ctx->force_pe || state->control & 16);
    *target_gain = (state->control & 15) << 7;
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
          int _len_ctx0 = 1;
          struct TYPE_6__ * ctx = (struct TYPE_6__ *) malloc(_len_ctx0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].force_pe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 1;
          struct TYPE_5__ * state = (struct TYPE_5__ *) malloc(_len_state0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].control = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peak_extend0 = 1;
          int * peak_extend = (int *) malloc(_len_peak_extend0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_peak_extend0; _i0++) {
            peak_extend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_target_gain0 = 1;
          int * target_gain = (int *) malloc(_len_target_gain0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_target_gain0; _i0++) {
            target_gain[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hdcd_control(ctx,state,peak_extend,target_gain);
          free(ctx);
          free(state);
          free(peak_extend);
          free(target_gain);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
