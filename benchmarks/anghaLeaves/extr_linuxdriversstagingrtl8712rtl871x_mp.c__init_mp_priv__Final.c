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
struct mp_priv {int curr_ch; int curr_txpoweridx; scalar_t__ rx_crcerrpktcount; scalar_t__ rx_pktcount; scalar_t__ tx_pktcount; scalar_t__ check_mp_pkt; int /*<<< orphan*/  antenna_rx; int /*<<< orphan*/  antenna_tx; scalar_t__ curr_rateidx; int /*<<< orphan*/  curr_modem; int /*<<< orphan*/  mode; } ;

/* Variables and functions */
 int /*<<< orphan*/  ANTENNA_A ; 
 int /*<<< orphan*/  ANTENNA_AB ; 
 int /*<<< orphan*/  MIXED_PHY ; 
 int /*<<< orphan*/  _LOOPBOOK_MODE_ ; 

__attribute__((used)) static void _init_mp_priv_(struct mp_priv *pmp_priv)
{
	pmp_priv->mode = _LOOPBOOK_MODE_;
	pmp_priv->curr_ch = 1;
	pmp_priv->curr_modem = MIXED_PHY;
	pmp_priv->curr_rateidx = 0;
	pmp_priv->curr_txpoweridx = 0x14;
	pmp_priv->antenna_tx = ANTENNA_A;
	pmp_priv->antenna_rx = ANTENNA_AB;
	pmp_priv->check_mp_pkt = 0;
	pmp_priv->tx_pktcount = 0;
	pmp_priv->rx_pktcount = 0;
	pmp_priv->rx_crcerrpktcount = 0;
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
          int _len_pmp_priv0 = 1;
          struct mp_priv * pmp_priv = (struct mp_priv *) malloc(_len_pmp_priv0*sizeof(struct mp_priv));
          for(int _i0 = 0; _i0 < _len_pmp_priv0; _i0++) {
            pmp_priv[_i0].curr_ch = ((-2 * (next_i()%2)) + 1) * next_i();
        pmp_priv[_i0].curr_txpoweridx = ((-2 * (next_i()%2)) + 1) * next_i();
        pmp_priv[_i0].rx_crcerrpktcount = ((-2 * (next_i()%2)) + 1) * next_i();
        pmp_priv[_i0].rx_pktcount = ((-2 * (next_i()%2)) + 1) * next_i();
        pmp_priv[_i0].tx_pktcount = ((-2 * (next_i()%2)) + 1) * next_i();
        pmp_priv[_i0].check_mp_pkt = ((-2 * (next_i()%2)) + 1) * next_i();
        pmp_priv[_i0].antenna_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        pmp_priv[_i0].antenna_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        pmp_priv[_i0].curr_rateidx = ((-2 * (next_i()%2)) + 1) * next_i();
        pmp_priv[_i0].curr_modem = ((-2 * (next_i()%2)) + 1) * next_i();
        pmp_priv[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _init_mp_priv_(pmp_priv);
          free(pmp_priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
