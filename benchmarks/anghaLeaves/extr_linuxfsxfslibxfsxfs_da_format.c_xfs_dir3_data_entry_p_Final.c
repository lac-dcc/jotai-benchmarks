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
       1            big-arr-10x\n\
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
struct xfs_dir3_data_hdr {int dummy; } ;
struct xfs_dir2_data_hdr {int dummy; } ;
struct xfs_dir2_data_entry {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct xfs_dir2_data_entry *
xfs_dir3_data_entry_p(struct xfs_dir2_data_hdr *hdr)
{
	return (struct xfs_dir2_data_entry *)
		((char *)hdr + sizeof(struct xfs_dir3_data_hdr));
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
          int _len_hdr0 = 65025;
          struct xfs_dir2_data_hdr * hdr = (struct xfs_dir2_data_hdr *) malloc(_len_hdr0*sizeof(struct xfs_dir2_data_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct xfs_dir2_data_entry * benchRet = xfs_dir3_data_entry_p(hdr);
          printf("%d\n", (*benchRet).dummy);
          free(hdr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_hdr0 = 100;
          struct xfs_dir2_data_hdr * hdr = (struct xfs_dir2_data_hdr *) malloc(_len_hdr0*sizeof(struct xfs_dir2_data_hdr));
          for(int _i0 = 0; _i0 < _len_hdr0; _i0++) {
            hdr[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct xfs_dir2_data_entry * benchRet = xfs_dir3_data_entry_p(hdr);
          printf("%d\n", (*benchRet).dummy);
          free(hdr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
