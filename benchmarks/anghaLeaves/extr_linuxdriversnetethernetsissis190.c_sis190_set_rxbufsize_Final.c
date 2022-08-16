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
struct sis190_private {unsigned int rx_buf_sz; } ;
struct net_device {unsigned int mtu; } ;

/* Variables and functions */
 unsigned int ETH_HLEN ; 
 int RX_BUF_MASK ; 
 unsigned int RX_BUF_SIZE ; 

__attribute__((used)) static void sis190_set_rxbufsize(struct sis190_private *tp,
				 struct net_device *dev)
{
	unsigned int mtu = dev->mtu;

	tp->rx_buf_sz = (mtu > RX_BUF_SIZE) ? mtu + ETH_HLEN + 8 : RX_BUF_SIZE;
	/* RxDesc->size has a licence to kill the lower bits */
	if (tp->rx_buf_sz & 0x07) {
		tp->rx_buf_sz += 8;
		tp->rx_buf_sz &= RX_BUF_MASK;
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
          int _len_tp0 = 1;
          struct sis190_private * tp = (struct sis190_private *) malloc(_len_tp0*sizeof(struct sis190_private));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].rx_buf_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sis190_set_rxbufsize(tp,dev);
          free(tp);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
