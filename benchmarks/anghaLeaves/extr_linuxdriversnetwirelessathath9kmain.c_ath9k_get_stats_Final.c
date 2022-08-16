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
struct ieee80211_low_level_stats {int /*<<< orphan*/  dot11RTSSuccessCount; int /*<<< orphan*/  dot11FCSErrorCount; int /*<<< orphan*/  dot11RTSFailureCount; int /*<<< orphan*/  dot11ACKFailureCount; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath9k_mib_stats {int /*<<< orphan*/  rts_good; int /*<<< orphan*/  fcs_bad; int /*<<< orphan*/  rts_bad; int /*<<< orphan*/  ackrcv_bad; } ;
struct ath_hw {struct ath9k_mib_stats ah_mibStats; } ;

/* Variables and functions */

__attribute__((used)) static int ath9k_get_stats(struct ieee80211_hw *hw,
			   struct ieee80211_low_level_stats *stats)
{
	struct ath_softc *sc = hw->priv;
	struct ath_hw *ah = sc->sc_ah;
	struct ath9k_mib_stats *mib_stats = &ah->ah_mibStats;

	stats->dot11ACKFailureCount = mib_stats->ackrcv_bad;
	stats->dot11RTSFailureCount = mib_stats->rts_bad;
	stats->dot11FCSErrorCount = mib_stats->fcs_bad;
	stats->dot11RTSSuccessCount = mib_stats->rts_good;
	return 0;
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
          hw[_i0].priv = (struct ath_softc *) malloc(_len_hw__i0__priv0*sizeof(struct ath_softc));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv0; _j0++) {
              int _len_hw__i0__priv_sc_ah0 = 1;
          hw[_i0].priv->sc_ah = (struct ath_hw *) malloc(_len_hw__i0__priv_sc_ah0*sizeof(struct ath_hw));
          for(int _j0 = 0; _j0 < _len_hw__i0__priv_sc_ah0; _j0++) {
            hw[_i0].priv->sc_ah->ah_mibStats.rts_good = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].priv->sc_ah->ah_mibStats.fcs_bad = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].priv->sc_ah->ah_mibStats.rts_bad = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].priv->sc_ah->ah_mibStats.ackrcv_bad = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_stats0 = 1;
          struct ieee80211_low_level_stats * stats = (struct ieee80211_low_level_stats *) malloc(_len_stats0*sizeof(struct ieee80211_low_level_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].dot11RTSSuccessCount = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].dot11FCSErrorCount = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].dot11RTSFailureCount = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].dot11ACKFailureCount = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath9k_get_stats(hw,stats);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].priv);
          }
          free(hw);
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
