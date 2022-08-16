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
struct tx_desc {int dummy; } ;
struct r8152 {int tx_qlen; struct net_device* netdev; } ;
struct net_device {int mtu; } ;

/* Variables and functions */
 int ETH_FCS_LEN ; 
 int VLAN_ETH_HLEN ; 
 int agg_buf_sz ; 

__attribute__((used)) static void set_tx_qlen(struct r8152 *tp)
{
	struct net_device *netdev = tp->netdev;

	tp->tx_qlen = agg_buf_sz / (netdev->mtu + VLAN_ETH_HLEN + ETH_FCS_LEN +
				    sizeof(struct tx_desc));
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
          struct r8152 * tp = (struct r8152 *) malloc(_len_tp0*sizeof(struct r8152));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].tx_qlen = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tp__i0__netdev0 = 1;
          tp[_i0].netdev = (struct net_device *) malloc(_len_tp__i0__netdev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_tp__i0__netdev0; _j0++) {
            tp[_i0].netdev->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          set_tx_qlen(tp);
          for(int _aux = 0; _aux < _len_tp0; _aux++) {
          free(tp[_aux].netdev);
          }
          free(tp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
