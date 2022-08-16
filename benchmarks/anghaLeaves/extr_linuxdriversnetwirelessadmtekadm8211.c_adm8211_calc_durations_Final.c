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

/* Variables and functions */
 int PLCP_SIGNAL_11M ; 
 int PLCP_SIGNAL_2M ; 

__attribute__((used)) static void adm8211_calc_durations(int *dur, int *plcp, size_t payload_len, int len,
				   int plcp_signal, int short_preamble)
{
	/* Alternative calculation from NetBSD: */

/* IEEE 802.11b durations for DSSS PHY in microseconds */
#define IEEE80211_DUR_DS_LONG_PREAMBLE	144
#define IEEE80211_DUR_DS_SHORT_PREAMBLE	72
#define IEEE80211_DUR_DS_FAST_PLCPHDR	24
#define IEEE80211_DUR_DS_SLOW_PLCPHDR	48
#define IEEE80211_DUR_DS_SLOW_ACK	112
#define IEEE80211_DUR_DS_FAST_ACK	56
#define IEEE80211_DUR_DS_SLOW_CTS	112
#define IEEE80211_DUR_DS_FAST_CTS	56
#define IEEE80211_DUR_DS_SLOT		20
#define IEEE80211_DUR_DS_SIFS		10

	int remainder;

	*dur = (80 * (24 + payload_len) + plcp_signal - 1)
		/ plcp_signal;

	if (plcp_signal <= PLCP_SIGNAL_2M)
		/* 1-2Mbps WLAN: send ACK/CTS at 1Mbps */
		*dur += 3 * (IEEE80211_DUR_DS_SIFS +
			     IEEE80211_DUR_DS_SHORT_PREAMBLE +
			     IEEE80211_DUR_DS_FAST_PLCPHDR) +
			     IEEE80211_DUR_DS_SLOW_CTS + IEEE80211_DUR_DS_SLOW_ACK;
	else
		/* 5-11Mbps WLAN: send ACK/CTS at 2Mbps */
		*dur += 3 * (IEEE80211_DUR_DS_SIFS +
			     IEEE80211_DUR_DS_SHORT_PREAMBLE +
			     IEEE80211_DUR_DS_FAST_PLCPHDR) +
			     IEEE80211_DUR_DS_FAST_CTS + IEEE80211_DUR_DS_FAST_ACK;

	/* lengthen duration if long preamble */
	if (!short_preamble)
		*dur +=	3 * (IEEE80211_DUR_DS_LONG_PREAMBLE -
			     IEEE80211_DUR_DS_SHORT_PREAMBLE) +
			3 * (IEEE80211_DUR_DS_SLOW_PLCPHDR -
			     IEEE80211_DUR_DS_FAST_PLCPHDR);


	*plcp = (80 * len) / plcp_signal;
	remainder = (80 * len) % plcp_signal;
	if (plcp_signal == PLCP_SIGNAL_11M &&
	    remainder <= 30 && remainder > 0)
		*plcp = (*plcp | 0x8000) + 1;
	else if (remainder)
		(*plcp)++;
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
          unsigned long payload_len = 100;
          int len = 100;
          int plcp_signal = 100;
          int short_preamble = 100;
          int _len_dur0 = 1;
          int * dur = (int *) malloc(_len_dur0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dur0; _i0++) {
            dur[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plcp0 = 1;
          int * plcp = (int *) malloc(_len_plcp0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_plcp0; _i0++) {
            plcp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adm8211_calc_durations(dur,plcp,payload_len,len,plcp_signal,short_preamble);
          free(dur);
          free(plcp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
