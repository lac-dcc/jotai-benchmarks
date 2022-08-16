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
struct TYPE_2__ {int valid_bitmask; scalar_t__ lqm_state; } ;
struct ifnet {TYPE_1__ if_interface_state; } ;

/* Variables and functions */
 scalar_t__ IFNET_LQM_THRESH_ABORT ; 
 int IF_INTERFACE_STATE_LQM_STATE_VALID ; 

__attribute__((used)) static bool
necp_route_is_lqm_abort(struct ifnet *ifp, struct ifnet *delegated_ifp)
{
	if (ifp != NULL &&
		(ifp->if_interface_state.valid_bitmask & IF_INTERFACE_STATE_LQM_STATE_VALID) &&
		ifp->if_interface_state.lqm_state == IFNET_LQM_THRESH_ABORT) {
		return true;
	}
	if (delegated_ifp != NULL &&
		(delegated_ifp->if_interface_state.valid_bitmask & IF_INTERFACE_STATE_LQM_STATE_VALID) &&
		delegated_ifp->if_interface_state.lqm_state == IFNET_LQM_THRESH_ABORT) {
		return true;
	}
	return false;
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
          int _len_ifp0 = 1;
          struct ifnet * ifp = (struct ifnet *) malloc(_len_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
            ifp[_i0].if_interface_state.valid_bitmask = ((-2 * (next_i()%2)) + 1) * next_i();
        ifp[_i0].if_interface_state.lqm_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_delegated_ifp0 = 1;
          struct ifnet * delegated_ifp = (struct ifnet *) malloc(_len_delegated_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_delegated_ifp0; _i0++) {
            delegated_ifp[_i0].if_interface_state.valid_bitmask = ((-2 * (next_i()%2)) + 1) * next_i();
        delegated_ifp[_i0].if_interface_state.lqm_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = necp_route_is_lqm_abort(ifp,delegated_ifp);
          printf("%d\n", benchRet); 
          free(ifp);
          free(delegated_ifp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
