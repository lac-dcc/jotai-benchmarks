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
struct xfs_rmap_irec {int rm_owner; } ;
struct xfs_fsmap {int fmr_flags; int fmr_owner; } ;

/* Variables and functions */
 int EINVAL ; 
 int FMR_OF_SPECIAL_OWNER ; 
#define  XFS_FMR_OWN_AG 137 
#define  XFS_FMR_OWN_COW 136 
#define  XFS_FMR_OWN_DEFECTIVE 135 
#define  XFS_FMR_OWN_FREE 134 
#define  XFS_FMR_OWN_FS 133 
#define  XFS_FMR_OWN_INOBT 132 
#define  XFS_FMR_OWN_INODES 131 
#define  XFS_FMR_OWN_LOG 130 
#define  XFS_FMR_OWN_REFC 129 
#define  XFS_FMR_OWN_UNKNOWN 128 
 int XFS_RMAP_OWN_AG ; 
 int XFS_RMAP_OWN_COW ; 
 int XFS_RMAP_OWN_FS ; 
 int XFS_RMAP_OWN_INOBT ; 
 int XFS_RMAP_OWN_INODES ; 
 int XFS_RMAP_OWN_LOG ; 
 int XFS_RMAP_OWN_NULL ; 
 int XFS_RMAP_OWN_REFC ; 
 int XFS_RMAP_OWN_UNKNOWN ; 

__attribute__((used)) static int
xfs_fsmap_owner_to_rmap(
	struct xfs_rmap_irec	*dest,
	struct xfs_fsmap	*src)
{
	if (!(src->fmr_flags & FMR_OF_SPECIAL_OWNER)) {
		dest->rm_owner = src->fmr_owner;
		return 0;
	}

	switch (src->fmr_owner) {
	case 0:			/* "lowest owner id possible" */
	case -1ULL:		/* "highest owner id possible" */
		dest->rm_owner = 0;
		break;
	case XFS_FMR_OWN_FREE:
		dest->rm_owner = XFS_RMAP_OWN_NULL;
		break;
	case XFS_FMR_OWN_UNKNOWN:
		dest->rm_owner = XFS_RMAP_OWN_UNKNOWN;
		break;
	case XFS_FMR_OWN_FS:
		dest->rm_owner = XFS_RMAP_OWN_FS;
		break;
	case XFS_FMR_OWN_LOG:
		dest->rm_owner = XFS_RMAP_OWN_LOG;
		break;
	case XFS_FMR_OWN_AG:
		dest->rm_owner = XFS_RMAP_OWN_AG;
		break;
	case XFS_FMR_OWN_INOBT:
		dest->rm_owner = XFS_RMAP_OWN_INOBT;
		break;
	case XFS_FMR_OWN_INODES:
		dest->rm_owner = XFS_RMAP_OWN_INODES;
		break;
	case XFS_FMR_OWN_REFC:
		dest->rm_owner = XFS_RMAP_OWN_REFC;
		break;
	case XFS_FMR_OWN_COW:
		dest->rm_owner = XFS_RMAP_OWN_COW;
		break;
	case XFS_FMR_OWN_DEFECTIVE:	/* not implemented */
		/* fall through */
	default:
		return -EINVAL;
	}
	return 0;
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
          int _len_dest0 = 1;
          struct xfs_rmap_irec * dest = (struct xfs_rmap_irec *) malloc(_len_dest0*sizeof(struct xfs_rmap_irec));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0].rm_owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          struct xfs_fsmap * src = (struct xfs_fsmap *) malloc(_len_src0*sizeof(struct xfs_fsmap));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0].fmr_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        src[_i0].fmr_owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xfs_fsmap_owner_to_rmap(dest,src);
          printf("%d\n", benchRet); 
          free(dest);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
