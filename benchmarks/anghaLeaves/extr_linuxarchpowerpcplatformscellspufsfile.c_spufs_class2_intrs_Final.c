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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {unsigned long long class2_intr; scalar_t__ class2_intr_base; } ;
struct spu_context {scalar_t__ state; TYPE_3__ stats; TYPE_2__* spu; } ;
struct TYPE_4__ {scalar_t__ class2_intr; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;

/* Variables and functions */
 scalar_t__ SPU_STATE_RUNNABLE ; 

__attribute__((used)) static unsigned long long spufs_class2_intrs(struct spu_context *ctx)
{
	unsigned long long class2_intrs = ctx->stats.class2_intr;

	if (ctx->state == SPU_STATE_RUNNABLE) {
		class2_intrs += (ctx->spu->stats.class2_intr -
				 ctx->stats.class2_intr_base);
	}

	return class2_intrs;
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
          struct spu_context * ctx = (struct spu_context *) malloc(_len_ctx0*sizeof(struct spu_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].stats.class2_intr = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].stats.class2_intr_base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__spu0 = 1;
          ctx[_i0].spu = (struct TYPE_5__ *) malloc(_len_ctx__i0__spu0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__spu0; _j0++) {
            ctx[_i0].spu->stats.class2_intr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned long long benchRet = spufs_class2_intrs(ctx);
          printf("%llu\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].spu);
          }
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
