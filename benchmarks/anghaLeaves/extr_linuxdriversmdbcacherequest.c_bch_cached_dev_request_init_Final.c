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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct gendisk {TYPE_2__* queue; } ;
struct TYPE_6__ {int /*<<< orphan*/  ioctl; int /*<<< orphan*/  cache_miss; struct gendisk* disk; } ;
struct cached_dev {TYPE_3__ disk; } ;
struct TYPE_5__ {TYPE_1__* backing_dev_info; int /*<<< orphan*/  make_request_fn; } ;
struct TYPE_4__ {int /*<<< orphan*/  congested_fn; } ;

/* Variables and functions */
 int /*<<< orphan*/  cached_dev_cache_miss ; 
 int /*<<< orphan*/  cached_dev_congested ; 
 int /*<<< orphan*/  cached_dev_ioctl ; 
 int /*<<< orphan*/  cached_dev_make_request ; 

void bch_cached_dev_request_init(struct cached_dev *dc)
{
	struct gendisk *g = dc->disk.disk;

	g->queue->make_request_fn		= cached_dev_make_request;
	g->queue->backing_dev_info->congested_fn = cached_dev_congested;
	dc->disk.cache_miss			= cached_dev_cache_miss;
	dc->disk.ioctl				= cached_dev_ioctl;
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
          int _len_dc0 = 1;
          struct cached_dev * dc = (struct cached_dev *) malloc(_len_dc0*sizeof(struct cached_dev));
          for(int _i0 = 0; _i0 < _len_dc0; _i0++) {
            dc[_i0].disk.ioctl = ((-2 * (next_i()%2)) + 1) * next_i();
        dc[_i0].disk.cache_miss = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dc__i0__disk_disk0 = 1;
          dc[_i0].disk.disk = (struct gendisk *) malloc(_len_dc__i0__disk_disk0*sizeof(struct gendisk));
          for(int _j0 = 0; _j0 < _len_dc__i0__disk_disk0; _j0++) {
              int _len_dc__i0__disk_disk_queue0 = 1;
          dc[_i0].disk.disk->queue = (struct TYPE_5__ *) malloc(_len_dc__i0__disk_disk_queue0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dc__i0__disk_disk_queue0; _j0++) {
              int _len_dc__i0__disk_disk_queue_backing_dev_info0 = 1;
          dc[_i0].disk.disk->queue->backing_dev_info = (struct TYPE_4__ *) malloc(_len_dc__i0__disk_disk_queue_backing_dev_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_dc__i0__disk_disk_queue_backing_dev_info0; _j0++) {
            dc[_i0].disk.disk->queue->backing_dev_info->congested_fn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dc[_i0].disk.disk->queue->make_request_fn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          bch_cached_dev_request_init(dc);
          free(dc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
