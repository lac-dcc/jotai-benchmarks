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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int uint ;
struct xfs_dir2_leaf_hdr {int dummy; } ;
struct xfs_dir2_leaf_entry {int dummy; } ;
struct xfs_da_geometry {int blksize; } ;

/* Variables and functions */

__attribute__((used)) static int
xfs_dir2_max_leaf_ents(struct xfs_da_geometry *geo)
{
	return (geo->blksize - sizeof(struct xfs_dir2_leaf_hdr)) /
		(uint)sizeof(struct xfs_dir2_leaf_entry);
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

    // big-arr
    case 0:
    {
          int _len_geo0 = 1;
          struct xfs_da_geometry * geo = (struct xfs_da_geometry *) malloc(_len_geo0*sizeof(struct xfs_da_geometry));
          for(int _i0 = 0; _i0 < _len_geo0; _i0++) {
            geo->blksize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xfs_dir2_max_leaf_ents(geo);
          printf("%d\n", benchRet); 
          free(geo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
