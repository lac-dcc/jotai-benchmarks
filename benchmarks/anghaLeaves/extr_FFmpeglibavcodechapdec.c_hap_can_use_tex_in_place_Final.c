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
struct TYPE_5__ {int chunk_count; TYPE_1__* chunks; } ;
struct TYPE_4__ {size_t compressed_offset; scalar_t__ compressor; scalar_t__ compressed_size; } ;
typedef  TYPE_2__ HapContext ;

/* Variables and functions */
 scalar_t__ HAP_COMP_NONE ; 

__attribute__((used)) static int hap_can_use_tex_in_place(HapContext *ctx)
{
    int i;
    size_t running_offset = 0;
    for (i = 0; i < ctx->chunk_count; i++) {
        if (ctx->chunks[i].compressed_offset != running_offset
            || ctx->chunks[i].compressor != HAP_COMP_NONE)
            return 0;
        running_offset += ctx->chunks[i].compressed_size;
    }
    return 1;
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
            ctx[_i0].chunk_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__chunks0 = 1;
          ctx[_i0].chunks = (struct TYPE_4__ *) malloc(_len_ctx__i0__chunks0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__chunks0; _j0++) {
            ctx[_i0].chunks->compressed_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].chunks->compressor = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].chunks->compressed_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hap_can_use_tex_in_place(ctx);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].chunks);
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
