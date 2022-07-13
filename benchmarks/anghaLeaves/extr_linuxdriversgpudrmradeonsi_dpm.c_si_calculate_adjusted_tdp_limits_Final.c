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
typedef  int u32 ;
struct TYPE_3__ {int tdp_limit; int near_tdp_limit_adjusted; scalar_t__ tdp_od_limit; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int si_calculate_adjusted_tdp_limits(struct radeon_device *rdev,
					    bool adjust_polarity,
					    u32 tdp_adjustment,
					    u32 *tdp_limit,
					    u32 *near_tdp_limit)
{
	u32 adjustment_delta, max_tdp_limit;

	if (tdp_adjustment > (u32)rdev->pm.dpm.tdp_od_limit)
		return -EINVAL;

	max_tdp_limit = ((100 + 100) * rdev->pm.dpm.tdp_limit) / 100;

	if (adjust_polarity) {
		*tdp_limit = ((100 + tdp_adjustment) * rdev->pm.dpm.tdp_limit) / 100;
		*near_tdp_limit = rdev->pm.dpm.near_tdp_limit_adjusted + (*tdp_limit - rdev->pm.dpm.tdp_limit);
	} else {
		*tdp_limit = ((100 - tdp_adjustment) * rdev->pm.dpm.tdp_limit) / 100;
		adjustment_delta  = rdev->pm.dpm.tdp_limit - *tdp_limit;
		if (adjustment_delta < rdev->pm.dpm.near_tdp_limit_adjusted)
			*near_tdp_limit = rdev->pm.dpm.near_tdp_limit_adjusted - adjustment_delta;
		else
			*near_tdp_limit = 0;
	}

	if ((*tdp_limit <= 0) || (*tdp_limit > max_tdp_limit))
		return -EINVAL;
	if ((*near_tdp_limit <= 0) || (*near_tdp_limit > *tdp_limit))
		return -EINVAL;

	return 0;
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
          int adjust_polarity = 100;
          int tdp_adjustment = 100;
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.dpm.tdp_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.dpm.near_tdp_limit_adjusted = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.dpm.tdp_od_limit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tdp_limit0 = 1;
          int * tdp_limit = (int *) malloc(_len_tdp_limit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tdp_limit0; _i0++) {
            tdp_limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_near_tdp_limit0 = 1;
          int * near_tdp_limit = (int *) malloc(_len_near_tdp_limit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_near_tdp_limit0; _i0++) {
            near_tdp_limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = si_calculate_adjusted_tdp_limits(rdev,adjust_polarity,tdp_adjustment,tdp_limit,near_tdp_limit);
          printf("%d\n", benchRet); 
          free(rdev);
          free(tdp_limit);
          free(near_tdp_limit);
        
        break;
    }
    // big-arr
    case 1:
    {
          int adjust_polarity = 255;
          int tdp_adjustment = 255;
          int _len_rdev0 = 65025;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.dpm.tdp_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.dpm.near_tdp_limit_adjusted = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.dpm.tdp_od_limit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tdp_limit0 = 65025;
          int * tdp_limit = (int *) malloc(_len_tdp_limit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tdp_limit0; _i0++) {
            tdp_limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_near_tdp_limit0 = 65025;
          int * near_tdp_limit = (int *) malloc(_len_near_tdp_limit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_near_tdp_limit0; _i0++) {
            near_tdp_limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = si_calculate_adjusted_tdp_limits(rdev,adjust_polarity,tdp_adjustment,tdp_limit,near_tdp_limit);
          printf("%d\n", benchRet); 
          free(rdev);
          free(tdp_limit);
          free(near_tdp_limit);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int adjust_polarity = 10;
          int tdp_adjustment = 10;
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
            rdev[_i0].pm.dpm.tdp_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.dpm.near_tdp_limit_adjusted = ((-2 * (next_i()%2)) + 1) * next_i();
        rdev[_i0].pm.dpm.tdp_od_limit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tdp_limit0 = 100;
          int * tdp_limit = (int *) malloc(_len_tdp_limit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tdp_limit0; _i0++) {
            tdp_limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_near_tdp_limit0 = 100;
          int * near_tdp_limit = (int *) malloc(_len_near_tdp_limit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_near_tdp_limit0; _i0++) {
            near_tdp_limit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = si_calculate_adjusted_tdp_limits(rdev,adjust_polarity,tdp_adjustment,tdp_limit,near_tdp_limit);
          printf("%d\n", benchRet); 
          free(rdev);
          free(tdp_limit);
          free(near_tdp_limit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
