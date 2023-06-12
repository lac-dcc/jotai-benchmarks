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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct igbvf_ring {scalar_t__ next_to_clean; scalar_t__ next_to_use; int count; } ;

/* Variables and functions */

__attribute__((used)) static int igbvf_desc_unused(struct igbvf_ring *ring)
{
	if (ring->next_to_clean > ring->next_to_use)
		return ring->next_to_clean - ring->next_to_use - 1;

	return ring->count + ring->next_to_clean - ring->next_to_use - 1;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_ring0 = 65025;
          struct igbvf_ring * ring = (struct igbvf_ring *) malloc(_len_ring0*sizeof(struct igbvf_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              ring[_i0].next_to_clean = ((-2 * (next_i()%2)) + 1) * next_i();
          ring[_i0].next_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
          ring[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = igbvf_desc_unused(ring);
          printf("%d\n", benchRet); 
          free(ring);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_ring0 = 100;
          struct igbvf_ring * ring = (struct igbvf_ring *) malloc(_len_ring0*sizeof(struct igbvf_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              ring[_i0].next_to_clean = ((-2 * (next_i()%2)) + 1) * next_i();
          ring[_i0].next_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
          ring[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = igbvf_desc_unused(ring);
          printf("%d\n", benchRet); 
          free(ring);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_ring0 = 1;
          struct igbvf_ring * ring = (struct igbvf_ring *) malloc(_len_ring0*sizeof(struct igbvf_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
              ring[_i0].next_to_clean = ((-2 * (next_i()%2)) + 1) * next_i();
          ring[_i0].next_to_use = ((-2 * (next_i()%2)) + 1) * next_i();
          ring[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = igbvf_desc_unused(ring);
          printf("%d\n", benchRet); 
          free(ring);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
