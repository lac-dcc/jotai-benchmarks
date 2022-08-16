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
struct cp_private {scalar_t__ rx_buf_sz; TYPE_1__* dev; } ;
struct TYPE_2__ {unsigned int mtu; } ;

/* Variables and functions */
 unsigned int ETH_DATA_LEN ; 
 scalar_t__ ETH_HLEN ; 
 scalar_t__ PKT_BUF_SZ ; 

__attribute__((used)) static inline void cp_set_rxbufsize (struct cp_private *cp)
{
	unsigned int mtu = cp->dev->mtu;

	if (mtu > ETH_DATA_LEN)
		/* MTU + ethernet header + FCS + optional VLAN tag */
		cp->rx_buf_sz = mtu + ETH_HLEN + 8;
	else
		cp->rx_buf_sz = PKT_BUF_SZ;
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
          struct cp_private * cp = (struct cp_private *) malloc(_len_cp0*sizeof(struct cp_private));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
            cp[_i0].rx_buf_sz = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cp__i0__dev0 = 1;
          cp[_i0].dev = (struct TYPE_2__ *) malloc(_len_cp__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cp__i0__dev0; _j0++) {
            cp[_i0].dev->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          cp_set_rxbufsize(cp);
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
