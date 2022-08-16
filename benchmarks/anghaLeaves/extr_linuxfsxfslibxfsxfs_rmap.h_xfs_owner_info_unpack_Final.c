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
struct xfs_owner_info {int oi_flags; int /*<<< orphan*/  oi_offset; int /*<<< orphan*/  oi_owner; } ;

/* Variables and functions */
 int XFS_OWNER_INFO_ATTR_FORK ; 
 int XFS_OWNER_INFO_BMBT_BLOCK ; 
 unsigned int XFS_RMAP_ATTR_FORK ; 
 unsigned int XFS_RMAP_BMBT_BLOCK ; 

__attribute__((used)) static inline void
xfs_owner_info_unpack(
	struct xfs_owner_info	*oinfo,
	uint64_t		*owner,
	uint64_t		*offset,
	unsigned int		*flags)
{
	unsigned int		r = 0;

	*owner = oinfo->oi_owner;
	*offset = oinfo->oi_offset;
	if (oinfo->oi_flags & XFS_OWNER_INFO_ATTR_FORK)
		r |= XFS_RMAP_ATTR_FORK;
	if (oinfo->oi_flags & XFS_OWNER_INFO_BMBT_BLOCK)
		r |= XFS_RMAP_BMBT_BLOCK;
	*flags = r;
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
          int _len_oinfo0 = 1;
          struct xfs_owner_info * oinfo = (struct xfs_owner_info *) malloc(_len_oinfo0*sizeof(struct xfs_owner_info));
          for(int _i0 = 0; _i0 < _len_oinfo0; _i0++) {
            oinfo[_i0].oi_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        oinfo[_i0].oi_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        oinfo[_i0].oi_owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_owner0 = 1;
          int * owner = (int *) malloc(_len_owner0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_owner0; _i0++) {
            owner[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_offset0 = 1;
          int * offset = (int *) malloc(_len_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_offset0; _i0++) {
            offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flags0 = 1;
          unsigned int * flags = (unsigned int *) malloc(_len_flags0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_flags0; _i0++) {
            flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xfs_owner_info_unpack(oinfo,owner,offset,flags);
          free(oinfo);
          free(owner);
          free(offset);
          free(flags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
