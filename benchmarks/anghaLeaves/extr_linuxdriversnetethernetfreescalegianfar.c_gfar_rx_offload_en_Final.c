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
struct gfar_private {int uses_rxfcb; scalar_t__ rx_filer_enable; scalar_t__ hwts_rx_en; TYPE_1__* ndev; } ;
struct TYPE_2__ {int features; } ;

/* Variables and functions */
 int NETIF_F_HW_VLAN_CTAG_RX ; 
 int NETIF_F_RXCSUM ; 

__attribute__((used)) static void gfar_rx_offload_en(struct gfar_private *priv)
{
	/* set this when rx hw offload (TOE) functions are being used */
	priv->uses_rxfcb = 0;

	if (priv->ndev->features & (NETIF_F_RXCSUM | NETIF_F_HW_VLAN_CTAG_RX))
		priv->uses_rxfcb = 1;

	if (priv->hwts_rx_en || priv->rx_filer_enable)
		priv->uses_rxfcb = 1;
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
          int _len_priv0 = 1;
          struct gfar_private * priv = (struct gfar_private *) malloc(_len_priv0*sizeof(struct gfar_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].uses_rxfcb = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].rx_filer_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].hwts_rx_en = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__ndev0 = 1;
          priv[_i0].ndev = (struct TYPE_2__ *) malloc(_len_priv__i0__ndev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_priv__i0__ndev0; _j0++) {
            priv[_i0].ndev->features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          gfar_rx_offload_en(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].ndev);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
