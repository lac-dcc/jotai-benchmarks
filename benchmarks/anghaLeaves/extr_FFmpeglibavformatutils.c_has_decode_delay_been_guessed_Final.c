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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {int nb_decoded_frames; TYPE_3__* internal; int /*<<< orphan*/  info; TYPE_1__* codecpar; } ;
struct TYPE_8__ {TYPE_2__* avctx; } ;
struct TYPE_7__ {int has_b_frames; } ;
struct TYPE_6__ {scalar_t__ codec_id; } ;
typedef  TYPE_4__ AVStream ;

/* Variables and functions */
 scalar_t__ AV_CODEC_ID_H264 ; 

__attribute__((used)) static int has_decode_delay_been_guessed(AVStream *st)
{
    if (st->codecpar->codec_id != AV_CODEC_ID_H264) return 1;
    if (!st->info) // if we have left find_stream_info then nb_decoded_frames won't increase anymore for stream copy
        return 1;
#if CONFIG_H264_DECODER
    if (st->internal->avctx->has_b_frames &&
       avpriv_h264_has_num_reorder_frames(st->internal->avctx) == st->internal->avctx->has_b_frames)
        return 1;
#endif
    if (st->internal->avctx->has_b_frames<3)
        return st->nb_decoded_frames >= 7;
    else if (st->internal->avctx->has_b_frames<4)
        return st->nb_decoded_frames >= 18;
    else
        return st->nb_decoded_frames >= 20;
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
          int _len_st0 = 1;
          struct TYPE_9__ * st = (struct TYPE_9__ *) malloc(_len_st0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].nb_decoded_frames = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_st__i0__internal0 = 1;
          st[_i0].internal = (struct TYPE_8__ *) malloc(_len_st__i0__internal0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_st__i0__internal0; _j0++) {
              int _len_st__i0__internal_avctx0 = 1;
          st[_i0].internal->avctx = (struct TYPE_7__ *) malloc(_len_st__i0__internal_avctx0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_st__i0__internal_avctx0; _j0++) {
            st[_i0].internal->avctx->has_b_frames = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        st[_i0].info = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_st__i0__codecpar0 = 1;
          st[_i0].codecpar = (struct TYPE_6__ *) malloc(_len_st__i0__codecpar0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_st__i0__codecpar0; _j0++) {
            st[_i0].codecpar->codec_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = has_decode_delay_been_guessed(st);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].internal);
          }
          for(int _aux = 0; _aux < _len_st0; _aux++) {
          free(st[_aux].codecpar);
          }
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
