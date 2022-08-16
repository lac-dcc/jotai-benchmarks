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
struct TYPE_7__ {scalar_t__ total_bits; TYPE_1__* avctx; } ;
struct TYPE_6__ {int den; scalar_t__ num; } ;
struct TYPE_5__ {int bit_rate; int ticks_per_frame; double frame_number; TYPE_2__ time_base; } ;
typedef  TYPE_3__ FlashSV2Context ;

/* Variables and functions */
 scalar_t__ use15_7_threshold ; 

__attribute__((used)) static int optimum_use15_7(FlashSV2Context * s)
{
#ifndef FLASHSV2_DUMB
    double ideal = ((double)(s->avctx->bit_rate * s->avctx->time_base.den * s->avctx->ticks_per_frame)) /
        ((double) s->avctx->time_base.num) * s->avctx->frame_number;
    if (ideal + use15_7_threshold < s->total_bits) {
        return 1;
    } else {
        return 0;
    }
#else
    return s->avctx->global_quality == 0;
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
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].total_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__avctx0 = 1;
          s[_i0].avctx = (struct TYPE_5__ *) malloc(_len_s__i0__avctx0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_s__i0__avctx0; _j0++) {
            s[_i0].avctx->bit_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].avctx->ticks_per_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].avctx->frame_number = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        s[_i0].avctx->time_base.den = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].avctx->time_base.num = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = optimum_use15_7(s);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].avctx);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
