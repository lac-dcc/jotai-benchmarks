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
struct chcr_gcm_ctx {int dummy; } ;
struct chcr_aead_ctx {TYPE_1__* ctx; } ;
struct TYPE_2__ {struct chcr_gcm_ctx* gcm; } ;

/* Variables and functions */

__attribute__((used)) static inline struct chcr_gcm_ctx *GCM_CTX(struct chcr_aead_ctx *gctx)
{
	return gctx->ctx->gcm;
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
          int _len_gctx0 = 1;
          struct chcr_aead_ctx * gctx = (struct chcr_aead_ctx *) malloc(_len_gctx0*sizeof(struct chcr_aead_ctx));
          for(int _i0 = 0; _i0 < _len_gctx0; _i0++) {
              int _len_gctx__i0__ctx0 = 1;
          gctx[_i0].ctx = (struct TYPE_2__ *) malloc(_len_gctx__i0__ctx0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gctx__i0__ctx0; _j0++) {
              int _len_gctx__i0__ctx_gcm0 = 1;
          gctx[_i0].ctx->gcm = (struct chcr_gcm_ctx *) malloc(_len_gctx__i0__ctx_gcm0*sizeof(struct chcr_gcm_ctx));
          for(int _j0 = 0; _j0 < _len_gctx__i0__ctx_gcm0; _j0++) {
            gctx[_i0].ctx->gcm->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct chcr_gcm_ctx * benchRet = GCM_CTX(gctx);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_gctx0; _aux++) {
          free(gctx[_aux].ctx);
          }
          free(gctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
