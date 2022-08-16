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
struct pxa168_eth_private {int skb_size; TYPE_1__* dev; } ;
struct TYPE_2__ {int mtu; } ;

/* Variables and functions */
 scalar_t__ SKB_DMA_REALIGN ; 

__attribute__((used)) static void pxa168_eth_recalc_skb_size(struct pxa168_eth_private *pep)
{
	int skb_size;

	/*
	 * Reserve 2+14 bytes for an ethernet header (the hardware
	 * automatically prepends 2 bytes of dummy data to each
	 * received packet), 16 bytes for up to four VLAN tags, and
	 * 4 bytes for the trailing FCS -- 36 bytes total.
	 */
	skb_size = pep->dev->mtu + 36;

	/*
	 * Make sure that the skb size is a multiple of 8 bytes, as
	 * the lower three bits of the receive descriptor's buffer
	 * size field are ignored by the hardware.
	 */
	pep->skb_size = (skb_size + 7) & ~7;

	/*
	 * If NET_SKB_PAD is smaller than a cache line,
	 * netdev_alloc_skb() will cause skb->data to be misaligned
	 * to a cache line boundary.  If this is the case, include
	 * some extra space to allow re-aligning the data area.
	 */
	pep->skb_size += SKB_DMA_REALIGN;

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
          int _len_pep0 = 1;
          struct pxa168_eth_private * pep = (struct pxa168_eth_private *) malloc(_len_pep0*sizeof(struct pxa168_eth_private));
          for(int _i0 = 0; _i0 < _len_pep0; _i0++) {
            pep[_i0].skb_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pep__i0__dev0 = 1;
          pep[_i0].dev = (struct TYPE_2__ *) malloc(_len_pep__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pep__i0__dev0; _j0++) {
            pep[_i0].dev->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pxa168_eth_recalc_skb_size(pep);
          for(int _aux = 0; _aux < _len_pep0; _aux++) {
          free(pep[_aux].dev);
          }
          free(pep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
