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
typedef  int /*<<< orphan*/  u32 ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_hw {TYPE_1__* txqs; } ;
struct TYPE_2__ {int /*<<< orphan*/  txq_max; } ;

/* Variables and functions */
 size_t AR5K_TX_QUEUE_ID_DATA_MIN ; 
 int /*<<< orphan*/  ATH5K_TXQ_LEN_MAX ; 
 int /*<<< orphan*/  ATH_RXBUF ; 

__attribute__((used)) static void ath5k_get_ringparam(struct ieee80211_hw *hw,
				u32 *tx, u32 *tx_max, u32 *rx, u32 *rx_max)
{
	struct ath5k_hw *ah = hw->priv;

	*tx = ah->txqs[AR5K_TX_QUEUE_ID_DATA_MIN].txq_max;

	*tx_max = ATH5K_TXQ_LEN_MAX;
	*rx = *rx_max = ATH_RXBUF;
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
          int _len_hw0 = 1;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__priv0 = 1;
          hw[_i0].priv = (struct ath5k_hw *) malloc(_len_hw__i0__priv0*sizeof(struct ath5k_hw));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv0; _j0++) {
              int _len_hw__i0__priv_txqs0 = 1;
          hw[_i0].priv->txqs = (struct TYPE_2__ *) malloc(_len_hw__i0__priv_txqs0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv_txqs0; _j0++) {
            hw[_i0].priv->txqs->txq_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_tx0 = 1;
          int * tx = (int *) malloc(_len_tx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx0; _i0++) {
            tx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tx_max0 = 1;
          int * tx_max = (int *) malloc(_len_tx_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tx_max0; _i0++) {
            tx_max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx0 = 1;
          int * rx = (int *) malloc(_len_rx0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx0; _i0++) {
            rx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_max0 = 1;
          int * rx_max = (int *) malloc(_len_rx_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx_max0; _i0++) {
            rx_max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath5k_get_ringparam(hw,tx,tx_max,rx,rx_max);
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].priv);
          }
          free(hw);
          free(tx);
          free(tx_max);
          free(rx);
          free(rx_max);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
