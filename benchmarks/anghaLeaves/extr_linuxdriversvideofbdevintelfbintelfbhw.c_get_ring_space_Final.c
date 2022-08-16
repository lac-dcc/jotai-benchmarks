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
typedef  scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ size; } ;
struct intelfb_info {scalar_t__ ring_tail; scalar_t__ ring_head; TYPE_1__ ring; } ;

/* Variables and functions */
 scalar_t__ RING_MIN_FREE ; 

__attribute__((used)) static  u32 get_ring_space(struct intelfb_info *dinfo)
{
	u32 ring_space;

	if (dinfo->ring_tail >= dinfo->ring_head)
		ring_space = dinfo->ring.size -
			(dinfo->ring_tail - dinfo->ring_head);
	else
		ring_space = dinfo->ring_head - dinfo->ring_tail;

	if (ring_space > RING_MIN_FREE)
		ring_space -= RING_MIN_FREE;
	else
		ring_space = 0;

	return ring_space;
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
          int _len_dinfo0 = 1;
          struct intelfb_info * dinfo = (struct intelfb_info *) malloc(_len_dinfo0*sizeof(struct intelfb_info));
          for(int _i0 = 0; _i0 < _len_dinfo0; _i0++) {
            dinfo[_i0].ring_tail = ((-2 * (next_i()%2)) + 1) * next_i();
        dinfo[_i0].ring_head = ((-2 * (next_i()%2)) + 1) * next_i();
        dinfo[_i0].ring.size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = get_ring_space(dinfo);
          printf("%ld\n", benchRet); 
          free(dinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
