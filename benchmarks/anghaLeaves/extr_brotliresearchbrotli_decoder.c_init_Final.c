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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ decoder; scalar_t__ output_buffer; scalar_t__ input_buffer; scalar_t__ fout; scalar_t__ fin; } ;
typedef  TYPE_1__ Context ;

/* Variables and functions */

void init(Context* ctx) {
  ctx->fin = 0;
  ctx->fout = 0;
  ctx->input_buffer = 0;
  ctx->output_buffer = 0;
  ctx->decoder = 0;
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
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].decoder = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].output_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].input_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].fout = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].fin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init(ctx);
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].decoder = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].output_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].input_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].fout = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].fin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init(ctx);
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct TYPE_3__ * ctx = (struct TYPE_3__ *) malloc(_len_ctx0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].decoder = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].output_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].input_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].fout = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].fin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init(ctx);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}