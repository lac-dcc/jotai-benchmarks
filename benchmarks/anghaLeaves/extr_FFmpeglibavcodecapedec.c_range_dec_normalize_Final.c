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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int range; int buffer; int low; } ;
struct TYPE_5__ {int error; TYPE_1__ rc; scalar_t__* ptr; scalar_t__* data_end; } ;
typedef  TYPE_2__ APEContext ;

/* Variables and functions */
 int BOTTOM_VALUE ; 

__attribute__((used)) static inline void range_dec_normalize(APEContext *ctx)
{
    while (ctx->rc.range <= BOTTOM_VALUE) {
        ctx->rc.buffer <<= 8;
        if(ctx->ptr < ctx->data_end) {
            ctx->rc.buffer += *ctx->ptr;
            ctx->ptr++;
        } else {
            ctx->error = 1;
        }
        ctx->rc.low    = (ctx->rc.low << 8)    | ((ctx->rc.buffer >> 1) & 0xFF);
        ctx->rc.range  <<= 8;
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
            ctx[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].rc.range = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].rc.buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].rc.low = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__ptr0 = 1;
          ctx[_i0].ptr = (long *) malloc(_len_ctx__i0__ptr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ptr0; _j0++) {
            ctx[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__data_end0 = 1;
          ctx[_i0].data_end = (long *) malloc(_len_ctx__i0__data_end0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__data_end0; _j0++) {
            ctx[_i0].data_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          range_dec_normalize(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ptr);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].data_end);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].rc.range = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].rc.buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].rc.low = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__ptr0 = 1;
          ctx[_i0].ptr = (long *) malloc(_len_ctx__i0__ptr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ptr0; _j0++) {
            ctx[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__data_end0 = 1;
          ctx[_i0].data_end = (long *) malloc(_len_ctx__i0__data_end0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__data_end0; _j0++) {
            ctx[_i0].data_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          range_dec_normalize(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ptr);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].data_end);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct TYPE_5__ * ctx = (struct TYPE_5__ *) malloc(_len_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].rc.range = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].rc.buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].rc.low = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__ptr0 = 1;
          ctx[_i0].ptr = (long *) malloc(_len_ctx__i0__ptr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__ptr0; _j0++) {
            ctx[_i0].ptr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__data_end0 = 1;
          ctx[_i0].data_end = (long *) malloc(_len_ctx__i0__data_end0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__data_end0; _j0++) {
            ctx[_i0].data_end[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          range_dec_normalize(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].ptr);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].data_end);
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
