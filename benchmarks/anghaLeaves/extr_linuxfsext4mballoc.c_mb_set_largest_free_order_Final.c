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
struct super_block {int s_blocksize_bits; } ;
struct ext4_group_info {int bb_largest_free_order; scalar_t__* bb_counters; } ;

/* Variables and functions */

__attribute__((used)) static void
mb_set_largest_free_order(struct super_block *sb, struct ext4_group_info *grp)
{
	int i;
	int bits;

	grp->bb_largest_free_order = -1; /* uninit */

	bits = sb->s_blocksize_bits + 1;
	for (i = bits; i >= 0; i--) {
		if (grp->bb_counters[i] > 0) {
			grp->bb_largest_free_order = i;
			break;
		}
	}
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
          int _len_sb0 = 1;
          struct super_block * sb = (struct super_block *) malloc(_len_sb0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_sb0; _i0++) {
            sb[_i0].s_blocksize_bits = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_grp0 = 1;
          struct ext4_group_info * grp = (struct ext4_group_info *) malloc(_len_grp0*sizeof(struct ext4_group_info));
          for(int _i0 = 0; _i0 < _len_grp0; _i0++) {
            grp[_i0].bb_largest_free_order = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_grp__i0__bb_counters0 = 1;
          grp[_i0].bb_counters = (long *) malloc(_len_grp__i0__bb_counters0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_grp__i0__bb_counters0; _j0++) {
            grp[_i0].bb_counters[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mb_set_largest_free_order(sb,grp);
          free(sb);
          for(int _aux = 0; _aux < _len_grp0; _aux++) {
          free(grp[_aux].bb_counters);
          }
          free(grp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
