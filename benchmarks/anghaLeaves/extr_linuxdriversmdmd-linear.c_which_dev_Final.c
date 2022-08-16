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
struct mddev {int raid_disks; struct linear_conf* private; } ;
struct linear_conf {struct dev_info* disks; } ;
struct dev_info {scalar_t__ end_sector; } ;
typedef  scalar_t__ sector_t ;

/* Variables and functions */

__attribute__((used)) static inline struct dev_info *which_dev(struct mddev *mddev, sector_t sector)
{
	int lo, mid, hi;
	struct linear_conf *conf;

	lo = 0;
	hi = mddev->raid_disks - 1;
	conf = mddev->private;

	/*
	 * Binary Search
	 */

	while (hi > lo) {

		mid = (hi + lo) / 2;
		if (sector < conf->disks[mid].end_sector)
			hi = mid;
		else
			lo = mid + 1;
	}

	return conf->disks + lo;
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
          long sector = 100;
          int _len_mddev0 = 1;
          struct mddev * mddev = (struct mddev *) malloc(_len_mddev0*sizeof(struct mddev));
          for(int _i0 = 0; _i0 < _len_mddev0; _i0++) {
            mddev[_i0].raid_disks = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mddev__i0__private0 = 1;
          mddev[_i0].private = (struct linear_conf *) malloc(_len_mddev__i0__private0*sizeof(struct linear_conf));
          for(int _j0 = 0; _j0 < _len_mddev__i0__private0; _j0++) {
              int _len_mddev__i0__private_disks0 = 1;
          mddev[_i0].private->disks = (struct dev_info *) malloc(_len_mddev__i0__private_disks0*sizeof(struct dev_info));
          for(int _j0 = 0; _j0 < _len_mddev__i0__private_disks0; _j0++) {
            mddev[_i0].private->disks->end_sector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct dev_info * benchRet = which_dev(mddev,sector);
          printf("%ld\n", (*benchRet).end_sector);
          for(int _aux = 0; _aux < _len_mddev0; _aux++) {
          free(mddev[_aux].private);
          }
          free(mddev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
