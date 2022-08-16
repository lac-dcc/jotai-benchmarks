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
struct rtllib_rx_stats {int RecvSignalPower; } ;
struct TYPE_2__ {int recv_signal_power; } ;
struct r8192_priv {TYPE_1__ stats; } ;

/* Variables and functions */

void rtl92e_update_rx_statistics(struct r8192_priv *priv,
				 struct rtllib_rx_stats *pprevious_stats)
{
	int weighting = 0;


	if (priv->stats.recv_signal_power == 0)
		priv->stats.recv_signal_power =
					 pprevious_stats->RecvSignalPower;

	if (pprevious_stats->RecvSignalPower > priv->stats.recv_signal_power)
		weighting = 5;
	else if (pprevious_stats->RecvSignalPower <
		 priv->stats.recv_signal_power)
		weighting = (-5);
	priv->stats.recv_signal_power = (priv->stats.recv_signal_power * 5 +
					pprevious_stats->RecvSignalPower +
					weighting) / 6;
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
          struct r8192_priv * priv = (struct r8192_priv *) malloc(_len_priv0*sizeof(struct r8192_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].stats.recv_signal_power = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pprevious_stats0 = 1;
          struct rtllib_rx_stats * pprevious_stats = (struct rtllib_rx_stats *) malloc(_len_pprevious_stats0*sizeof(struct rtllib_rx_stats));
          for(int _i0 = 0; _i0 < _len_pprevious_stats0; _i0++) {
            pprevious_stats[_i0].RecvSignalPower = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtl92e_update_rx_statistics(priv,pprevious_stats);
          free(priv);
          free(pprevious_stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
