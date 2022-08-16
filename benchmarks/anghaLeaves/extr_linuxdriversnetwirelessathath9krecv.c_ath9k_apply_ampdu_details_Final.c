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
struct ieee80211_rx_status {int flag; int /*<<< orphan*/  ampdu_reference; } ;
struct TYPE_2__ {int /*<<< orphan*/  ampdu_ref; } ;
struct ath_softc {TYPE_1__ rx; } ;
struct ath_rx_status {int rs_flags; int /*<<< orphan*/  rs_moreaggr; scalar_t__ rs_isaggr; } ;

/* Variables and functions */
 int ATH9K_RX_DELIM_CRC_PRE ; 
 int RX_FLAG_AMPDU_DELIM_CRC_ERROR ; 
 int RX_FLAG_AMPDU_DETAILS ; 
 int RX_FLAG_AMPDU_IS_LAST ; 
 int RX_FLAG_AMPDU_LAST_KNOWN ; 

__attribute__((used)) static void ath9k_apply_ampdu_details(struct ath_softc *sc,
	struct ath_rx_status *rs, struct ieee80211_rx_status *rxs)
{
	if (rs->rs_isaggr) {
		rxs->flag |= RX_FLAG_AMPDU_DETAILS | RX_FLAG_AMPDU_LAST_KNOWN;

		rxs->ampdu_reference = sc->rx.ampdu_ref;

		if (!rs->rs_moreaggr) {
			rxs->flag |= RX_FLAG_AMPDU_IS_LAST;
			sc->rx.ampdu_ref++;
		}

		if (rs->rs_flags & ATH9K_RX_DELIM_CRC_PRE)
			rxs->flag |= RX_FLAG_AMPDU_DELIM_CRC_ERROR;
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
          int _len_sc0 = 1;
          struct ath_softc * sc = (struct ath_softc *) malloc(_len_sc0*sizeof(struct ath_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].rx.ampdu_ref = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rs0 = 1;
          struct ath_rx_status * rs = (struct ath_rx_status *) malloc(_len_rs0*sizeof(struct ath_rx_status));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
            rs[_i0].rs_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].rs_moreaggr = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].rs_isaggr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rxs0 = 1;
          struct ieee80211_rx_status * rxs = (struct ieee80211_rx_status *) malloc(_len_rxs0*sizeof(struct ieee80211_rx_status));
          for(int _i0 = 0; _i0 < _len_rxs0; _i0++) {
            rxs[_i0].flag = ((-2 * (next_i()%2)) + 1) * next_i();
        rxs[_i0].ampdu_reference = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath9k_apply_ampdu_details(sc,rs,rxs);
          free(sc);
          free(rs);
          free(rxs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
