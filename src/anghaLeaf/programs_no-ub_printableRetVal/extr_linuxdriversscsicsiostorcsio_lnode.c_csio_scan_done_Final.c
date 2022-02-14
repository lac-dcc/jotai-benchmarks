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
struct csio_lnode {unsigned long tgt_scan_tick; scalar_t__ last_scan_ntgts; scalar_t__ n_scsi_tgts; } ;

/* Variables and functions */

int
csio_scan_done(struct csio_lnode *ln, unsigned long ticks,
		unsigned long time, unsigned long max_scan_ticks,
		unsigned long delta_scan_ticks)
{
	int rv = 0;

	if (time >= max_scan_ticks)
		return 1;

	if (!ln->tgt_scan_tick)
		ln->tgt_scan_tick = ticks;

	if (((ticks - ln->tgt_scan_tick) >= delta_scan_ticks)) {
		if (!ln->last_scan_ntgts)
			ln->last_scan_ntgts = ln->n_scsi_tgts;
		else {
			if (ln->last_scan_ntgts == ln->n_scsi_tgts)
				return 1;

			ln->last_scan_ntgts = ln->n_scsi_tgts;
		}
		ln->tgt_scan_tick = ticks;
	}
	return rv;
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
          unsigned long ticks = 255;
          unsigned long time = 255;
          unsigned long max_scan_ticks = 255;
          unsigned long delta_scan_ticks = 255;
          int _len_ln0 = 1;
          struct csio_lnode * ln = (struct csio_lnode *) malloc(_len_ln0*sizeof(struct csio_lnode));
          for(int _i0 = 0; _i0 < _len_ln0; _i0++) {
            ln->tgt_scan_tick = ((-2 * (next_i()%2)) + 1) * next_i();
        ln->last_scan_ntgts = ((-2 * (next_i()%2)) + 1) * next_i();
        ln->n_scsi_tgts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = csio_scan_done(ln,ticks,time,max_scan_ticks,delta_scan_ticks);
          printf("%d\n", benchRet); 
          free(ln);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
