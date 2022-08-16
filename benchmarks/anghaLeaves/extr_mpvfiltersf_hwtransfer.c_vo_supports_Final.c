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
struct mp_hwdec_ctx {int hw_imgfmt; int* supported_formats; } ;

/* Variables and functions */

__attribute__((used)) static bool vo_supports(struct mp_hwdec_ctx *ctx, int hw_fmt, int sw_fmt)
{
    if (!ctx->hw_imgfmt)
        return true; // if unset, all formats are allowed
    if (ctx->hw_imgfmt != hw_fmt)
        return false;

    for (int i = 0; ctx->supported_formats &&  ctx->supported_formats[i]; i++) {
        if (ctx->supported_formats[i] == sw_fmt)
            return true;
    }

    return false;
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
          int hw_fmt = 100;
          int sw_fmt = 100;
          int _len_ctx0 = 1;
          struct mp_hwdec_ctx * ctx = (struct mp_hwdec_ctx *) malloc(_len_ctx0*sizeof(struct mp_hwdec_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].hw_imgfmt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__supported_formats0 = 1;
          ctx[_i0].supported_formats = (int *) malloc(_len_ctx__i0__supported_formats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__supported_formats0; _j0++) {
            ctx[_i0].supported_formats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vo_supports(ctx,hw_fmt,sw_fmt);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].supported_formats);
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
