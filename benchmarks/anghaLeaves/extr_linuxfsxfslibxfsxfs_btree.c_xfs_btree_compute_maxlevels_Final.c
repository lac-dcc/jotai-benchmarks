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
typedef  unsigned long uint ;

/* Variables and functions */

uint
xfs_btree_compute_maxlevels(
	uint			*limits,
	unsigned long		len)
{
	uint			level;
	unsigned long		maxblocks;

	maxblocks = (len + limits[0] - 1) / limits[0];
	for (level = 1; maxblocks > 1; level++)
		maxblocks = (maxblocks + limits[1] - 1) / limits[1];
	return level;
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
          unsigned long len = 100;
          int _len_limits0 = 1;
          unsigned long * limits = (unsigned long *) malloc(_len_limits0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_limits0; _i0++) {
            limits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xfs_btree_compute_maxlevels(limits,len);
          printf("%lu\n", benchRet); 
          free(limits);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long len = 10;
          int _len_limits0 = 100;
          unsigned long * limits = (unsigned long *) malloc(_len_limits0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_limits0; _i0++) {
            limits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned long benchRet = xfs_btree_compute_maxlevels(limits,len);
          printf("%lu\n", benchRet); 
          free(limits);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
