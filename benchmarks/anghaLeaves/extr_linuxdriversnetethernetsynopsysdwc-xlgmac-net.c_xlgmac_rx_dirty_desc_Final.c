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
struct xlgmac_ring {unsigned int cur; unsigned int dirty; } ;

/* Variables and functions */

__attribute__((used)) static inline unsigned int xlgmac_rx_dirty_desc(struct xlgmac_ring *ring)
{
	return (ring->cur - ring->dirty);
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
          int _len_ring0 = 1;
          struct xlgmac_ring * ring = (struct xlgmac_ring *) malloc(_len_ring0*sizeof(struct xlgmac_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].cur = ((-2 * (next_i()%2)) + 1) * next_i();
        ring[_i0].dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = xlgmac_rx_dirty_desc(ring);
          printf("%u\n", benchRet); 
          free(ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
