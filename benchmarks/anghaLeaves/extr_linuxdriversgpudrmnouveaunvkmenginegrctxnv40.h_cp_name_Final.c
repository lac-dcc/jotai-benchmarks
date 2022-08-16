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

/* Type definitions */
typedef  int u32 ;
struct nvkm_grctx {int* ucode; scalar_t__ mode; int* ctxprog_label; int ctxprog_len; } ;

/* Variables and functions */
 int CP_BRA_IP ; 
 int CP_BRA_IP_SHIFT ; 
 scalar_t__ NVKM_GRCTX_PROG ; 

__attribute__((used)) static inline void
cp_name(struct nvkm_grctx *ctx, int name)
{
	u32 *ctxprog = ctx->ucode;
	int i;

	if (ctx->mode != NVKM_GRCTX_PROG)
		return;

	ctx->ctxprog_label[name] = ctx->ctxprog_len;
	for (i = 0; i < ctx->ctxprog_len; i++) {
		if ((ctxprog[i] & 0xfff00000) != 0xff400000)
			continue;
		if ((ctxprog[i] & CP_BRA_IP) != ((name) << CP_BRA_IP_SHIFT))
			continue;
		ctxprog[i] = (ctxprog[i] & 0x00ff00ff) |
			     (ctx->ctxprog_len << CP_BRA_IP_SHIFT);
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
          int name = 100;
          int _len_ctx0 = 1;
          struct nvkm_grctx * ctx = (struct nvkm_grctx *) malloc(_len_ctx0*sizeof(struct nvkm_grctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__ucode0 = 1;
          ctx[_i0].ucode = (int *) malloc(_len_ctx__i0__ucode0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ucode0; _j0++) {
            ctx[_i0].ucode[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__ctxprog_label0 = 1;
          ctx[_i0].ctxprog_label = (int *) malloc(_len_ctx__i0__ctxprog_label0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ctxprog_label0; _j0++) {
            ctx[_i0].ctxprog_label[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].ctxprog_len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          cp_name(ctx,name);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ucode);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ctxprog_label);
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
