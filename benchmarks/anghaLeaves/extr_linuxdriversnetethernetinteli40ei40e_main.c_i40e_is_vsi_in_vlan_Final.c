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
struct TYPE_2__ {scalar_t__ pvid; } ;
struct i40e_vsi {int has_vlan_filter; TYPE_1__ info; } ;

/* Variables and functions */

bool i40e_is_vsi_in_vlan(struct i40e_vsi *vsi)
{
	/* If we have a PVID, always operate in VLAN mode */
	if (vsi->info.pvid)
		return true;

	/* We need to operate in VLAN mode whenever we have any filters with
	 * a VLAN other than I40E_VLAN_ALL. We could check the table each
	 * time, incurring search cost repeatedly. However, we can notice two
	 * things:
	 *
	 * 1) the only place where we can gain a VLAN filter is in
	 *    i40e_add_filter.
	 *
	 * 2) the only place where filters are actually removed is in
	 *    i40e_sync_filters_subtask.
	 *
	 * Thus, we can simply use a boolean value, has_vlan_filters which we
	 * will set to true when we add a VLAN filter in i40e_add_filter. Then
	 * we have to perform the full search after deleting filters in
	 * i40e_sync_filters_subtask, but we already have to search
	 * filters here and can perform the check at the same time. This
	 * results in avoiding embedding a loop for VLAN mode inside another
	 * loop over all the filters, and should maintain correctness as noted
	 * above.
	 */
	return vsi->has_vlan_filter;
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
          int _len_vsi0 = 1;
          struct i40e_vsi * vsi = (struct i40e_vsi *) malloc(_len_vsi0*sizeof(struct i40e_vsi));
          for(int _i0 = 0; _i0 < _len_vsi0; _i0++) {
            vsi[_i0].has_vlan_filter = ((-2 * (next_i()%2)) + 1) * next_i();
        vsi[_i0].info.pvid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = i40e_is_vsi_in_vlan(vsi);
          printf("%d\n", benchRet); 
          free(vsi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
