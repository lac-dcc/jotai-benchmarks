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
struct statistics_tx {int dummy; } ;
struct statistics_rx_phy {int dummy; } ;
struct statistics_rx_non_phy {int dummy; } ;
struct statistics_rx_ht_phy {int dummy; } ;
struct statistics_general_common {int dummy; } ;
struct statistics_bt_activity {int dummy; } ;
struct iwl_priv {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void
iwlagn_accumulative_statistics(struct iwl_priv *priv,
			    struct statistics_general_common *common,
			    struct statistics_rx_non_phy *rx_non_phy,
			    struct statistics_rx_phy *rx_ofdm,
			    struct statistics_rx_ht_phy *rx_ofdm_ht,
			    struct statistics_rx_phy *rx_cck,
			    struct statistics_tx *tx,
			    struct statistics_bt_activity *bt_activity)
{
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
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_common0 = 1;
          struct statistics_general_common * common = (struct statistics_general_common *) malloc(_len_common0*sizeof(struct statistics_general_common));
          for(int _i0 = 0; _i0 < _len_common0; _i0++) {
            common[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_non_phy0 = 1;
          struct statistics_rx_non_phy * rx_non_phy = (struct statistics_rx_non_phy *) malloc(_len_rx_non_phy0*sizeof(struct statistics_rx_non_phy));
          for(int _i0 = 0; _i0 < _len_rx_non_phy0; _i0++) {
            rx_non_phy[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_ofdm0 = 1;
          struct statistics_rx_phy * rx_ofdm = (struct statistics_rx_phy *) malloc(_len_rx_ofdm0*sizeof(struct statistics_rx_phy));
          for(int _i0 = 0; _i0 < _len_rx_ofdm0; _i0++) {
            rx_ofdm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_ofdm_ht0 = 1;
          struct statistics_rx_ht_phy * rx_ofdm_ht = (struct statistics_rx_ht_phy *) malloc(_len_rx_ofdm_ht0*sizeof(struct statistics_rx_ht_phy));
          for(int _i0 = 0; _i0 < _len_rx_ofdm_ht0; _i0++) {
            rx_ofdm_ht[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_cck0 = 1;
          struct statistics_rx_phy * rx_cck = (struct statistics_rx_phy *) malloc(_len_rx_cck0*sizeof(struct statistics_rx_phy));
          for(int _i0 = 0; _i0 < _len_rx_cck0; _i0++) {
            rx_cck[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tx0 = 1;
          struct statistics_tx * tx = (struct statistics_tx *) malloc(_len_tx0*sizeof(struct statistics_tx));
          for(int _i0 = 0; _i0 < _len_tx0; _i0++) {
            tx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bt_activity0 = 1;
          struct statistics_bt_activity * bt_activity = (struct statistics_bt_activity *) malloc(_len_bt_activity0*sizeof(struct statistics_bt_activity));
          for(int _i0 = 0; _i0 < _len_bt_activity0; _i0++) {
            bt_activity[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iwlagn_accumulative_statistics(priv,common,rx_non_phy,rx_ofdm,rx_ofdm_ht,rx_cck,tx,bt_activity);
          free(priv);
          free(common);
          free(rx_non_phy);
          free(rx_ofdm);
          free(rx_ofdm_ht);
          free(rx_cck);
          free(tx);
          free(bt_activity);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
