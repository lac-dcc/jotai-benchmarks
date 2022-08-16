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
typedef  int /*<<< orphan*/  xfs_dir2_leaf_tail_t ;
typedef  int /*<<< orphan*/  xfs_dir2_leaf_entry_t ;
typedef  int /*<<< orphan*/  xfs_dir2_data_off_t ;
struct xfs_dir3_leaf_hdr {int dummy; } ;
struct xfs_dir3_icleaf_hdr {int count; int stale; scalar_t__ magic; } ;
struct xfs_dir2_leaf_hdr {int dummy; } ;

/* Variables and functions */
 scalar_t__ XFS_DIR2_LEAF1_MAGIC ; 
 scalar_t__ XFS_DIR2_LEAFN_MAGIC ; 

__attribute__((used)) static inline size_t
xfs_dir3_leaf_size(
	struct xfs_dir3_icleaf_hdr	*hdr,
	int				counts)
{
	int	entries;
	int	hdrsize;

	entries = hdr->count - hdr->stale;
	if (hdr->magic == XFS_DIR2_LEAF1_MAGIC ||
	    hdr->magic == XFS_DIR2_LEAFN_MAGIC)
		hdrsize = sizeof(struct xfs_dir2_leaf_hdr);
	else
		hdrsize = sizeof(struct xfs_dir3_leaf_hdr);

	return hdrsize + entries * sizeof(xfs_dir2_leaf_entry_t)
	               + counts * sizeof(xfs_dir2_data_off_t)
		       + sizeof(xfs_dir2_leaf_tail_t);
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
          int counts = 100;
          int _len_hdr0 = 1;
          struct xfs_dir3_icleaf_hdr * hdr = (struct xfs_dir3_icleaf_hdr *) malloc(_len_hdr0*sizeof(struct xfs_dir3_icleaf_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].stale = ((-2 * (next_i()%2)) + 1) * next_i();
        hdr[_i0].magic = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xfs_dir3_leaf_size(hdr,counts);
          printf("%lu\n", benchRet); 
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
