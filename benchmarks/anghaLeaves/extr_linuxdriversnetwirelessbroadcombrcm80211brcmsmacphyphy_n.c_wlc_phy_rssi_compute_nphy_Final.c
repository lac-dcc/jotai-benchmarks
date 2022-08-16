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
struct d11rxhdr {int PhyRxStatus_1; int PhyRxStatus_0; int PhyRxStatus_2; } ;
struct brcms_phy {TYPE_1__* sh; } ;
typedef  int s16 ;
struct TYPE_2__ {scalar_t__ rssi_mode; } ;

/* Variables and functions */
 int PRXS1_nphy_PWR0_MASK ; 
 int PRXS1_nphy_PWR1_MASK ; 
 scalar_t__ RSSI_ANT_MERGE_AVG ; 
 scalar_t__ RSSI_ANT_MERGE_MAX ; 
 scalar_t__ RSSI_ANT_MERGE_MIN ; 

int
wlc_phy_rssi_compute_nphy(struct brcms_phy *pi, struct d11rxhdr *rxh)
{
	s16 rxpwr, rxpwr0, rxpwr1;
	s16 phyRx0_l, phyRx2_l;

	rxpwr = 0;
	rxpwr0 = rxh->PhyRxStatus_1 & PRXS1_nphy_PWR0_MASK;
	rxpwr1 = (rxh->PhyRxStatus_1 & PRXS1_nphy_PWR1_MASK) >> 8;

	if (rxpwr0 > 127)
		rxpwr0 -= 256;
	if (rxpwr1 > 127)
		rxpwr1 -= 256;

	phyRx0_l = rxh->PhyRxStatus_0 & 0x00ff;
	phyRx2_l = rxh->PhyRxStatus_2 & 0x00ff;
	if (phyRx2_l > 127)
		phyRx2_l -= 256;

	if (((rxpwr0 == 16) || (rxpwr0 == 32))) {
		rxpwr0 = rxpwr1;
		rxpwr1 = phyRx2_l;
	}

	if (pi->sh->rssi_mode == RSSI_ANT_MERGE_MAX)
		rxpwr = (rxpwr0 > rxpwr1) ? rxpwr0 : rxpwr1;
	else if (pi->sh->rssi_mode == RSSI_ANT_MERGE_MIN)
		rxpwr = (rxpwr0 < rxpwr1) ? rxpwr0 : rxpwr1;
	else if (pi->sh->rssi_mode == RSSI_ANT_MERGE_AVG)
		rxpwr = (rxpwr0 + rxpwr1) >> 1;

	return rxpwr;
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
          int _len_pi0 = 1;
          struct brcms_phy * pi = (struct brcms_phy *) malloc(_len_pi0*sizeof(struct brcms_phy));
          for(int _i0 = 0; _i0 < _len_pi0; _i0++) {
              int _len_pi__i0__sh0 = 1;
          pi[_i0].sh = (struct TYPE_2__ *) malloc(_len_pi__i0__sh0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pi__i0__sh0; _j0++) {
            pi[_i0].sh->rssi_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rxh0 = 1;
          struct d11rxhdr * rxh = (struct d11rxhdr *) malloc(_len_rxh0*sizeof(struct d11rxhdr));
          for(int _i0 = 0; _i0 < _len_rxh0; _i0++) {
            rxh[_i0].PhyRxStatus_1 = ((-2 * (next_i()%2)) + 1) * next_i();
        rxh[_i0].PhyRxStatus_0 = ((-2 * (next_i()%2)) + 1) * next_i();
        rxh[_i0].PhyRxStatus_2 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wlc_phy_rssi_compute_nphy(pi,rxh);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pi0; _aux++) {
          free(pi[_aux].sh);
          }
          free(pi);
          free(rxh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
