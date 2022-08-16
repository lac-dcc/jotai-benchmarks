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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {int /*<<< orphan*/  gen_timer; int /*<<< orphan*/  mci; int /*<<< orphan*/  tsfoor; int /*<<< orphan*/  dtim; int /*<<< orphan*/  dtimsync; int /*<<< orphan*/  cabend; int /*<<< orphan*/  tim; int /*<<< orphan*/  gtt; int /*<<< orphan*/  cst; int /*<<< orphan*/  bnr; int /*<<< orphan*/  bmiss; int /*<<< orphan*/  swba; int /*<<< orphan*/  rx_keycache_miss; int /*<<< orphan*/  rxphyerr; int /*<<< orphan*/  txurn; int /*<<< orphan*/  txok; int /*<<< orphan*/  rxorn; int /*<<< orphan*/  rxeol; int /*<<< orphan*/  rxok; int /*<<< orphan*/  bb_watchdog; int /*<<< orphan*/  rxhp; int /*<<< orphan*/  rxlp; int /*<<< orphan*/  total; } ;
struct TYPE_9__ {TYPE_3__ istats; } ;
struct TYPE_10__ {TYPE_4__ stats; } ;
struct ath_softc {TYPE_5__ debug; TYPE_2__* sc_ah; } ;
typedef  enum ath9k_int { ____Placeholder_ath9k_int } ath9k_int ;
struct TYPE_6__ {int hw_caps; } ;
struct TYPE_7__ {TYPE_1__ caps; } ;

/* Variables and functions */
 int ATH9K_HW_CAP_EDMA ; 
 int ATH9K_INT_BB_WATCHDOG ; 
 int ATH9K_INT_BMISS ; 
 int ATH9K_INT_BNR ; 
 int ATH9K_INT_CABEND ; 
 int ATH9K_INT_CST ; 
 int ATH9K_INT_DTIM ; 
 int ATH9K_INT_DTIMSYNC ; 
 int ATH9K_INT_GENTIMER ; 
 int ATH9K_INT_GTT ; 
 int ATH9K_INT_MCI ; 
 int ATH9K_INT_RX ; 
 int ATH9K_INT_RXEOL ; 
 int ATH9K_INT_RXHP ; 
 int ATH9K_INT_RXKCM ; 
 int ATH9K_INT_RXLP ; 
 int ATH9K_INT_RXORN ; 
 int ATH9K_INT_RXPHY ; 
 int ATH9K_INT_SWBA ; 
 int ATH9K_INT_TIM ; 
 int ATH9K_INT_TSFOOR ; 
 int ATH9K_INT_TX ; 
 int ATH9K_INT_TXURN ; 

void ath_debug_stat_interrupt(struct ath_softc *sc, enum ath9k_int status)
{
	if (status)
		sc->debug.stats.istats.total++;
	if (sc->sc_ah->caps.hw_caps & ATH9K_HW_CAP_EDMA) {
		if (status & ATH9K_INT_RXLP)
			sc->debug.stats.istats.rxlp++;
		if (status & ATH9K_INT_RXHP)
			sc->debug.stats.istats.rxhp++;
		if (status & ATH9K_INT_BB_WATCHDOG)
			sc->debug.stats.istats.bb_watchdog++;
	} else {
		if (status & ATH9K_INT_RX)
			sc->debug.stats.istats.rxok++;
	}
	if (status & ATH9K_INT_RXEOL)
		sc->debug.stats.istats.rxeol++;
	if (status & ATH9K_INT_RXORN)
		sc->debug.stats.istats.rxorn++;
	if (status & ATH9K_INT_TX)
		sc->debug.stats.istats.txok++;
	if (status & ATH9K_INT_TXURN)
		sc->debug.stats.istats.txurn++;
	if (status & ATH9K_INT_RXPHY)
		sc->debug.stats.istats.rxphyerr++;
	if (status & ATH9K_INT_RXKCM)
		sc->debug.stats.istats.rx_keycache_miss++;
	if (status & ATH9K_INT_SWBA)
		sc->debug.stats.istats.swba++;
	if (status & ATH9K_INT_BMISS)
		sc->debug.stats.istats.bmiss++;
	if (status & ATH9K_INT_BNR)
		sc->debug.stats.istats.bnr++;
	if (status & ATH9K_INT_CST)
		sc->debug.stats.istats.cst++;
	if (status & ATH9K_INT_GTT)
		sc->debug.stats.istats.gtt++;
	if (status & ATH9K_INT_TIM)
		sc->debug.stats.istats.tim++;
	if (status & ATH9K_INT_CABEND)
		sc->debug.stats.istats.cabend++;
	if (status & ATH9K_INT_DTIMSYNC)
		sc->debug.stats.istats.dtimsync++;
	if (status & ATH9K_INT_DTIM)
		sc->debug.stats.istats.dtim++;
	if (status & ATH9K_INT_TSFOOR)
		sc->debug.stats.istats.tsfoor++;
	if (status & ATH9K_INT_MCI)
		sc->debug.stats.istats.mci++;
	if (status & ATH9K_INT_GENTIMER)
		sc->debug.stats.istats.gen_timer++;
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
          enum ath9k_int status = 100;
          int _len_sc0 = 1;
          struct ath_softc * sc = (struct ath_softc *) malloc(_len_sc0*sizeof(struct ath_softc));
          for(int _i0 = 0; _i0 < _len_sc0; _i0++) {
            sc[_i0].debug.stats.istats.gen_timer = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.mci = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.tsfoor = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.dtim = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.dtimsync = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.cabend = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.tim = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.gtt = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.cst = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.bnr = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.bmiss = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.swba = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.rx_keycache_miss = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.rxphyerr = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.txurn = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.txok = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.rxorn = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.rxeol = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.rxok = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.bb_watchdog = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.rxhp = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.rxlp = ((-2 * (next_i()%2)) + 1) * next_i();
        sc[_i0].debug.stats.istats.total = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sc__i0__sc_ah0 = 1;
          sc[_i0].sc_ah = (struct TYPE_7__ *) malloc(_len_sc__i0__sc_ah0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_sc__i0__sc_ah0; _j0++) {
            sc[_i0].sc_ah->caps.hw_caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ath_debug_stat_interrupt(sc,status);
          for(int _aux = 0; _aux < _len_sc0; _aux++) {
          free(sc[_aux].sc_ah);
          }
          free(sc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
