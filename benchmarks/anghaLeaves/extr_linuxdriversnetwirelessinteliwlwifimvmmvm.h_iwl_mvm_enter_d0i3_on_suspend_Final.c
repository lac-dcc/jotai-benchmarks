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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct iwl_mvm {TYPE_1__* trans; } ;
struct TYPE_2__ {scalar_t__ system_pm_mode; scalar_t__ runtime_pm_mode; } ;

/* Variables and functions */
 scalar_t__ IWL_PLAT_PM_MODE_D0I3 ; 

__attribute__((used)) static inline bool iwl_mvm_enter_d0i3_on_suspend(struct iwl_mvm *mvm)
{
	/* For now we only use this mode to differentiate between
	 * slave transports, which handle D0i3 entry in suspend by
	 * themselves in conjunction with runtime PM D0i3.  So, this
	 * function is used to check whether we need to do anything
	 * when entering suspend or if the transport layer has already
	 * done it.
	 */
	return (mvm->trans->system_pm_mode == IWL_PLAT_PM_MODE_D0I3) &&
		(mvm->trans->runtime_pm_mode != IWL_PLAT_PM_MODE_D0I3);
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
              int _len_mvm__i0__trans0 = 1;
          mvm[_i0].trans = (struct TYPE_2__ *) malloc(_len_mvm__i0__trans0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mvm__i0__trans0; _j0++) {
            mvm[_i0].trans->system_pm_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        mvm[_i0].trans->runtime_pm_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = iwl_mvm_enter_d0i3_on_suspend(mvm);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mvm0; _aux++) {
          free(mvm[_aux].trans);
          }
          free(mvm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
