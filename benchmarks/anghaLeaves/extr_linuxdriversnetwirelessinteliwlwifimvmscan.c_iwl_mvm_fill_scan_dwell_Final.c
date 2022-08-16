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
struct iwl_scan_dwell {int /*<<< orphan*/  extended; int /*<<< orphan*/  fragmented; int /*<<< orphan*/  passive; int /*<<< orphan*/  active; } ;
struct iwl_mvm {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  IWL_SCAN_DWELL_ACTIVE ; 
 int /*<<< orphan*/  IWL_SCAN_DWELL_EXTENDED ; 
 int /*<<< orphan*/  IWL_SCAN_DWELL_FRAGMENTED ; 
 int /*<<< orphan*/  IWL_SCAN_DWELL_PASSIVE ; 

__attribute__((used)) static void iwl_mvm_fill_scan_dwell(struct iwl_mvm *mvm,
				    struct iwl_scan_dwell *dwell)
{
	dwell->active = IWL_SCAN_DWELL_ACTIVE;
	dwell->passive = IWL_SCAN_DWELL_PASSIVE;
	dwell->fragmented = IWL_SCAN_DWELL_FRAGMENTED;
	dwell->extended = IWL_SCAN_DWELL_EXTENDED;
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
          int _len_mvm0 = 1;
          struct iwl_mvm * mvm = (struct iwl_mvm *) malloc(_len_mvm0*sizeof(struct iwl_mvm));
          for(int _i0 = 0; _i0 < _len_mvm0; _i0++) {
            mvm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dwell0 = 1;
          struct iwl_scan_dwell * dwell = (struct iwl_scan_dwell *) malloc(_len_dwell0*sizeof(struct iwl_scan_dwell));
          for(int _i0 = 0; _i0 < _len_dwell0; _i0++) {
            dwell[_i0].extended = ((-2 * (next_i()%2)) + 1) * next_i();
        dwell[_i0].fragmented = ((-2 * (next_i()%2)) + 1) * next_i();
        dwell[_i0].passive = ((-2 * (next_i()%2)) + 1) * next_i();
        dwell[_i0].active = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iwl_mvm_fill_scan_dwell(mvm,dwell);
          free(mvm);
          free(dwell);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
