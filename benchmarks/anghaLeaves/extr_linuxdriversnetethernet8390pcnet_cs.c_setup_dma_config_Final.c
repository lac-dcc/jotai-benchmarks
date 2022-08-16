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
struct pcmcia_device {struct net_device* priv; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tx_start_page; int stop_page; int /*<<< orphan*/  block_output; int /*<<< orphan*/  block_input; int /*<<< orphan*/  get_8390_hdr; scalar_t__ rx_start_page; } ;

/* Variables and functions */
 scalar_t__ TX_PAGES ; 
 int /*<<< orphan*/  dma_block_input ; 
 int /*<<< orphan*/  dma_block_output ; 
 int /*<<< orphan*/  dma_get_8390_hdr ; 
 TYPE_1__ ei_status ; 

__attribute__((used)) static int setup_dma_config(struct pcmcia_device *link, int start_pg,
			    int stop_pg)
{
    struct net_device *dev = link->priv;

    ei_status.tx_start_page = start_pg;
    ei_status.rx_start_page = start_pg + TX_PAGES;
    ei_status.stop_page = stop_pg;

    /* set up block i/o functions */
    ei_status.get_8390_hdr = dma_get_8390_hdr;
    ei_status.block_input = dma_block_input;
    ei_status.block_output = dma_block_output;

    return 0;
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
          int start_pg = 100;
          int stop_pg = 100;
          int _len_link0 = 1;
          struct pcmcia_device * link = (struct pcmcia_device *) malloc(_len_link0*sizeof(struct pcmcia_device));
          for(int _i0 = 0; _i0 < _len_link0; _i0++) {
              int _len_link__i0__priv0 = 1;
          link[_i0].priv = (struct net_device *) malloc(_len_link__i0__priv0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_link__i0__priv0; _j0++) {
            link[_i0].priv->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = setup_dma_config(link,start_pg,stop_pg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_link0; _aux++) {
          free(link[_aux].priv);
          }
          free(link);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
