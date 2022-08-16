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
struct TYPE_3__ {scalar_t__ af_list_max; scalar_t__ afcache_size; int /*<<< orphan*/  picode; } ;
struct TYPE_4__ {TYPE_1__ stat_info; } ;
struct fmdev {TYPE_2__ rx; } ;

/* Variables and functions */
 int /*<<< orphan*/  FM_NO_PI_CODE ; 

void fm_rx_reset_station_info(struct fmdev *fmdev)
{
	fmdev->rx.stat_info.picode = FM_NO_PI_CODE;
	fmdev->rx.stat_info.afcache_size = 0;
	fmdev->rx.stat_info.af_list_max = 0;
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
          int _len_fmdev0 = 1;
          struct fmdev * fmdev = (struct fmdev *) malloc(_len_fmdev0*sizeof(struct fmdev));
          for(int _i0 = 0; _i0 < _len_fmdev0; _i0++) {
            fmdev[_i0].rx.stat_info.af_list_max = ((-2 * (next_i()%2)) + 1) * next_i();
        fmdev[_i0].rx.stat_info.afcache_size = ((-2 * (next_i()%2)) + 1) * next_i();
        fmdev[_i0].rx.stat_info.picode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fm_rx_reset_station_info(fmdev);
          free(fmdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
