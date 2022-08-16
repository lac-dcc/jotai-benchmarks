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
struct omap_hsmmc_host {struct dma_chan* rx_chan; struct dma_chan* tx_chan; } ;
struct mmc_data {int flags; } ;
struct dma_chan {int dummy; } ;

/* Variables and functions */
 int MMC_DATA_WRITE ; 

__attribute__((used)) static struct dma_chan *omap_hsmmc_get_dma_chan(struct omap_hsmmc_host *host,
	struct mmc_data *data)
{
	return data->flags & MMC_DATA_WRITE ? host->tx_chan : host->rx_chan;
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
          int _len_host0 = 1;
          struct omap_hsmmc_host * host = (struct omap_hsmmc_host *) malloc(_len_host0*sizeof(struct omap_hsmmc_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__rx_chan0 = 1;
          host[_i0].rx_chan = (struct dma_chan *) malloc(_len_host__i0__rx_chan0*sizeof(struct dma_chan));
          for(int _j0 = 0; _j0 < _len_host__i0__rx_chan0; _j0++) {
            host[_i0].rx_chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__tx_chan0 = 1;
          host[_i0].tx_chan = (struct dma_chan *) malloc(_len_host__i0__tx_chan0*sizeof(struct dma_chan));
          for(int _j0 = 0; _j0 < _len_host__i0__tx_chan0; _j0++) {
            host[_i0].tx_chan->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data0 = 1;
          struct mmc_data * data = (struct mmc_data *) malloc(_len_data0*sizeof(struct mmc_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct dma_chan * benchRet = omap_hsmmc_get_dma_chan(host,data);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].rx_chan);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].tx_chan);
          }
          free(host);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
