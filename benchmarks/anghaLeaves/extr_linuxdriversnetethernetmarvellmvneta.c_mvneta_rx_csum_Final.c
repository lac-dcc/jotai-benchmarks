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
struct sk_buff {int /*<<< orphan*/  ip_summed; scalar_t__ csum; } ;
struct mvneta_port {TYPE_1__* dev; } ;
struct TYPE_2__ {int features; } ;

/* Variables and functions */
 int /*<<< orphan*/  CHECKSUM_NONE ; 
 int /*<<< orphan*/  CHECKSUM_UNNECESSARY ; 
 int MVNETA_RXD_L3_IP4 ; 
 int MVNETA_RXD_L4_CSUM_OK ; 
 int NETIF_F_RXCSUM ; 

__attribute__((used)) static void mvneta_rx_csum(struct mvneta_port *pp, u32 status,
			   struct sk_buff *skb)
{
	if ((pp->dev->features & NETIF_F_RXCSUM) &&
	    (status & MVNETA_RXD_L3_IP4) &&
	    (status & MVNETA_RXD_L4_CSUM_OK)) {
		skb->csum = 0;
		skb->ip_summed = CHECKSUM_UNNECESSARY;
		return;
	}

	skb->ip_summed = CHECKSUM_NONE;
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
          int status = 100;
          int _len_pp0 = 1;
          struct mvneta_port * pp = (struct mvneta_port *) malloc(_len_pp0*sizeof(struct mvneta_port));
          for(int _i0 = 0; _i0 < _len_pp0; _i0++) {
              int _len_pp__i0__dev0 = 1;
          pp[_i0].dev = (struct TYPE_2__ *) malloc(_len_pp__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pp__i0__dev0; _j0++) {
            pp[_i0].dev->features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].ip_summed = ((-2 * (next_i()%2)) + 1) * next_i();
        skb[_i0].csum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mvneta_rx_csum(pp,status,skb);
          for(int _aux = 0; _aux < _len_pp0; _aux++) {
          free(pp[_aux].dev);
          }
          free(pp);
          free(skb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
