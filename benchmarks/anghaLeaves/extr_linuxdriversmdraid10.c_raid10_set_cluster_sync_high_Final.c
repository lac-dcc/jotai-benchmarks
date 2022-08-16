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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int raid_disks; int near_copies; } ;
struct r10conf {scalar_t__ cluster_sync_low; scalar_t__ cluster_sync_high; TYPE_1__* mddev; TYPE_2__ geo; } ;
typedef  int sector_t ;
struct TYPE_3__ {int chunk_sectors; } ;

/* Variables and functions */
 int CLUSTER_RESYNC_WINDOW_SECTORS ; 

__attribute__((used)) static void raid10_set_cluster_sync_high(struct r10conf *conf)
{
	sector_t window_size;
	int extra_chunk, chunks;

	/*
	 * First, here we define "stripe" as a unit which across
	 * all member devices one time, so we get chunks by use
	 * raid_disks / near_copies. Otherwise, if near_copies is
	 * close to raid_disks, then resync window could increases
	 * linearly with the increase of raid_disks, which means
	 * we will suspend a really large IO window while it is not
	 * necessary. If raid_disks is not divisible by near_copies,
	 * an extra chunk is needed to ensure the whole "stripe" is
	 * covered.
	 */

	chunks = conf->geo.raid_disks / conf->geo.near_copies;
	if (conf->geo.raid_disks % conf->geo.near_copies == 0)
		extra_chunk = 0;
	else
		extra_chunk = 1;
	window_size = (chunks + extra_chunk) * conf->mddev->chunk_sectors;

	/*
	 * At least use a 32M window to align with raid1's resync window
	 */
	window_size = (CLUSTER_RESYNC_WINDOW_SECTORS > window_size) ?
			CLUSTER_RESYNC_WINDOW_SECTORS : window_size;

	conf->cluster_sync_high = conf->cluster_sync_low + window_size;
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
          int _len_conf0 = 1;
          struct r10conf * conf = (struct r10conf *) malloc(_len_conf0*sizeof(struct r10conf));
          for(int _i0 = 0; _i0 < _len_conf0; _i0++) {
            conf[_i0].cluster_sync_low = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0].cluster_sync_high = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_conf__i0__mddev0 = 1;
          conf[_i0].mddev = (struct TYPE_3__ *) malloc(_len_conf__i0__mddev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_conf__i0__mddev0; _j0++) {
            conf[_i0].mddev->chunk_sectors = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        conf[_i0].geo.raid_disks = ((-2 * (next_i()%2)) + 1) * next_i();
        conf[_i0].geo.near_copies = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          raid10_set_cluster_sync_high(conf);
          for(int _aux = 0; _aux < _len_conf0; _aux++) {
          free(conf[_aux].mddev);
          }
          free(conf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
