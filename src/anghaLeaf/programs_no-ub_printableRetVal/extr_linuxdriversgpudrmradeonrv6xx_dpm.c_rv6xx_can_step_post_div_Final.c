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
       0            big-arr\n\
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

/* Type definitions */
struct rv6xx_sclk_stepping {int post_divider; int vco_frequency; } ;
struct radeon_device {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static bool rv6xx_can_step_post_div(struct radeon_device *rdev,
				    struct rv6xx_sclk_stepping *cur,
				    struct rv6xx_sclk_stepping *target)
{
	return (cur->post_divider > target->post_divider) &&
		((cur->vco_frequency * target->post_divider) <=
		 (target->vco_frequency * (cur->post_divider - 1)));
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

    // big-arr
    case 0:
    {
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cur0 = 1;
          struct rv6xx_sclk_stepping * cur = (struct rv6xx_sclk_stepping *) malloc(_len_cur0*sizeof(struct rv6xx_sclk_stepping));
          for(int _i0 = 0; _i0 < _len_cur0; _i0++) {
            cur->post_divider = ((-2 * (next_i()%2)) + 1) * next_i();
        cur->vco_frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_target0 = 1;
          struct rv6xx_sclk_stepping * target = (struct rv6xx_sclk_stepping *) malloc(_len_target0*sizeof(struct rv6xx_sclk_stepping));
          for(int _i0 = 0; _i0 < _len_target0; _i0++) {
            target->post_divider = ((-2 * (next_i()%2)) + 1) * next_i();
        target->vco_frequency = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rv6xx_can_step_post_div(rdev,cur,target);
          printf("%d\n", benchRet); 
          free(rdev);
          free(cur);
          free(target);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
