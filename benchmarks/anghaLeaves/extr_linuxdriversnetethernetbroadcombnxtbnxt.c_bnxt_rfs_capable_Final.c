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
       1            big-arr-10x\n\
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
struct bnxt {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static bool bnxt_rfs_capable(struct bnxt *bp)
{
#ifdef CONFIG_RFS_ACCEL
	int vnics, max_vnics, max_rss_ctxs;

	if (!(bp->flags & BNXT_FLAG_MSIX_CAP) || !bnxt_can_reserve_rings(bp))
		return false;

	vnics = 1 + bp->rx_nr_rings;
	max_vnics = bnxt_get_max_func_vnics(bp);
	max_rss_ctxs = bnxt_get_max_func_rss_ctxs(bp);

	/* RSS contexts not a limiting factor */
	if (bp->flags & BNXT_FLAG_NEW_RSS_CAP)
		max_rss_ctxs = max_vnics;
	if (vnics > max_vnics || vnics > max_rss_ctxs) {
		if (bp->rx_nr_rings > 1)
			netdev_warn(bp->dev,
				    "Not enough resources to support NTUPLE filters, enough resources for up to %d rx rings\n",
				    min(max_rss_ctxs - 1, max_vnics - 1));
		return false;
	}

	if (!BNXT_NEW_RM(bp))
		return true;

	if (vnics == bp->hw_resc.resv_vnics)
		return true;

	bnxt_hwrm_reserve_rings(bp, 0, 0, 0, 0, vnics);
	if (vnics <= bp->hw_resc.resv_vnics)
		return true;

	netdev_warn(bp->dev, "Unable to reserve resources to support NTUPLE filters.\n");
	bnxt_hwrm_reserve_rings(bp, 0, 0, 0, 0, 1);
	return false;
#else
	return false;
#endif
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
          int _len_bp0 = 1;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnxt_rfs_capable(bp);
          printf("%d\n", benchRet); 
          free(bp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_bp0 = 100;
          struct bnxt * bp = (struct bnxt *) malloc(_len_bp0*sizeof(struct bnxt));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bnxt_rfs_capable(bp);
          printf("%d\n", benchRet); 
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
