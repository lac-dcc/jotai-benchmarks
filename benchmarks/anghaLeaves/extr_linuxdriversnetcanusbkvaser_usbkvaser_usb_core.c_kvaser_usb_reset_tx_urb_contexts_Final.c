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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct kvaser_usb_net_priv {TYPE_2__* tx_contexts; scalar_t__ active_tx_contexts; TYPE_1__* dev; } ;
struct TYPE_4__ {int echo_index; } ;
struct TYPE_3__ {int max_tx_urbs; } ;

/* Variables and functions */

__attribute__((used)) static void kvaser_usb_reset_tx_urb_contexts(struct kvaser_usb_net_priv *priv)
{
	int i, max_tx_urbs;

	max_tx_urbs = priv->dev->max_tx_urbs;

	priv->active_tx_contexts = 0;
	for (i = 0; i < max_tx_urbs; i++)
		priv->tx_contexts[i].echo_index = max_tx_urbs;
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
          struct kvaser_usb_net_priv * priv = (struct kvaser_usb_net_priv *) malloc(_len_priv0*sizeof(struct kvaser_usb_net_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__tx_contexts0 = 1;
          priv[_i0].tx_contexts = (struct TYPE_4__ *) malloc(_len_priv__i0__tx_contexts0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_priv__i0__tx_contexts0; _j0++) {
            priv[_i0].tx_contexts->echo_index = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        priv[_i0].active_tx_contexts = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__dev0 = 1;
          priv[_i0].dev = (struct TYPE_3__ *) malloc(_len_priv__i0__dev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_priv__i0__dev0; _j0++) {
            priv[_i0].dev->max_tx_urbs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          kvaser_usb_reset_tx_urb_contexts(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].tx_contexts);
          }
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].dev);
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
