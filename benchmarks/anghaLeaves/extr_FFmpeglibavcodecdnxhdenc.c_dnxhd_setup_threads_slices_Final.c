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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int mb_height; int mb_width; } ;
struct TYPE_5__ {int* slice_offs; int* slice_size; scalar_t__* mb_bits; TYPE_1__ m; } ;
typedef  TYPE_2__ DNXHDEncContext ;

/* Variables and functions */

__attribute__((used)) static void dnxhd_setup_threads_slices(DNXHDEncContext *ctx)
{
    int mb_y, mb_x;
    int offset = 0;
    for (mb_y = 0; mb_y < ctx->m.mb_height; mb_y++) {
        int thread_size;
        ctx->slice_offs[mb_y] = offset;
        ctx->slice_size[mb_y] = 0;
        for (mb_x = 0; mb_x < ctx->m.mb_width; mb_x++) {
            unsigned mb = mb_y * ctx->m.mb_width + mb_x;
            ctx->slice_size[mb_y] += ctx->mb_bits[mb];
        }
        ctx->slice_size[mb_y]   = (ctx->slice_size[mb_y] + 31) & ~31;
        ctx->slice_size[mb_y] >>= 3;
        thread_size = ctx->slice_size[mb_y];
        offset += thread_size;
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
          int _len_ctx0 = 1;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__slice_offs0 = 1;
          ctx[_i0].slice_offs = (int *) malloc(_len_ctx__i0__slice_offs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__slice_offs0; _j0++) {
            ctx[_i0].slice_offs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__slice_size0 = 1;
          ctx[_i0].slice_size = (int *) malloc(_len_ctx__i0__slice_size0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__slice_size0; _j0++) {
            ctx[_i0].slice_size[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__mb_bits0 = 1;
          ctx[_i0].mb_bits = (long *) malloc(_len_ctx__i0__mb_bits0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mb_bits0; _j0++) {
            ctx[_i0].mb_bits[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ctx[_i0].m.mb_height = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].m.mb_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dnxhd_setup_threads_slices(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].slice_offs);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].slice_size);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].mb_bits);
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
