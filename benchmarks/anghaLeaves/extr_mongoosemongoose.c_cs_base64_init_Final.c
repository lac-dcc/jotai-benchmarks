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

/* Type definitions */
struct cs_base64_ctx {void* user_data; int /*<<< orphan*/  b64_putc; scalar_t__ chunk_size; } ;
typedef  int /*<<< orphan*/  cs_base64_putc_t ;

/* Variables and functions */

void cs_base64_init(struct cs_base64_ctx *ctx, cs_base64_putc_t b64_putc,
                    void *user_data) {
  ctx->chunk_size = 0;
  ctx->b64_putc = b64_putc;
  ctx->user_data = user_data;
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
          int b64_putc = 100;
          int _len_ctx0 = 1;
          struct cs_base64_ctx * ctx = (struct cs_base64_ctx *) malloc(_len_ctx0*sizeof(struct cs_base64_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].b64_putc = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].chunk_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * user_data;
          cs_base64_init(ctx,b64_putc,user_data);
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int b64_putc = 255;
          int _len_ctx0 = 65025;
          struct cs_base64_ctx * ctx = (struct cs_base64_ctx *) malloc(_len_ctx0*sizeof(struct cs_base64_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].b64_putc = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].chunk_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * user_data;
          cs_base64_init(ctx,b64_putc,user_data);
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int b64_putc = 10;
          int _len_ctx0 = 100;
          struct cs_base64_ctx * ctx = (struct cs_base64_ctx *) malloc(_len_ctx0*sizeof(struct cs_base64_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].b64_putc = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].chunk_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * user_data;
          cs_base64_init(ctx,b64_putc,user_data);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
