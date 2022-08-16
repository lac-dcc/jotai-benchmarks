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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct sk_buff {int /*<<< orphan*/  ip_summed; } ;
struct TYPE_6__ {int /*<<< orphan*/  rx_csum; } ;
struct TYPE_5__ {scalar_t__ performance_stats; } ;
struct qeth_card {TYPE_3__ perf_stats; TYPE_2__ options; TYPE_1__* dev; } ;
struct TYPE_4__ {int features; } ;

/* Variables and functions */
 int /*<<< orphan*/  CHECKSUM_NONE ; 
 int /*<<< orphan*/  CHECKSUM_UNNECESSARY ; 
 int NETIF_F_RXCSUM ; 
 int QETH_HDR_EXT_CSUM_TRANSP_REQ ; 

__attribute__((used)) static inline void qeth_rx_csum(struct qeth_card *card, struct sk_buff *skb,
				u8 flags)
{
	if ((card->dev->features & NETIF_F_RXCSUM) &&
	    (flags & QETH_HDR_EXT_CSUM_TRANSP_REQ)) {
		skb->ip_summed = CHECKSUM_UNNECESSARY;
		if (card->options.performance_stats)
			card->perf_stats.rx_csum++;
	} else {
		skb->ip_summed = CHECKSUM_NONE;
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
          int flags = 100;
          int _len_card0 = 1;
          struct qeth_card * card = (struct qeth_card *) malloc(_len_card0*sizeof(struct qeth_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].perf_stats.rx_csum = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].options.performance_stats = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__dev0 = 1;
          card[_i0].dev = (struct TYPE_4__ *) malloc(_len_card__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_card__i0__dev0; _j0++) {
            card[_i0].dev->features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].ip_summed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qeth_rx_csum(card,skb,flags);
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dev);
          }
          free(card);
          free(skb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
