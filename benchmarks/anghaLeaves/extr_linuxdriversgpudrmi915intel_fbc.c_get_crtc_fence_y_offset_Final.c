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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned int y; unsigned int adjusted_y; } ;
struct TYPE_4__ {TYPE_1__ plane; } ;
struct intel_fbc {TYPE_2__ state_cache; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int get_crtc_fence_y_offset(struct intel_fbc *fbc)
{
	return fbc->state_cache.plane.y - fbc->state_cache.plane.adjusted_y;
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
          int _len_fbc0 = 1;
          struct intel_fbc * fbc = (struct intel_fbc *) malloc(_len_fbc0*sizeof(struct intel_fbc));
          for(int _i0 = 0; _i0 < _len_fbc0; _i0++) {
            fbc[_i0].state_cache.plane.y = ((-2 * (next_i()%2)) + 1) * next_i();
        fbc[_i0].state_cache.plane.adjusted_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_crtc_fence_y_offset(fbc);
          printf("%u\n", benchRet); 
          free(fbc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_fbc0 = 65025;
          struct intel_fbc * fbc = (struct intel_fbc *) malloc(_len_fbc0*sizeof(struct intel_fbc));
          for(int _i0 = 0; _i0 < _len_fbc0; _i0++) {
            fbc[_i0].state_cache.plane.y = ((-2 * (next_i()%2)) + 1) * next_i();
        fbc[_i0].state_cache.plane.adjusted_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_crtc_fence_y_offset(fbc);
          printf("%u\n", benchRet); 
          free(fbc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_fbc0 = 100;
          struct intel_fbc * fbc = (struct intel_fbc *) malloc(_len_fbc0*sizeof(struct intel_fbc));
          for(int _i0 = 0; _i0 < _len_fbc0; _i0++) {
            fbc[_i0].state_cache.plane.y = ((-2 * (next_i()%2)) + 1) * next_i();
        fbc[_i0].state_cache.plane.adjusted_y = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = get_crtc_fence_y_offset(fbc);
          printf("%u\n", benchRet); 
          free(fbc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
