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
struct iwl_priv {int /*<<< orphan*/ * rx_handlers; } ;

/* Variables and functions */
 size_t REPLY_SCAN_CMD ; 
 size_t SCAN_COMPLETE_NOTIFICATION ; 
 size_t SCAN_RESULTS_NOTIFICATION ; 
 size_t SCAN_START_NOTIFICATION ; 
 int /*<<< orphan*/  iwl_rx_reply_scan ; 
 int /*<<< orphan*/  iwl_rx_scan_complete_notif ; 
 int /*<<< orphan*/  iwl_rx_scan_results_notif ; 
 int /*<<< orphan*/  iwl_rx_scan_start_notif ; 

void iwl_setup_rx_scan_handlers(struct iwl_priv *priv)
{
	/* scan handlers */
	priv->rx_handlers[REPLY_SCAN_CMD] = iwl_rx_reply_scan;
	priv->rx_handlers[SCAN_START_NOTIFICATION] = iwl_rx_scan_start_notif;
	priv->rx_handlers[SCAN_RESULTS_NOTIFICATION] =
					iwl_rx_scan_results_notif;
	priv->rx_handlers[SCAN_COMPLETE_NOTIFICATION] =
					iwl_rx_scan_complete_notif;
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
          struct iwl_priv * priv = (struct iwl_priv *) malloc(_len_priv0*sizeof(struct iwl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
              int _len_priv__i0__rx_handlers0 = 1;
          priv[_i0].rx_handlers = (int *) malloc(_len_priv__i0__rx_handlers0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_priv__i0__rx_handlers0; _j0++) {
            priv[_i0].rx_handlers[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          iwl_setup_rx_scan_handlers(priv);
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].rx_handlers);
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
