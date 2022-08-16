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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {scalar_t__ entropy; scalar_t__ entropy_requested; } ;
typedef  TYPE_1__ RAND_POOL ;

/* Variables and functions */

size_t rand_pool_entropy_needed(RAND_POOL *pool)
{
    if (pool->entropy < pool->entropy_requested)
        return pool->entropy_requested - pool->entropy;

    return 0;
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
          int _len_pool0 = 1;
          struct TYPE_3__ * pool = (struct TYPE_3__ *) malloc(_len_pool0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_pool0; _i0++) {
            pool[_i0].entropy = ((-2 * (next_i()%2)) + 1) * next_i();
        pool[_i0].entropy_requested = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = rand_pool_entropy_needed(pool);
          printf("%lu\n", benchRet); 
          free(pool);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
