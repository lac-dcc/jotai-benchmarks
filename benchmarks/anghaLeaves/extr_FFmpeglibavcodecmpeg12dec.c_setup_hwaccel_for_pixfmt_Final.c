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
struct TYPE_7__ {scalar_t__ idct_algo; scalar_t__ pix_fmt; TYPE_2__* priv_data; scalar_t__ hwaccel; } ;
struct TYPE_5__ {int pack_pblocks; } ;
struct TYPE_6__ {TYPE_1__ mpeg_enc_ctx; } ;
typedef  TYPE_1__ MpegEncContext ;
typedef  TYPE_2__ Mpeg1Context ;
typedef  TYPE_3__ AVCodecContext ;

/* Variables and functions */
 scalar_t__ AV_PIX_FMT_XVMC ; 
 scalar_t__ FF_IDCT_AUTO ; 
 scalar_t__ FF_IDCT_NONE ; 

__attribute__((used)) static void setup_hwaccel_for_pixfmt(AVCodecContext *avctx)
{
    // until then pix_fmt may be changed right after codec init
    if (avctx->hwaccel)
        if (avctx->idct_algo == FF_IDCT_AUTO)
            avctx->idct_algo = FF_IDCT_NONE;

    if (avctx->hwaccel && avctx->pix_fmt == AV_PIX_FMT_XVMC) {
        Mpeg1Context *s1 = avctx->priv_data;
        MpegEncContext *s = &s1->mpeg_enc_ctx;

        s->pack_pblocks = 1;
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
          int _len_avctx0 = 1;
          struct TYPE_7__ * avctx = (struct TYPE_7__ *) malloc(_len_avctx0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_avctx0; _i0++) {
            avctx[_i0].idct_algo = ((-2 * (next_i()%2)) + 1) * next_i();
        avctx[_i0].pix_fmt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_avctx__i0__priv_data0 = 1;
          avctx[_i0].priv_data = (struct TYPE_6__ *) malloc(_len_avctx__i0__priv_data0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_avctx__i0__priv_data0; _j0++) {
            avctx[_i0].priv_data->mpeg_enc_ctx.pack_pblocks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        avctx[_i0].hwaccel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          setup_hwaccel_for_pixfmt(avctx);
          for(int _aux = 0; _aux < _len_avctx0; _aux++) {
          free(avctx[_aux].priv_data);
          }
          free(avctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
