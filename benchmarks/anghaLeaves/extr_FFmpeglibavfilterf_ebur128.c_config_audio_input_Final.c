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
struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int min_samples; int max_samples; int partial_buf_size; int sample_rate; TYPE_3__* dst; } ;
struct TYPE_5__ {int peak_mode; scalar_t__ metadata; } ;
typedef  TYPE_1__ EBUR128Context ;
typedef  TYPE_2__ AVFilterLink ;
typedef  TYPE_3__ AVFilterContext ;

/* Variables and functions */
 int PEAK_MODE_TRUE_PEAKS ; 

__attribute__((used)) static int config_audio_input(AVFilterLink *inlink)
{
    AVFilterContext *ctx = inlink->dst;
    EBUR128Context *ebur128 = ctx->priv;

    /* Force 100ms framing in case of metadata injection: the frames must have
     * a granularity of the window overlap to be accurately exploited.
     * As for the true peaks mode, it just simplifies the resampling buffer
     * allocation and the lookup in it (since sample buffers differ in size, it
     * can be more complex to integrate in the one-sample loop of
     * filter_frame()). */
    if (ebur128->metadata || (ebur128->peak_mode & PEAK_MODE_TRUE_PEAKS))
        inlink->min_samples =
        inlink->max_samples =
        inlink->partial_buf_size = inlink->sample_rate / 10;
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
          int _len_inlink0 = 1;
          struct TYPE_6__ * inlink = (struct TYPE_6__ *) malloc(_len_inlink0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_inlink0; _i0++) {
            inlink[_i0].min_samples = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].max_samples = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].partial_buf_size = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].sample_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_inlink__i0__dst0 = 1;
          inlink[_i0].dst = (struct TYPE_7__ *) malloc(_len_inlink__i0__dst0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst0; _j0++) {
              int _len_inlink__i0__dst_priv0 = 1;
          inlink[_i0].dst->priv = (struct TYPE_5__ *) malloc(_len_inlink__i0__dst_priv0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_inlink__i0__dst_priv0; _j0++) {
            inlink[_i0].dst->priv->peak_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        inlink[_i0].dst->priv->metadata = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = config_audio_input(inlink);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_inlink0; _aux++) {
          free(inlink[_aux].dst);
          }
          free(inlink);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
