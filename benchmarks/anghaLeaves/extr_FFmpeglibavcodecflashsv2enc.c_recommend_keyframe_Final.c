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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {double diff_blocks; double tot_blocks; double diff_lines; double tot_lines; double uncomp_size; double raw_size; double comp_size; TYPE_1__* avctx; } ;
struct TYPE_4__ {scalar_t__ gop_size; } ;
typedef  TYPE_2__ FlashSV2Context ;

/* Variables and functions */

__attribute__((used)) static void recommend_keyframe(FlashSV2Context * s, int *keyframe)
{
#ifndef FLASHSV2_DUMB
    double block_ratio, line_ratio, enc_ratio, comp_ratio, data_ratio;
    if (s->avctx->gop_size > 0) {
        block_ratio = s->diff_blocks / s->tot_blocks;
        line_ratio = s->diff_lines / s->tot_lines;
        enc_ratio = s->uncomp_size / s->raw_size;
        comp_ratio = s->comp_size / s->uncomp_size;
        data_ratio = s->comp_size / s->raw_size;

        if ((block_ratio >= 0.5 && line_ratio / block_ratio <= 0.5) || line_ratio >= 0.95) {
            *keyframe = 1;
            return;
        }
    }
#else
    return;
#endif
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
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].diff_blocks = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        s[_i0].tot_blocks = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        s[_i0].diff_lines = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        s[_i0].tot_lines = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        s[_i0].uncomp_size = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        s[_i0].raw_size = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        s[_i0].comp_size = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_4__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
            s[_i0].avctx->gop_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_keyframe0 = 1;
          int * keyframe = (int *) malloc(_len_keyframe0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_keyframe0; _i0++) {
            keyframe[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          recommend_keyframe(s,keyframe);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          free(s);
          free(keyframe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
