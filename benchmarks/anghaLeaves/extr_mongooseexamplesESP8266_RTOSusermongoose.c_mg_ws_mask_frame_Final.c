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
struct ws_mask_ctx {scalar_t__ pos; int /*<<< orphan*/  mask; } ;
struct mbuf {size_t len; char* buf; } ;

/* Variables and functions */

__attribute__((used)) static void mg_ws_mask_frame(struct mbuf *mbuf, struct ws_mask_ctx *ctx) {
  size_t i;
  if (ctx->pos == 0) return;
  for (i = 0; i < (mbuf->len - ctx->pos); i++) {
    mbuf->buf[ctx->pos + i] ^= ((char *) &ctx->mask)[i % 4];
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
          int _len_mbuf0 = 1;
          struct mbuf * mbuf = (struct mbuf *) malloc(_len_mbuf0*sizeof(struct mbuf));
          for(int _i0 = 0; _i0 < _len_mbuf0; _i0++) {
            mbuf[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mbuf__i0__buf0 = 1;
          mbuf[_i0].buf = (char *) malloc(_len_mbuf__i0__buf0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_mbuf__i0__buf0; _j0++) {
            mbuf[_i0].buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct ws_mask_ctx * ctx = (struct ws_mask_ctx *) malloc(_len_ctx0*sizeof(struct ws_mask_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].pos = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mg_ws_mask_frame(mbuf,ctx);
          for(int _aux = 0; _aux < _len_mbuf0; _aux++) {
          free(mbuf[_aux].buf);
          }
          free(mbuf);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
