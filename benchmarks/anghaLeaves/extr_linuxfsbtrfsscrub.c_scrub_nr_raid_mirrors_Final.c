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
struct btrfs_bio {int map_type; scalar_t__ num_stripes; } ;

/* Variables and functions */
 int BTRFS_BLOCK_GROUP_RAID5 ; 
 int BTRFS_BLOCK_GROUP_RAID6 ; 

__attribute__((used)) static inline int scrub_nr_raid_mirrors(struct btrfs_bio *bbio)
{
	if (bbio->map_type & BTRFS_BLOCK_GROUP_RAID5)
		return 2;
	else if (bbio->map_type & BTRFS_BLOCK_GROUP_RAID6)
		return 3;
	else
		return (int)bbio->num_stripes;
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
          int _len_bbio0 = 1;
          struct btrfs_bio * bbio = (struct btrfs_bio *) malloc(_len_bbio0*sizeof(struct btrfs_bio));
          for(int _i0 = 0; _i0 < _len_bbio0; _i0++) {
            bbio[_i0].map_type = ((-2 * (next_i()%2)) + 1) * next_i();
        bbio[_i0].num_stripes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = scrub_nr_raid_mirrors(bbio);
          printf("%d\n", benchRet); 
          free(bbio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
