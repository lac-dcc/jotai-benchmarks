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
typedef  int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  as_bitfield; } ;
struct eth_tx_start_bd {TYPE_1__ bd_flags; } ;
struct bnx2x {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  ETH_TX_BD_FLAGS_IPV6 ; 
 int /*<<< orphan*/  ETH_TX_BD_FLAGS_IS_UDP ; 
 int /*<<< orphan*/  ETH_TX_BD_FLAGS_L4_CSUM ; 
 int XMIT_CSUM_ENC_V6 ; 
 int XMIT_CSUM_TCP ; 
 int XMIT_CSUM_V6 ; 

__attribute__((used)) static void bnx2x_set_sbd_csum(struct bnx2x *bp, struct sk_buff *skb,
			       struct eth_tx_start_bd *tx_start_bd,
			       u32 xmit_type)
{
	tx_start_bd->bd_flags.as_bitfield |= ETH_TX_BD_FLAGS_L4_CSUM;

	if (xmit_type & (XMIT_CSUM_ENC_V6 | XMIT_CSUM_V6))
		tx_start_bd->bd_flags.as_bitfield |= ETH_TX_BD_FLAGS_IPV6;

	if (!(xmit_type & XMIT_CSUM_TCP))
		tx_start_bd->bd_flags.as_bitfield |= ETH_TX_BD_FLAGS_IS_UDP;
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
          int xmit_type = 100;
          int _len_bp0 = 1;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tx_start_bd0 = 1;
          struct eth_tx_start_bd * tx_start_bd = (struct eth_tx_start_bd *) malloc(_len_tx_start_bd0*sizeof(struct eth_tx_start_bd));
          for(int _i0 = 0; _i0 < _len_tx_start_bd0; _i0++) {
            tx_start_bd[_i0].bd_flags.as_bitfield = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2x_set_sbd_csum(bp,skb,tx_start_bd,xmit_type);
          free(bp);
          free(skb);
          free(tx_start_bd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
