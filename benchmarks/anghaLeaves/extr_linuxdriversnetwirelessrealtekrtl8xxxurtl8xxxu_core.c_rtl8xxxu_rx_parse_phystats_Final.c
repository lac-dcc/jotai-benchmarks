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
typedef  int u8 ;
typedef  scalar_t__ u32 ;
struct rtl8xxxu_priv {int dummy; } ;
struct rtl8723au_phy_stats {int cck_agc_rpt_ofdm_cfosho_a; int cck_sig_qual_ofdm_pwdb_all; scalar_t__ sgi_en; } ;
struct ieee80211_rx_status {int signal; int /*<<< orphan*/  enc_flags; } ;

/* Variables and functions */
 scalar_t__ DESC_RATE_6M ; 
 int /*<<< orphan*/  RX_ENC_FLAG_SHORT_GI ; 

__attribute__((used)) static void rtl8xxxu_rx_parse_phystats(struct rtl8xxxu_priv *priv,
				       struct ieee80211_rx_status *rx_status,
				       struct rtl8723au_phy_stats *phy_stats,
				       u32 rxmcs)
{
	if (phy_stats->sgi_en)
		rx_status->enc_flags |= RX_ENC_FLAG_SHORT_GI;

	if (rxmcs < DESC_RATE_6M) {
		/*
		 * Handle PHY stats for CCK rates
		 */
		u8 cck_agc_rpt = phy_stats->cck_agc_rpt_ofdm_cfosho_a;

		switch (cck_agc_rpt & 0xc0) {
		case 0xc0:
			rx_status->signal = -46 - (cck_agc_rpt & 0x3e);
			break;
		case 0x80:
			rx_status->signal = -26 - (cck_agc_rpt & 0x3e);
			break;
		case 0x40:
			rx_status->signal = -12 - (cck_agc_rpt & 0x3e);
			break;
		case 0x00:
			rx_status->signal = 16 - (cck_agc_rpt & 0x3e);
			break;
		}
	} else {
		rx_status->signal =
			(phy_stats->cck_sig_qual_ofdm_pwdb_all >> 1) - 110;
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
          long rxmcs = 100;
          int _len_priv0 = 1;
          struct rtl8xxxu_priv * priv = (struct rtl8xxxu_priv *) malloc(_len_priv0*sizeof(struct rtl8xxxu_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_status0 = 1;
          struct ieee80211_rx_status * rx_status = (struct ieee80211_rx_status *) malloc(_len_rx_status0*sizeof(struct ieee80211_rx_status));
          for(int _i0 = 0; _i0 < _len_rx_status0; _i0++) {
            rx_status[_i0].signal = ((-2 * (next_i()%2)) + 1) * next_i();
        rx_status[_i0].enc_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy_stats0 = 1;
          struct rtl8723au_phy_stats * phy_stats = (struct rtl8723au_phy_stats *) malloc(_len_phy_stats0*sizeof(struct rtl8723au_phy_stats));
          for(int _i0 = 0; _i0 < _len_phy_stats0; _i0++) {
            phy_stats[_i0].cck_agc_rpt_ofdm_cfosho_a = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_stats[_i0].cck_sig_qual_ofdm_pwdb_all = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_stats[_i0].sgi_en = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtl8xxxu_rx_parse_phystats(priv,rx_status,phy_stats,rxmcs);
          free(priv);
          free(rx_status);
          free(phy_stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
