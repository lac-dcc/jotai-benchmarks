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
typedef  int uint32_t ;
struct pp_hwmgr {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int vega12_get_current_activity_percent(
		struct pp_hwmgr *hwmgr,
		uint32_t *activity_percent)
{
	int ret = 0;
	uint32_t current_activity = 50;

#if 0
	ret = smum_send_msg_to_smc_with_parameter(hwmgr, PPSMC_MSG_GetAverageGfxActivity, 0);
	if (!ret) {
		current_activity = smum_get_argument(hwmgr);
		if (current_activity > 100) {
			PP_ASSERT(false,
				  "[GetCurrentActivityPercent] Activity Percentage Exceeds 100!");
			current_activity = 100;
		}
	} else
		PP_ASSERT(false,
			"[GetCurrentActivityPercent] Attempt To Send Get Average Graphics Activity to SMU Failed!");
#endif
	*activity_percent = current_activity;

	return ret;
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
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_activity_percent0 = 1;
          int * activity_percent = (int *) malloc(_len_activity_percent0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_activity_percent0; _i0++) {
            activity_percent[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = vega12_get_current_activity_percent(hwmgr,activity_percent);
          printf("%d\n", benchRet); 
          free(hwmgr);
          free(activity_percent);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
