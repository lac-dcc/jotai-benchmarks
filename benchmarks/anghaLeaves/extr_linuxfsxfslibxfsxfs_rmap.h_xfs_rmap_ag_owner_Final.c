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
typedef  int /*<<< orphan*/  uint64_t ;
struct xfs_owner_info {scalar_t__ oi_flags; scalar_t__ oi_offset; int /*<<< orphan*/  oi_owner; } ;

/* Variables and functions */

__attribute__((used)) static inline void
xfs_rmap_ag_owner(
	struct xfs_owner_info	*oi,
	uint64_t		owner)
{
	oi->oi_owner = owner;
	oi->oi_offset = 0;
	oi->oi_flags = 0;
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
          int owner = 100;
          int _len_oi0 = 1;
          struct xfs_owner_info * oi = (struct xfs_owner_info *) malloc(_len_oi0*sizeof(struct xfs_owner_info));
          for(int _i0 = 0; _i0 < _len_oi0; _i0++) {
            oi[_i0].oi_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        oi[_i0].oi_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        oi[_i0].oi_owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xfs_rmap_ag_owner(oi,owner);
          free(oi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
