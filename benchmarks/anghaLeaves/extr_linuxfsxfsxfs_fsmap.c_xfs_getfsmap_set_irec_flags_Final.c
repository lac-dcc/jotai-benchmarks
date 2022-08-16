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
struct xfs_rmap_irec {int /*<<< orphan*/  rm_flags; } ;
struct xfs_fsmap {int fmr_flags; } ;

/* Variables and functions */
 int FMR_OF_ATTR_FORK ; 
 int FMR_OF_EXTENT_MAP ; 
 int FMR_OF_PREALLOC ; 
 int /*<<< orphan*/  XFS_RMAP_ATTR_FORK ; 
 int /*<<< orphan*/  XFS_RMAP_BMBT_BLOCK ; 
 int /*<<< orphan*/  XFS_RMAP_UNWRITTEN ; 

__attribute__((used)) static void
xfs_getfsmap_set_irec_flags(
	struct xfs_rmap_irec	*irec,
	struct xfs_fsmap	*fmr)
{
	irec->rm_flags = 0;
	if (fmr->fmr_flags & FMR_OF_ATTR_FORK)
		irec->rm_flags |= XFS_RMAP_ATTR_FORK;
	if (fmr->fmr_flags & FMR_OF_EXTENT_MAP)
		irec->rm_flags |= XFS_RMAP_BMBT_BLOCK;
	if (fmr->fmr_flags & FMR_OF_PREALLOC)
		irec->rm_flags |= XFS_RMAP_UNWRITTEN;
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
          int _len_irec0 = 1;
          struct xfs_rmap_irec * irec = (struct xfs_rmap_irec *) malloc(_len_irec0*sizeof(struct xfs_rmap_irec));
          for(int _i0 = 0; _i0 < _len_irec0; _i0++) {
            irec[_i0].rm_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fmr0 = 1;
          struct xfs_fsmap * fmr = (struct xfs_fsmap *) malloc(_len_fmr0*sizeof(struct xfs_fsmap));
          for(int _i0 = 0; _i0 < _len_fmr0; _i0++) {
            fmr[_i0].fmr_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xfs_getfsmap_set_irec_flags(irec,fmr);
          free(irec);
          free(fmr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
