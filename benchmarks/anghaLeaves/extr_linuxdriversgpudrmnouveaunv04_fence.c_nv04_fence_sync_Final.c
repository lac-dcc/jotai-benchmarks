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
struct nouveau_fence {int dummy; } ;
struct nouveau_channel {int dummy; } ;

/* Variables and functions */
 int ENODEV ; 

__attribute__((used)) static int
nv04_fence_sync(struct nouveau_fence *fence,
		struct nouveau_channel *prev, struct nouveau_channel *chan)
{
	return -ENODEV;
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
          int _len_fence0 = 1;
          struct nouveau_fence * fence = (struct nouveau_fence *) malloc(_len_fence0*sizeof(struct nouveau_fence));
          for(int _i0 = 0; _i0 < _len_fence0; _i0++) {
            fence[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prev0 = 1;
          struct nouveau_channel * prev = (struct nouveau_channel *) malloc(_len_prev0*sizeof(struct nouveau_channel));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_chan0 = 1;
          struct nouveau_channel * chan = (struct nouveau_channel *) malloc(_len_chan0*sizeof(struct nouveau_channel));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nv04_fence_sync(fence,prev,chan);
          printf("%d\n", benchRet); 
          free(fence);
          free(prev);
          free(chan);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
