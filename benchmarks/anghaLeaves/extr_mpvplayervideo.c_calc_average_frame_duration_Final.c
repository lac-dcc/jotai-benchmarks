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
struct MPContext {int num_past_frames; TYPE_1__* past_frames; } ;
struct TYPE_2__ {double approx_duration; } ;

/* Variables and functions */

double calc_average_frame_duration(struct MPContext *mpctx)
{
    double total = 0;
    int num = 0;
    for (int n = 0; n < mpctx->num_past_frames; n++) {
        double dur = mpctx->past_frames[n].approx_duration;
        if (dur <= 0)
            continue;
        total += dur;
        num += 1;
    }
    return num > 0 ? total / num : 0;
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
          int _len_mpctx0 = 1;
          struct MPContext * mpctx = (struct MPContext *) malloc(_len_mpctx0*sizeof(struct MPContext));
          for(int _i0 = 0; _i0 < _len_mpctx0; _i0++) {
            mpctx[_i0].num_past_frames = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mpctx__i0__past_frames0 = 1;
          mpctx[_i0].past_frames = (struct TYPE_2__ *) malloc(_len_mpctx__i0__past_frames0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mpctx__i0__past_frames0; _j0++) {
            mpctx[_i0].past_frames->approx_duration = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          double benchRet = calc_average_frame_duration(mpctx);
          printf("%lf\n", benchRet); 
          for(int _aux = 0; _aux < _len_mpctx0; _aux++) {
          free(mpctx[_aux].past_frames);
          }
          free(mpctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
