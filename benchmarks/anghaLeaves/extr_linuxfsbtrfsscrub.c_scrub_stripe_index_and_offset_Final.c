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
typedef  int u64 ;

/* Variables and functions */
 int BTRFS_BLOCK_GROUP_RAID56_MASK ; 
 int RAID5_P_STRIPE ; 
 int RAID6_Q_STRIPE ; 

__attribute__((used)) static inline void scrub_stripe_index_and_offset(u64 logical, u64 map_type,
						 u64 *raid_map,
						 u64 mapped_length,
						 int nstripes, int mirror,
						 int *stripe_index,
						 u64 *stripe_offset)
{
	int i;

	if (map_type & BTRFS_BLOCK_GROUP_RAID56_MASK) {
		/* RAID5/6 */
		for (i = 0; i < nstripes; i++) {
			if (raid_map[i] == RAID6_Q_STRIPE ||
			    raid_map[i] == RAID5_P_STRIPE)
				continue;

			if (logical >= raid_map[i] &&
			    logical < raid_map[i] + mapped_length)
				break;
		}

		*stripe_index = i;
		*stripe_offset = logical - raid_map[i];
	} else {
		/* The other RAID type */
		*stripe_index = mirror;
		*stripe_offset = 0;
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
          int logical = 100;
          int map_type = 100;
          int mapped_length = 100;
          int nstripes = 100;
          int mirror = 100;
          int _len_raid_map0 = 1;
          int * raid_map = (int *) malloc(_len_raid_map0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_raid_map0; _i0++) {
            raid_map[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stripe_index0 = 1;
          int * stripe_index = (int *) malloc(_len_stripe_index0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_stripe_index0; _i0++) {
            stripe_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stripe_offset0 = 1;
          int * stripe_offset = (int *) malloc(_len_stripe_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_stripe_offset0; _i0++) {
            stripe_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          scrub_stripe_index_and_offset(logical,map_type,raid_map,mapped_length,nstripes,mirror,stripe_index,stripe_offset);
          free(raid_map);
          free(stripe_index);
          free(stripe_offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
