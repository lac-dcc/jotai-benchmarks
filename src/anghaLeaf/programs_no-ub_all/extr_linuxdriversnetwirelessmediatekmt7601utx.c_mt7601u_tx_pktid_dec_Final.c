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
typedef  int u8 ;
struct mt76_tx_status {int pktid; int rate; int is_probe; int retry; } ;
struct mt7601u_dev {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void
mt7601u_tx_pktid_dec(struct mt7601u_dev *dev, struct mt76_tx_status *stat)
{
	u8 req_rate = stat->pktid;
	u8 eff_rate = stat->rate & 0x7;

	req_rate -= 1;

	if (req_rate > 7) {
		stat->is_probe = true;
		req_rate -= 8;

		/* Decide between MCS0 and MCS7 which share pktid 9 */
		if (!req_rate && eff_rate)
			req_rate = 7;
	}

	stat->retry = req_rate - eff_rate;
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
          int _len_dev0 = 1;
          struct mt7601u_dev * dev = (struct mt7601u_dev *) malloc(_len_dev0*sizeof(struct mt7601u_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stat0 = 1;
          struct mt76_tx_status * stat = (struct mt76_tx_status *) malloc(_len_stat0*sizeof(struct mt76_tx_status));
          for(int _i0 = 0; _i0 < _len_stat0; _i0++) {
            stat->pktid = ((-2 * (next_i()%2)) + 1) * next_i();
        stat->rate = ((-2 * (next_i()%2)) + 1) * next_i();
        stat->is_probe = ((-2 * (next_i()%2)) + 1) * next_i();
        stat->retry = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mt7601u_tx_pktid_dec(dev,stat);
          free(dev);
          free(stat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
