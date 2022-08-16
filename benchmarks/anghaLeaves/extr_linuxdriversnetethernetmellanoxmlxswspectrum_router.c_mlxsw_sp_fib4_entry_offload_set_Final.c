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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct mlxsw_sp_nexthop_group {int count; struct mlxsw_sp_nexthop* nexthops; } ;
struct TYPE_4__ {TYPE_1__* fib_nh; } ;
struct mlxsw_sp_nexthop {TYPE_2__ key; scalar_t__ offloaded; } ;
struct mlxsw_sp_fib_entry {scalar_t__ type; struct mlxsw_sp_nexthop_group* nh_group; } ;
struct TYPE_3__ {int /*<<< orphan*/  nh_flags; } ;

/* Variables and functions */
 scalar_t__ MLXSW_SP_FIB_ENTRY_TYPE_IPIP_DECAP ; 
 scalar_t__ MLXSW_SP_FIB_ENTRY_TYPE_LOCAL ; 
 int /*<<< orphan*/  RTNH_F_OFFLOAD ; 

__attribute__((used)) static void
mlxsw_sp_fib4_entry_offload_set(struct mlxsw_sp_fib_entry *fib_entry)
{
	struct mlxsw_sp_nexthop_group *nh_grp = fib_entry->nh_group;
	int i;

	if (fib_entry->type == MLXSW_SP_FIB_ENTRY_TYPE_LOCAL ||
	    fib_entry->type == MLXSW_SP_FIB_ENTRY_TYPE_IPIP_DECAP) {
		nh_grp->nexthops->key.fib_nh->nh_flags |= RTNH_F_OFFLOAD;
		return;
	}

	for (i = 0; i < nh_grp->count; i++) {
		struct mlxsw_sp_nexthop *nh = &nh_grp->nexthops[i];

		if (nh->offloaded)
			nh->key.fib_nh->nh_flags |= RTNH_F_OFFLOAD;
		else
			nh->key.fib_nh->nh_flags &= ~RTNH_F_OFFLOAD;
	}
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
          int _len_fib_entry0 = 1;
          struct mlxsw_sp_fib_entry * fib_entry = (struct mlxsw_sp_fib_entry *) malloc(_len_fib_entry0*sizeof(struct mlxsw_sp_fib_entry));
          for(int _i0 = 0; _i0 < _len_fib_entry0; _i0++) {
            fib_entry[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fib_entry__i0__nh_group0 = 1;
          fib_entry[_i0].nh_group = (struct mlxsw_sp_nexthop_group *) malloc(_len_fib_entry__i0__nh_group0*sizeof(struct mlxsw_sp_nexthop_group));
          for(int _j0 = 0; _j0 < _len_fib_entry__i0__nh_group0; _j0++) {
            fib_entry[_i0].nh_group->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fib_entry__i0__nh_group_nexthops0 = 1;
          fib_entry[_i0].nh_group->nexthops = (struct mlxsw_sp_nexthop *) malloc(_len_fib_entry__i0__nh_group_nexthops0*sizeof(struct mlxsw_sp_nexthop));
          for(int _j0 = 0; _j0 < _len_fib_entry__i0__nh_group_nexthops0; _j0++) {
              int _len_fib_entry__i0__nh_group_nexthops_key_fib_nh0 = 1;
          fib_entry[_i0].nh_group->nexthops->key.fib_nh = (struct TYPE_3__ *) malloc(_len_fib_entry__i0__nh_group_nexthops_key_fib_nh0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_fib_entry__i0__nh_group_nexthops_key_fib_nh0; _j0++) {
            fib_entry[_i0].nh_group->nexthops->key.fib_nh->nh_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fib_entry[_i0].nh_group->nexthops->offloaded = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          mlxsw_sp_fib4_entry_offload_set(fib_entry);
          for(int _aux = 0; _aux < _len_fib_entry0; _aux++) {
          free(fib_entry[_aux].nh_group);
          }
          free(fib_entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
