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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  mask; } ;
struct TYPE_6__ {scalar_t__ rd_idx; scalar_t__ wr_idx; scalar_t__ last_blk_idx; int /*<<< orphan*/  flag; } ;
struct TYPE_5__ {scalar_t__ af_mode; TYPE_3__ rds; } ;
struct fmdev {TYPE_1__ irq_info; TYPE_2__ rx; } ;

/* Variables and functions */
 int /*<<< orphan*/  FM_LEV_EVENT ; 
 int /*<<< orphan*/  FM_RDS_DISABLE ; 
 scalar_t__ FM_RX_RDS_AF_SWITCH_MODE_ON ; 

void fm_rx_reset_rds_cache(struct fmdev *fmdev)
{
	fmdev->rx.rds.flag = FM_RDS_DISABLE;
	fmdev->rx.rds.last_blk_idx = 0;
	fmdev->rx.rds.wr_idx = 0;
	fmdev->rx.rds.rd_idx = 0;

	if (fmdev->rx.af_mode == FM_RX_RDS_AF_SWITCH_MODE_ON)
		fmdev->irq_info.mask |= FM_LEV_EVENT;
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
          int _len_fmdev0 = 1;
          struct fmdev * fmdev = (struct fmdev *) malloc(_len_fmdev0*sizeof(struct fmdev));
          for(int _i0 = 0; _i0 < _len_fmdev0; _i0++) {
            fmdev->irq_info.mask = ((-2 * (next_i()%2)) + 1) * next_i();
        fmdev->rx.af_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        fmdev->rx.rds.rd_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        fmdev->rx.rds.wr_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        fmdev->rx.rds.last_blk_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        fmdev->rx.rds.flag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fm_rx_reset_rds_cache(fmdev);
          free(fmdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
