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
struct blk_mq_hw_ctx {scalar_t__ tags; scalar_t__ nr_ctx; } ;

/* Variables and functions */

__attribute__((used)) static inline bool blk_mq_hw_queue_mapped(struct blk_mq_hw_ctx *hctx)
{
	return hctx->nr_ctx && hctx->tags;
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
          int _len_hctx0 = 1;
          struct blk_mq_hw_ctx * hctx = (struct blk_mq_hw_ctx *) malloc(_len_hctx0*sizeof(struct blk_mq_hw_ctx));
          for(int _i0 = 0; _i0 < _len_hctx0; _i0++) {
            hctx[_i0].tags = ((-2 * (next_i()%2)) + 1) * next_i();
        hctx[_i0].nr_ctx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = blk_mq_hw_queue_mapped(hctx);
          printf("%d\n", benchRet); 
          free(hctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
