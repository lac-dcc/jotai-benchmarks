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
typedef  int /*<<< orphan*/  u32 ;
struct hv_ring_buffer_info {TYPE_1__* ring_buffer; } ;
struct TYPE_2__ {int /*<<< orphan*/  write_index; } ;

/* Variables and functions */

__attribute__((used)) static inline u32
hv_get_next_write_location(struct hv_ring_buffer_info *ring_info)
{
	u32 next = ring_info->ring_buffer->write_index;

	return next;
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
          int _len_ring_info0 = 1;
          struct hv_ring_buffer_info * ring_info = (struct hv_ring_buffer_info *) malloc(_len_ring_info0*sizeof(struct hv_ring_buffer_info));
          for(int _i0 = 0; _i0 < _len_ring_info0; _i0++) {
              int _len_ring_info__i0__ring_buffer0 = 1;
          ring_info[_i0].ring_buffer = (struct TYPE_2__ *) malloc(_len_ring_info__i0__ring_buffer0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ring_info__i0__ring_buffer0; _j0++) {
            ring_info[_i0].ring_buffer->write_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hv_get_next_write_location(ring_info);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ring_info0; _aux++) {
          free(ring_info[_aux].ring_buffer);
          }
          free(ring_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
