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
typedef  scalar_t__ xfs_extlen_t ;
struct xfs_perag {scalar_t__ pagf_flcount; scalar_t__ pagf_freeblks; scalar_t__ pagf_longest; } ;

/* Variables and functions */

xfs_extlen_t
xfs_alloc_longest_free_extent(
	struct xfs_perag	*pag,
	xfs_extlen_t		need,
	xfs_extlen_t		reserved)
{
	xfs_extlen_t		delta = 0;

	/*
	 * If the AGFL needs a recharge, we'll have to subtract that from the
	 * longest extent.
	 */
	if (need > pag->pagf_flcount)
		delta = need - pag->pagf_flcount;

	/*
	 * If we cannot maintain others' reservations with space from the
	 * not-longest freesp extents, we'll have to subtract /that/ from
	 * the longest extent too.
	 */
	if (pag->pagf_freeblks - pag->pagf_longest < reserved)
		delta += reserved - (pag->pagf_freeblks - pag->pagf_longest);

	/*
	 * If the longest extent is long enough to satisfy all the
	 * reservations and AGFL rules in place, we can return this extent.
	 */
	if (pag->pagf_longest > delta)
		return pag->pagf_longest - delta;

	/* Otherwise, let the caller try for 1 block if there's space. */
	return pag->pagf_flcount > 0 || pag->pagf_longest > 0;
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
          long need = 100;
          long reserved = 100;
          int _len_pag0 = 1;
          struct xfs_perag * pag = (struct xfs_perag *) malloc(_len_pag0*sizeof(struct xfs_perag));
          for(int _i0 = 0; _i0 < _len_pag0; _i0++) {
            pag[_i0].pagf_flcount = ((-2 * (next_i()%2)) + 1) * next_i();
        pag[_i0].pagf_freeblks = ((-2 * (next_i()%2)) + 1) * next_i();
        pag[_i0].pagf_longest = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = xfs_alloc_longest_free_extent(pag,need,reserved);
          printf("%ld\n", benchRet); 
          free(pag);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
