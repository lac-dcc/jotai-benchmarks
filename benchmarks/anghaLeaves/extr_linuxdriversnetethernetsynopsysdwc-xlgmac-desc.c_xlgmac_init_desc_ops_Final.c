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
struct xlgmac_desc_ops {int /*<<< orphan*/  rx_desc_init; int /*<<< orphan*/  tx_desc_init; int /*<<< orphan*/  unmap_desc_data; int /*<<< orphan*/  map_rx_buffer; int /*<<< orphan*/  map_tx_skb; int /*<<< orphan*/  free_channels_and_rings; int /*<<< orphan*/  alloc_channles_and_rings; } ;

/* Variables and functions */
 int /*<<< orphan*/  xlgmac_alloc_channels_and_rings ; 
 int /*<<< orphan*/  xlgmac_free_channels_and_rings ; 
 int /*<<< orphan*/  xlgmac_map_rx_buffer ; 
 int /*<<< orphan*/  xlgmac_map_tx_skb ; 
 int /*<<< orphan*/  xlgmac_rx_desc_init ; 
 int /*<<< orphan*/  xlgmac_tx_desc_init ; 
 int /*<<< orphan*/  xlgmac_unmap_desc_data ; 

void xlgmac_init_desc_ops(struct xlgmac_desc_ops *desc_ops)
{
	desc_ops->alloc_channles_and_rings = xlgmac_alloc_channels_and_rings;
	desc_ops->free_channels_and_rings = xlgmac_free_channels_and_rings;
	desc_ops->map_tx_skb = xlgmac_map_tx_skb;
	desc_ops->map_rx_buffer = xlgmac_map_rx_buffer;
	desc_ops->unmap_desc_data = xlgmac_unmap_desc_data;
	desc_ops->tx_desc_init = xlgmac_tx_desc_init;
	desc_ops->rx_desc_init = xlgmac_rx_desc_init;
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
          int _len_desc_ops0 = 1;
          struct xlgmac_desc_ops * desc_ops = (struct xlgmac_desc_ops *) malloc(_len_desc_ops0*sizeof(struct xlgmac_desc_ops));
          for(int _i0 = 0; _i0 < _len_desc_ops0; _i0++) {
            desc_ops[_i0].rx_desc_init = ((-2 * (next_i()%2)) + 1) * next_i();
        desc_ops[_i0].tx_desc_init = ((-2 * (next_i()%2)) + 1) * next_i();
        desc_ops[_i0].unmap_desc_data = ((-2 * (next_i()%2)) + 1) * next_i();
        desc_ops[_i0].map_rx_buffer = ((-2 * (next_i()%2)) + 1) * next_i();
        desc_ops[_i0].map_tx_skb = ((-2 * (next_i()%2)) + 1) * next_i();
        desc_ops[_i0].free_channels_and_rings = ((-2 * (next_i()%2)) + 1) * next_i();
        desc_ops[_i0].alloc_channles_and_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xlgmac_init_desc_ops(desc_ops);
          free(desc_ops);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
