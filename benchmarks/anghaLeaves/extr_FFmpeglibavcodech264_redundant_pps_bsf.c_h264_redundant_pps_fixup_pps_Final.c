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
struct TYPE_6__ {int weighted_pred_flag; scalar_t__ pic_init_qp_minus26; } ;
struct TYPE_5__ {scalar_t__ global_pic_init_qp; scalar_t__ current_pic_init_qp; } ;
typedef  TYPE_1__ H264RedundantPPSContext ;
typedef  TYPE_2__ H264RawPPS ;

/* Variables and functions */

__attribute__((used)) static int h264_redundant_pps_fixup_pps(H264RedundantPPSContext *ctx,
                                        H264RawPPS *pps)
{
    // Record the current value of pic_init_qp in order to fix up
    // following slices, then overwrite with the global value.
    ctx->current_pic_init_qp = pps->pic_init_qp_minus26 + 26;
    pps->pic_init_qp_minus26 = ctx->global_pic_init_qp - 26;

    // Some PPSs have this set, so it must be set in all of them.
    // (Slices which do not use such a PPS on input will still have
    // *_weight_l*flag as zero and therefore write equivalently.)
    pps->weighted_pred_flag = 1;

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
          int _len_ctx0 = 1;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].global_pic_init_qp = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].current_pic_init_qp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pps0 = 1;
          struct TYPE_6__ * pps = (struct TYPE_6__ *) malloc(_len_pps0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_pps0; _i0++) {
            pps[_i0].weighted_pred_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        pps[_i0].pic_init_qp_minus26 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = h264_redundant_pps_fixup_pps(ctx,pps);
          printf("%d\n", benchRet); 
          free(ctx);
          free(pps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
