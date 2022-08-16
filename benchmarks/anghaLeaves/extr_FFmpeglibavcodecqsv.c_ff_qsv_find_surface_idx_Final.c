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
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {scalar_t__ MemId; } ;
struct TYPE_9__ {TYPE_1__ Data; } ;
struct TYPE_12__ {TYPE_2__ surface; } ;
struct TYPE_11__ {int nb_mids; TYPE_3__* mids; } ;
struct TYPE_10__ {scalar_t__ handle; } ;
typedef  TYPE_3__ QSVMid ;
typedef  TYPE_4__ QSVFramesContext ;
typedef  TYPE_5__ QSVFrame ;

/* Variables and functions */
 int AVERROR_BUG ; 

int ff_qsv_find_surface_idx(QSVFramesContext *ctx, QSVFrame *frame)
{
    int i;
    for (i = 0; i < ctx->nb_mids; i++) {
        QSVMid *mid = &ctx->mids[i];
        if (mid->handle == frame->surface.Data.MemId)
            return i;
    }
    return AVERROR_BUG;
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
          struct TYPE_11__ * ctx = (struct TYPE_11__ *) malloc(_len_ctx0*sizeof(struct TYPE_11__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].nb_mids = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__mids0 = 1;
          ctx[_i0].mids = (struct TYPE_10__ *) malloc(_len_ctx__i0__mids0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mids0; _j0++) {
            ctx[_i0].mids->handle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_frame0 = 1;
          struct TYPE_12__ * frame = (struct TYPE_12__ *) malloc(_len_frame0*sizeof(struct TYPE_12__));
          for(int _i0 = 0; _i0 < _len_frame0; _i0++) {
            frame[_i0].surface.Data.MemId = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ff_qsv_find_surface_idx(ctx,frame);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].mids);
          }
          free(ctx);
          free(frame);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
