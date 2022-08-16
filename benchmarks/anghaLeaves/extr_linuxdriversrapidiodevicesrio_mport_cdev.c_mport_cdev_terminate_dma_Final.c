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
       1            big-arr-10x\n\
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
struct mport_dev {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void mport_cdev_terminate_dma(struct mport_dev *md)
{
#ifdef CONFIG_RAPIDIO_DMA_ENGINE
	struct mport_cdev_priv *client;

	rmcd_debug(DMA, "%s", dev_name(&md->dev));

	mutex_lock(&md->file_mutex);
	list_for_each_entry(client, &md->file_list, list) {
		if (client->dmach) {
			dmaengine_terminate_all(client->dmach);
			rio_release_dma(client->dmach);
		}
	}
	mutex_unlock(&md->file_mutex);

	if (md->dma_chan) {
		dmaengine_terminate_all(md->dma_chan);
		rio_release_dma(md->dma_chan);
		md->dma_chan = NULL;
	}
#endif
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
          int _len_md0 = 1;
          struct mport_dev * md = (struct mport_dev *) malloc(_len_md0*sizeof(struct mport_dev));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
            md[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mport_cdev_terminate_dma(md);
          free(md);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_md0 = 100;
          struct mport_dev * md = (struct mport_dev *) malloc(_len_md0*sizeof(struct mport_dev));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
            md[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mport_cdev_terminate_dma(md);
          free(md);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
