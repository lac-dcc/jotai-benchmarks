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
struct fjes_hw {int max_epid; size_t my_epid; TYPE_1__* ep_shm_info; } ;
struct TYPE_2__ {scalar_t__ es_status; scalar_t__ zone; } ;

/* Variables and functions */
 scalar_t__ FJES_ZONING_STATUS_ENABLE ; 
 scalar_t__ FJES_ZONING_ZONE_TYPE_NONE ; 

bool fjes_hw_epid_is_same_zone(struct fjes_hw *hw, int epid)
{
	if (epid >= hw->max_epid)
		return false;

	if ((hw->ep_shm_info[epid].es_status !=
			FJES_ZONING_STATUS_ENABLE) ||
		(hw->ep_shm_info[hw->my_epid].zone ==
			FJES_ZONING_ZONE_TYPE_NONE))
		return false;
	else
		return (hw->ep_shm_info[epid].zone ==
				hw->ep_shm_info[hw->my_epid].zone);
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
          int epid = 100;
          int _len_hw0 = 1;
          struct fjes_hw * hw = (struct fjes_hw *) malloc(_len_hw0*sizeof(struct fjes_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].max_epid = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].my_epid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hw__i0__ep_shm_info0 = 1;
          hw[_i0].ep_shm_info = (struct TYPE_2__ *) malloc(_len_hw__i0__ep_shm_info0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hw__i0__ep_shm_info0; _j0++) {
            hw[_i0].ep_shm_info->es_status = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].ep_shm_info->zone = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fjes_hw_epid_is_same_zone(hw,epid);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].ep_shm_info);
          }
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
