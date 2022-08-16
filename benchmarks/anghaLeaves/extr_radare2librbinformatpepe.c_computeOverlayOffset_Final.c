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
typedef  scalar_t__ ut64 ;

/* Variables and functions */

__attribute__((used)) static void computeOverlayOffset(ut64 offset, ut64 size, ut64 file_size, ut64* largest_offset, ut64* largest_size) {
	if (offset + size <= file_size && offset + size > (*largest_offset + *largest_size)) {
		*largest_offset = offset;
		*largest_size = size;
	}
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
          long offset = 100;
          long size = 100;
          long file_size = 100;
          int _len_largest_offset0 = 1;
          long * largest_offset = (long *) malloc(_len_largest_offset0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_largest_offset0; _i0++) {
            largest_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_largest_size0 = 1;
          long * largest_size = (long *) malloc(_len_largest_size0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_largest_size0; _i0++) {
            largest_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          computeOverlayOffset(offset,size,file_size,largest_offset,largest_size);
          free(largest_offset);
          free(largest_size);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
