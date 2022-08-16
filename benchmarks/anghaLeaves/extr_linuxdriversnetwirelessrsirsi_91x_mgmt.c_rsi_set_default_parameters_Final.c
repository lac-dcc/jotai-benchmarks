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
struct rsi_common {int channel; int min_rate; int iface_down; int driver_mode; int ulp_ps_handshake_mode; int obm_ant_sel_val; int /*<<< orphan*/  dtim_cnt; int /*<<< orphan*/  beacon_interval; scalar_t__ wlan_rf_power_mode; scalar_t__ rf_power_val; scalar_t__ lp_ps_handshake_mode; int /*<<< orphan*/  endpoint; int /*<<< orphan*/  fsm_state; int /*<<< orphan*/  rts_threshold; int /*<<< orphan*/  channel_width; int /*<<< orphan*/  band; } ;

/* Variables and functions */
 int /*<<< orphan*/  BW_20MHZ ; 
 int /*<<< orphan*/  EP_2GHZ_20MHZ ; 
 int /*<<< orphan*/  FSM_CARD_NOT_READY ; 
 int /*<<< orphan*/  IEEE80211_MAX_RTS_THRESHOLD ; 
 int /*<<< orphan*/  NL80211_BAND_2GHZ ; 
 int /*<<< orphan*/  RSI_BEACON_INTERVAL ; 
 int /*<<< orphan*/  RSI_DTIM_COUNT ; 

__attribute__((used)) static void rsi_set_default_parameters(struct rsi_common *common)
{
	common->band = NL80211_BAND_2GHZ;
	common->channel_width = BW_20MHZ;
	common->rts_threshold = IEEE80211_MAX_RTS_THRESHOLD;
	common->channel = 1;
	common->min_rate = 0xffff;
	common->fsm_state = FSM_CARD_NOT_READY;
	common->iface_down = true;
	common->endpoint = EP_2GHZ_20MHZ;
	common->driver_mode = 1; /* End to end mode */
	common->lp_ps_handshake_mode = 0; /* Default no handShake mode*/
	common->ulp_ps_handshake_mode = 2; /* Default PKT handShake mode*/
	common->rf_power_val = 0; /* Default 1.9V */
	common->wlan_rf_power_mode = 0;
	common->obm_ant_sel_val = 2;
	common->beacon_interval = RSI_BEACON_INTERVAL;
	common->dtim_cnt = RSI_DTIM_COUNT;
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
          int _len_common0 = 1;
          struct rsi_common * common = (struct rsi_common *) malloc(_len_common0*sizeof(struct rsi_common));
          for(int _i0 = 0; _i0 < _len_common0; _i0++) {
            common[_i0].channel = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].min_rate = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].iface_down = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].driver_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].ulp_ps_handshake_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].obm_ant_sel_val = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].dtim_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].beacon_interval = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].wlan_rf_power_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].rf_power_val = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].lp_ps_handshake_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].endpoint = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].fsm_state = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].rts_threshold = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].channel_width = ((-2 * (next_i()%2)) + 1) * next_i();
        common[_i0].band = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rsi_set_default_parameters(common);
          free(common);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
