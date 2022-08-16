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
struct TYPE_2__ {scalar_t__ curr; scalar_t__ filled; scalar_t__ dirty; } ;
struct velocity_info {TYPE_1__ rx; } ;

/* Variables and functions */

__attribute__((used)) static void velocity_init_rx_ring_indexes(struct velocity_info *vptr)
{
	vptr->rx.dirty = vptr->rx.filled = vptr->rx.curr = 0;
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
          int _len_vptr0 = 1;
          struct velocity_info * vptr = (struct velocity_info *) malloc(_len_vptr0*sizeof(struct velocity_info));
          for(int _i0 = 0; _i0 < _len_vptr0; _i0++) {
            vptr[_i0].rx.curr = ((-2 * (next_i()%2)) + 1) * next_i();
        vptr[_i0].rx.filled = ((-2 * (next_i()%2)) + 1) * next_i();
        vptr[_i0].rx.dirty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          velocity_init_rx_ring_indexes(vptr);
          free(vptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
