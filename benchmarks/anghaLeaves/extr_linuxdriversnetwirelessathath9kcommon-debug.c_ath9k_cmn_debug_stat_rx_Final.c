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
struct ath_rx_status {int rs_status; size_t rs_phyerr; scalar_t__ rs_datalen; } ;
struct ath_rx_stats {int /*<<< orphan*/ * phy_err_stats; int /*<<< orphan*/  phy_err; int /*<<< orphan*/  decrypt_busy_err; int /*<<< orphan*/  post_delim_crc_err; int /*<<< orphan*/  pre_delim_crc_err; int /*<<< orphan*/  mic_err; int /*<<< orphan*/  decrypt_crc_err; int /*<<< orphan*/  crc_err; int /*<<< orphan*/  rx_bytes_all; int /*<<< orphan*/  rx_pkts_all; } ;

/* Variables and functions */
 size_t ATH9K_PHYERR_MAX ; 
 int ATH9K_RXERR_CRC ; 
 int ATH9K_RXERR_DECRYPT ; 
 int ATH9K_RXERR_MIC ; 
 int ATH9K_RXERR_PHY ; 
 int ATH9K_RX_DECRYPT_BUSY ; 
 int ATH9K_RX_DELIM_CRC_POST ; 
 int ATH9K_RX_DELIM_CRC_PRE ; 

void ath9k_cmn_debug_stat_rx(struct ath_rx_stats *rxstats,
			     struct ath_rx_status *rs)
{
#define RX_PHY_ERR_INC(c) rxstats->phy_err_stats[c]++
#define RX_CMN_STAT_INC(c) (rxstats->c++)

	RX_CMN_STAT_INC(rx_pkts_all);
	rxstats->rx_bytes_all += rs->rs_datalen;

	if (rs->rs_status & ATH9K_RXERR_CRC)
		RX_CMN_STAT_INC(crc_err);
	if (rs->rs_status & ATH9K_RXERR_DECRYPT)
		RX_CMN_STAT_INC(decrypt_crc_err);
	if (rs->rs_status & ATH9K_RXERR_MIC)
		RX_CMN_STAT_INC(mic_err);
	if (rs->rs_status & ATH9K_RX_DELIM_CRC_PRE)
		RX_CMN_STAT_INC(pre_delim_crc_err);
	if (rs->rs_status & ATH9K_RX_DELIM_CRC_POST)
		RX_CMN_STAT_INC(post_delim_crc_err);
	if (rs->rs_status & ATH9K_RX_DECRYPT_BUSY)
		RX_CMN_STAT_INC(decrypt_busy_err);

	if (rs->rs_status & ATH9K_RXERR_PHY) {
		RX_CMN_STAT_INC(phy_err);
		if (rs->rs_phyerr < ATH9K_PHYERR_MAX)
			RX_PHY_ERR_INC(rs->rs_phyerr);
	}

#undef RX_CMN_STAT_INC
#undef RX_PHY_ERR_INC
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
          int _len_rxstats0 = 1;
          struct ath_rx_stats * rxstats = (struct ath_rx_stats *) malloc(_len_rxstats0*sizeof(struct ath_rx_stats));
          for(int _i0 = 0; _i0 < _len_rxstats0; _i0++) {
              int _len_rxstats__i0__phy_err_stats0 = 1;
          rxstats[_i0].phy_err_stats = (int *) malloc(_len_rxstats__i0__phy_err_stats0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rxstats__i0__phy_err_stats0; _j0++) {
            rxstats[_i0].phy_err_stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        rxstats[_i0].phy_err = ((-2 * (next_i()%2)) + 1) * next_i();
        rxstats[_i0].decrypt_busy_err = ((-2 * (next_i()%2)) + 1) * next_i();
        rxstats[_i0].post_delim_crc_err = ((-2 * (next_i()%2)) + 1) * next_i();
        rxstats[_i0].pre_delim_crc_err = ((-2 * (next_i()%2)) + 1) * next_i();
        rxstats[_i0].mic_err = ((-2 * (next_i()%2)) + 1) * next_i();
        rxstats[_i0].decrypt_crc_err = ((-2 * (next_i()%2)) + 1) * next_i();
        rxstats[_i0].crc_err = ((-2 * (next_i()%2)) + 1) * next_i();
        rxstats[_i0].rx_bytes_all = ((-2 * (next_i()%2)) + 1) * next_i();
        rxstats[_i0].rx_pkts_all = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rs0 = 1;
          struct ath_rx_status * rs = (struct ath_rx_status *) malloc(_len_rs0*sizeof(struct ath_rx_status));
          for(int _i0 = 0; _i0 < _len_rs0; _i0++) {
            rs[_i0].rs_status = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].rs_phyerr = ((-2 * (next_i()%2)) + 1) * next_i();
        rs[_i0].rs_datalen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ath9k_cmn_debug_stat_rx(rxstats,rs);
          for(int _aux = 0; _aux < _len_rxstats0; _aux++) {
          free(rxstats[_aux].phy_err_stats);
          }
          free(rxstats);
          free(rs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
