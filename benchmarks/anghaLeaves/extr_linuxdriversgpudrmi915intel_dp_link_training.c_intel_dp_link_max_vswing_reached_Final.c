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
struct intel_dp {int lane_count; int* train_set; } ;

/* Variables and functions */
 int DP_TRAIN_MAX_SWING_REACHED ; 

__attribute__((used)) static bool intel_dp_link_max_vswing_reached(struct intel_dp *intel_dp)
{
	int lane;

	for (lane = 0; lane < intel_dp->lane_count; lane++)
		if ((intel_dp->train_set[lane] &
		     DP_TRAIN_MAX_SWING_REACHED) == 0)
			return false;

	return true;
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
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_intel_dp0 = 65025;
          struct intel_dp * intel_dp = (struct intel_dp *) malloc(_len_intel_dp0*sizeof(struct intel_dp));
          for(int _i0 = 0; _i0 < _len_intel_dp0; _i0++) {
              intel_dp[_i0].lane_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_intel_dp__i0__train_set0 = 1;
          intel_dp[_i0].train_set = (int *) malloc(_len_intel_dp__i0__train_set0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intel_dp__i0__train_set0; _j0++) {
            intel_dp[_i0].train_set[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = intel_dp_link_max_vswing_reached(intel_dp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_intel_dp0; _aux++) {
          free(intel_dp[_aux].train_set);
          }
          free(intel_dp);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_intel_dp0 = 100;
          struct intel_dp * intel_dp = (struct intel_dp *) malloc(_len_intel_dp0*sizeof(struct intel_dp));
          for(int _i0 = 0; _i0 < _len_intel_dp0; _i0++) {
              intel_dp[_i0].lane_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_intel_dp__i0__train_set0 = 1;
          intel_dp[_i0].train_set = (int *) malloc(_len_intel_dp__i0__train_set0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intel_dp__i0__train_set0; _j0++) {
            intel_dp[_i0].train_set[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = intel_dp_link_max_vswing_reached(intel_dp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_intel_dp0; _aux++) {
          free(intel_dp[_aux].train_set);
          }
          free(intel_dp);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int _len_intel_dp0 = 1;
          struct intel_dp * intel_dp = (struct intel_dp *) malloc(_len_intel_dp0*sizeof(struct intel_dp));
          for(int _i0 = 0; _i0 < _len_intel_dp0; _i0++) {
              intel_dp[_i0].lane_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_intel_dp__i0__train_set0 = 1;
          intel_dp[_i0].train_set = (int *) malloc(_len_intel_dp__i0__train_set0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intel_dp__i0__train_set0; _j0++) {
            intel_dp[_i0].train_set[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = intel_dp_link_max_vswing_reached(intel_dp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_intel_dp0; _aux++) {
          free(intel_dp[_aux].train_set);
          }
          free(intel_dp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
