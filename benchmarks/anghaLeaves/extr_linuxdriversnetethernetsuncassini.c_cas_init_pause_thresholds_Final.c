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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct cas {int rx_fifo_size; int rx_pause_off; int rx_pause_on; TYPE_1__* dev; } ;
struct TYPE_2__ {int mtu; } ;

/* Variables and functions */
 int ETH_HLEN ; 

__attribute__((used)) static void cas_init_pause_thresholds(struct cas *cp)
{
	/* Calculate pause thresholds.  Setting the OFF threshold to the
	 * full RX fifo size effectively disables PAUSE generation
	 */
	if (cp->rx_fifo_size <= (2 * 1024)) {
		cp->rx_pause_off = cp->rx_pause_on = cp->rx_fifo_size;
	} else {
		int max_frame = (cp->dev->mtu + ETH_HLEN + 4 + 4 + 64) & ~63;
		if (max_frame * 3 > cp->rx_fifo_size) {
			cp->rx_pause_off = 7104;
			cp->rx_pause_on  = 960;
		} else {
			int off = (cp->rx_fifo_size - (max_frame * 2));
			int on = off - max_frame;
			cp->rx_pause_off = off;
			cp->rx_pause_on = on;
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
          int _len_cp0 = 1;
          struct cas * cp = (struct cas *) malloc(_len_cp0*sizeof(struct cas));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
            cp[_i0].rx_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
        cp[_i0].rx_pause_off = ((-2 * (next_i()%2)) + 1) * next_i();
        cp[_i0].rx_pause_on = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cp__i0__dev0 = 1;
          cp[_i0].dev = (struct TYPE_2__ *) malloc(_len_cp__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cp__i0__dev0; _j0++) {
            cp[_i0].dev->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cas_init_pause_thresholds(cp);
          for(int _aux = 0; _aux < _len_cp0; _aux++) {
          free(cp[_aux].dev);
          }
          free(cp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
