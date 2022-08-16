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
struct global_pstate_info {scalar_t__ last_gpstate_idx; scalar_t__ last_lpstate_idx; scalar_t__ last_sampled_time; scalar_t__ elapsed_time; scalar_t__ highest_lpstate_idx; } ;
struct cpufreq_policy {struct global_pstate_info* driver_data; } ;

/* Variables and functions */

__attribute__((used)) static inline void reset_gpstates(struct cpufreq_policy *policy)
{
	struct global_pstate_info *gpstates = policy->driver_data;

	gpstates->highest_lpstate_idx = 0;
	gpstates->elapsed_time = 0;
	gpstates->last_sampled_time = 0;
	gpstates->last_lpstate_idx = 0;
	gpstates->last_gpstate_idx = 0;
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
          int _len_policy0 = 1;
          struct cpufreq_policy * policy = (struct cpufreq_policy *) malloc(_len_policy0*sizeof(struct cpufreq_policy));
          for(int _i0 = 0; _i0 < _len_policy0; _i0++) {
              int _len_policy__i0__driver_data0 = 1;
          policy[_i0].driver_data = (struct global_pstate_info *) malloc(_len_policy__i0__driver_data0*sizeof(struct global_pstate_info));
          for(int _j0 = 0; _j0 < _len_policy__i0__driver_data0; _j0++) {
            policy[_i0].driver_data->last_gpstate_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].driver_data->last_lpstate_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].driver_data->last_sampled_time = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].driver_data->elapsed_time = ((-2 * (next_i()%2)) + 1) * next_i();
        policy[_i0].driver_data->highest_lpstate_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          reset_gpstates(policy);
          for(int _aux = 0; _aux < _len_policy0; _aux++) {
          free(policy[_aux].driver_data);
          }
          free(policy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
