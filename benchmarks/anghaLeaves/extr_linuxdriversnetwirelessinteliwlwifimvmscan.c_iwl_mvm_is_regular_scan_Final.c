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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct iwl_mvm_scan_params {int n_scan_plans; TYPE_1__* scan_plans; } ;
struct TYPE_2__ {int iterations; } ;

/* Variables and functions */

__attribute__((used)) static inline bool iwl_mvm_is_regular_scan(struct iwl_mvm_scan_params *params)
{
	return params->n_scan_plans == 1 &&
		params->scan_plans[0].iterations == 1;
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
          int _len_params0 = 1;
          struct iwl_mvm_scan_params * params = (struct iwl_mvm_scan_params *) malloc(_len_params0*sizeof(struct iwl_mvm_scan_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].n_scan_plans = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_params__i0__scan_plans0 = 1;
          params[_i0].scan_plans = (struct TYPE_2__ *) malloc(_len_params__i0__scan_plans0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_params__i0__scan_plans0; _j0++) {
            params[_i0].scan_plans->iterations = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = iwl_mvm_is_regular_scan(params);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_params0; _aux++) {
          free(params[_aux].scan_plans);
          }
          free(params);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_params0 = 65025;
          struct iwl_mvm_scan_params * params = (struct iwl_mvm_scan_params *) malloc(_len_params0*sizeof(struct iwl_mvm_scan_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].n_scan_plans = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_params__i0__scan_plans0 = 1;
          params[_i0].scan_plans = (struct TYPE_2__ *) malloc(_len_params__i0__scan_plans0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_params__i0__scan_plans0; _j0++) {
            params[_i0].scan_plans->iterations = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = iwl_mvm_is_regular_scan(params);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_params0; _aux++) {
          free(params[_aux].scan_plans);
          }
          free(params);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_params0 = 100;
          struct iwl_mvm_scan_params * params = (struct iwl_mvm_scan_params *) malloc(_len_params0*sizeof(struct iwl_mvm_scan_params));
          for(int _i0 = 0; _i0 < _len_params0; _i0++) {
            params[_i0].n_scan_plans = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_params__i0__scan_plans0 = 1;
          params[_i0].scan_plans = (struct TYPE_2__ *) malloc(_len_params__i0__scan_plans0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_params__i0__scan_plans0; _j0++) {
            params[_i0].scan_plans->iterations = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = iwl_mvm_is_regular_scan(params);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_params0; _aux++) {
          free(params[_aux].scan_plans);
          }
          free(params);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
