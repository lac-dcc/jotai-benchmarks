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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
       1            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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

/* Type definitions */
struct blk_mq_hw_ctx {unsigned int nr_ctx; struct blk_mq_ctx** ctxs; } ;
struct blk_mq_ctx {unsigned int index_hw; } ;

/* Variables and functions */

__attribute__((used)) static struct blk_mq_ctx *blk_mq_next_ctx(struct blk_mq_hw_ctx *hctx,
					  struct blk_mq_ctx *ctx)
{
	unsigned idx = ctx->index_hw;

	if (++idx == hctx->nr_ctx)
		idx = 0;

	return hctx->ctxs[idx];
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

    // big-arr
    case 0:
    {
          int _len_hctx0 = 65025;
          struct blk_mq_hw_ctx * hctx = (struct blk_mq_hw_ctx *) malloc(_len_hctx0*sizeof(struct blk_mq_hw_ctx));
          for(int _i0 = 0; _i0 < _len_hctx0; _i0++) {
            hctx[_i0].nr_ctx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hctx__i0__ctxs0 = 1;
          hctx[_i0].ctxs = (struct blk_mq_ctx **) malloc(_len_hctx__i0__ctxs0*sizeof(struct blk_mq_ctx *));
          for(int _j0 = 0; _j0 < _len_hctx__i0__ctxs0; _j0++) {
            int _len_hctx__i0__ctxs1 = 1;
            hctx[_i0].ctxs[_j0] = (struct blk_mq_ctx *) malloc(_len_hctx__i0__ctxs1*sizeof(struct blk_mq_ctx));
            for(int _j1 = 0; _j1 < _len_hctx__i0__ctxs1; _j1++) {
              hctx[_i0].ctxs[_j0]->index_hw = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ctx0 = 65025;
          struct blk_mq_ctx * ctx = (struct blk_mq_ctx *) malloc(_len_ctx0*sizeof(struct blk_mq_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].index_hw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct blk_mq_ctx * benchRet = blk_mq_next_ctx(hctx,ctx);
          printf("%u\n", (*benchRet).index_hw);
          for(int _aux = 0; _aux < _len_hctx0; _aux++) {
          free(*(hctx[_aux].ctxs));
        free(hctx[_aux].ctxs);
          }
          free(hctx);
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_hctx0 = 100;
          struct blk_mq_hw_ctx * hctx = (struct blk_mq_hw_ctx *) malloc(_len_hctx0*sizeof(struct blk_mq_hw_ctx));
          for(int _i0 = 0; _i0 < _len_hctx0; _i0++) {
            hctx[_i0].nr_ctx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hctx__i0__ctxs0 = 1;
          hctx[_i0].ctxs = (struct blk_mq_ctx **) malloc(_len_hctx__i0__ctxs0*sizeof(struct blk_mq_ctx *));
          for(int _j0 = 0; _j0 < _len_hctx__i0__ctxs0; _j0++) {
            int _len_hctx__i0__ctxs1 = 1;
            hctx[_i0].ctxs[_j0] = (struct blk_mq_ctx *) malloc(_len_hctx__i0__ctxs1*sizeof(struct blk_mq_ctx));
            for(int _j1 = 0; _j1 < _len_hctx__i0__ctxs1; _j1++) {
              hctx[_i0].ctxs[_j0]->index_hw = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_ctx0 = 100;
          struct blk_mq_ctx * ctx = (struct blk_mq_ctx *) malloc(_len_ctx0*sizeof(struct blk_mq_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].index_hw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct blk_mq_ctx * benchRet = blk_mq_next_ctx(hctx,ctx);
          printf("%u\n", (*benchRet).index_hw);
          for(int _aux = 0; _aux < _len_hctx0; _aux++) {
          free(*(hctx[_aux].ctxs));
        free(hctx[_aux].ctxs);
          }
          free(hctx);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
