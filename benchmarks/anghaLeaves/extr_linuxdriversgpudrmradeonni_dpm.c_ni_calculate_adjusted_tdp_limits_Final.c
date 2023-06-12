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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_3__ {int tdp_limit; int near_tdp_limit; scalar_t__ tdp_od_limit; } ;
struct TYPE_4__ {TYPE_1__ dpm; } ;
struct radeon_device {TYPE_2__ pm; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int ni_calculate_adjusted_tdp_limits(struct radeon_device *rdev,
					    bool adjust_polarity,
					    u32 tdp_adjustment,
					    u32 *tdp_limit,
					    u32 *near_tdp_limit)
{
	if (tdp_adjustment > (u32)rdev->pm.dpm.tdp_od_limit)
		return -EINVAL;

	if (adjust_polarity) {
		*tdp_limit = ((100 + tdp_adjustment) * rdev->pm.dpm.tdp_limit) / 100;
		*near_tdp_limit = rdev->pm.dpm.near_tdp_limit + (*tdp_limit - rdev->pm.dpm.tdp_limit);
	} else {
		*tdp_limit = ((100 - tdp_adjustment) * rdev->pm.dpm.tdp_limit) / 100;
		*near_tdp_limit = rdev->pm.dpm.near_tdp_limit - (rdev->pm.dpm.tdp_limit - *tdp_limit);
	}

	return 0;
}

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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int adjust_polarity = 100;
        
          int tdp_adjustment = 100;
        
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              rdev[_i0].pm.dpm.tdp_limit = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].pm.dpm.near_tdp_limit = ((-2 * (next_i()%2)) + 1) * next_i();
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
        
          int benchRet = ni_calculate_adjusted_tdp_limits(rdev,adjust_polarity,tdp_adjustment,tdp_limit,near_tdp_limit);
          printf("%d\n", benchRet); 
          free(rdev);
          free(tdp_limit);
          free(near_tdp_limit);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int adjust_polarity = 255;
        
          int tdp_adjustment = 255;
        
          int _len_rdev0 = 65025;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              rdev[_i0].pm.dpm.tdp_limit = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].pm.dpm.near_tdp_limit = ((-2 * (next_i()%2)) + 1) * next_i();
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
        
          int benchRet = ni_calculate_adjusted_tdp_limits(rdev,adjust_polarity,tdp_adjustment,tdp_limit,near_tdp_limit);
          printf("%d\n", benchRet); 
          free(rdev);
          free(tdp_limit);
          free(near_tdp_limit);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int adjust_polarity = 10;
        
          int tdp_adjustment = 10;
        
          int _len_rdev0 = 100;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              rdev[_i0].pm.dpm.tdp_limit = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].pm.dpm.near_tdp_limit = ((-2 * (next_i()%2)) + 1) * next_i();
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
        
          int benchRet = ni_calculate_adjusted_tdp_limits(rdev,adjust_polarity,tdp_adjustment,tdp_limit,near_tdp_limit);
          printf("%d\n", benchRet); 
          free(rdev);
          free(tdp_limit);
          free(near_tdp_limit);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 38
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 23
          // ------------------------------- 
          // static_instructions_O2 : 23
          // dynamic_instructions_O2 : 23
          // ------------------------------- 
          // static_instructions_O3 : 23
          // dynamic_instructions_O3 : 23
          // ------------------------------- 
          // static_instructions_Ofast : 23
          // dynamic_instructions_Ofast : 23
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 23
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int adjust_polarity = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int tdp_adjustment = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_rdev0 = 1;
          struct radeon_device * rdev = (struct radeon_device *) malloc(_len_rdev0*sizeof(struct radeon_device));
          for(int _i0 = 0; _i0 < _len_rdev0; _i0++) {
              rdev[_i0].pm.dpm.tdp_limit = ((-2 * (next_i()%2)) + 1) * next_i();
          rdev[_i0].pm.dpm.near_tdp_limit = ((-2 * (next_i()%2)) + 1) * next_i();
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
        
          int benchRet = ni_calculate_adjusted_tdp_limits(rdev,adjust_polarity,tdp_adjustment,tdp_limit,near_tdp_limit);
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
