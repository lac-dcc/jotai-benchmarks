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
typedef  scalar_t__ u64 ;
struct efx_nic {int rx_nodesc_drops_prev_state; scalar_t__ rx_nodesc_drops_while_down; TYPE_1__* net_dev; scalar_t__ rx_nodesc_drops_total; } ;
struct TYPE_2__ {int flags; } ;

/* Variables and functions */
 int IFF_UP ; 

void efx_nic_fix_nodesc_drop_stat(struct efx_nic *efx, u64 *rx_nodesc_drops)
{
	/* if down, or this is the first update after coming up */
	if (!(efx->net_dev->flags & IFF_UP) || !efx->rx_nodesc_drops_prev_state)
		efx->rx_nodesc_drops_while_down +=
			*rx_nodesc_drops - efx->rx_nodesc_drops_total;
	efx->rx_nodesc_drops_total = *rx_nodesc_drops;
	efx->rx_nodesc_drops_prev_state = !!(efx->net_dev->flags & IFF_UP);
	*rx_nodesc_drops -= efx->rx_nodesc_drops_while_down;
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
          int _len_efx0 = 1;
          struct efx_nic * efx = (struct efx_nic *) malloc(_len_efx0*sizeof(struct efx_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
            efx[_i0].rx_nodesc_drops_prev_state = ((-2 * (next_i()%2)) + 1) * next_i();
        efx[_i0].rx_nodesc_drops_while_down = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_efx__i0__net_dev0 = 1;
          efx[_i0].net_dev = (struct TYPE_2__ *) malloc(_len_efx__i0__net_dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_efx__i0__net_dev0; _j0++) {
            efx[_i0].net_dev->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        efx[_i0].rx_nodesc_drops_total = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_nodesc_drops0 = 1;
          long * rx_nodesc_drops = (long *) malloc(_len_rx_nodesc_drops0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_rx_nodesc_drops0; _i0++) {
            rx_nodesc_drops[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          efx_nic_fix_nodesc_drop_stat(efx,rx_nodesc_drops);
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(efx[_aux].net_dev);
          }
          free(efx);
          free(rx_nodesc_drops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
