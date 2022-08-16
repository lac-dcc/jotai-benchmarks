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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct tb_ring {int hop; TYPE_1__* nhi; int /*<<< orphan*/  is_tx; } ;
struct TYPE_2__ {scalar_t__ hop_count; } ;

/* Variables and functions */

__attribute__((used)) static int ring_interrupt_index(struct tb_ring *ring)
{
	int bit = ring->hop;
	if (!ring->is_tx)
		bit += ring->nhi->hop_count;
	return bit;
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
          struct tb_ring * ring = (struct tb_ring *) malloc(_len_ring0*sizeof(struct tb_ring));
          for(int _i0 = 0; _i0 < _len_ring0; _i0++) {
            ring[_i0].hop = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ring__i0__nhi0 = 1;
          ring[_i0].nhi = (struct TYPE_2__ *) malloc(_len_ring__i0__nhi0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ring__i0__nhi0; _j0++) {
            ring[_i0].nhi->hop_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ring[_i0].is_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ring_interrupt_index(ring);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ring0; _aux++) {
          free(ring[_aux].nhi);
          }
          free(ring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
