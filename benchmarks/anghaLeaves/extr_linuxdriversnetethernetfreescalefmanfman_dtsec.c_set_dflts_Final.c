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
struct dtsec_cfg {int tx_pad_crc; int ptp_tsu_en; int ptp_exception_en; int /*<<< orphan*/  maximum_frame; int /*<<< orphan*/  back_to_back_ipg; int /*<<< orphan*/  min_ifg_enforcement; int /*<<< orphan*/  non_back_to_back_ipg2; int /*<<< orphan*/  non_back_to_back_ipg1; int /*<<< orphan*/  tx_pause_time_extd; int /*<<< orphan*/  preamble_len; int /*<<< orphan*/  rx_prepend; int /*<<< orphan*/  tx_pause_time; int /*<<< orphan*/  halfdup_coll_window; int /*<<< orphan*/  halfdup_retransmit; } ;

/* Variables and functions */
 int /*<<< orphan*/  DEFAULT_BACK_TO_BACK_IPG ; 
 int /*<<< orphan*/  DEFAULT_HALFDUP_COLL_WINDOW ; 
 int /*<<< orphan*/  DEFAULT_HALFDUP_RETRANSMIT ; 
 int /*<<< orphan*/  DEFAULT_MAXIMUM_FRAME ; 
 int /*<<< orphan*/  DEFAULT_MIN_IFG_ENFORCEMENT ; 
 int /*<<< orphan*/  DEFAULT_NON_BACK_TO_BACK_IPG1 ; 
 int /*<<< orphan*/  DEFAULT_NON_BACK_TO_BACK_IPG2 ; 
 int /*<<< orphan*/  DEFAULT_PREAMBLE_LEN ; 
 int /*<<< orphan*/  DEFAULT_RX_PREPEND ; 
 int /*<<< orphan*/  DEFAULT_TX_PAUSE_TIME ; 
 int /*<<< orphan*/  DEFAULT_TX_PAUSE_TIME_EXTD ; 

__attribute__((used)) static void set_dflts(struct dtsec_cfg *cfg)
{
	cfg->halfdup_retransmit = DEFAULT_HALFDUP_RETRANSMIT;
	cfg->halfdup_coll_window = DEFAULT_HALFDUP_COLL_WINDOW;
	cfg->tx_pad_crc = true;
	cfg->tx_pause_time = DEFAULT_TX_PAUSE_TIME;
	/* PHY address 0 is reserved (DPAA RM) */
	cfg->rx_prepend = DEFAULT_RX_PREPEND;
	cfg->ptp_tsu_en = true;
	cfg->ptp_exception_en = true;
	cfg->preamble_len = DEFAULT_PREAMBLE_LEN;
	cfg->tx_pause_time_extd = DEFAULT_TX_PAUSE_TIME_EXTD;
	cfg->non_back_to_back_ipg1 = DEFAULT_NON_BACK_TO_BACK_IPG1;
	cfg->non_back_to_back_ipg2 = DEFAULT_NON_BACK_TO_BACK_IPG2;
	cfg->min_ifg_enforcement = DEFAULT_MIN_IFG_ENFORCEMENT;
	cfg->back_to_back_ipg = DEFAULT_BACK_TO_BACK_IPG;
	cfg->maximum_frame = DEFAULT_MAXIMUM_FRAME;
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
          int _len_cfg0 = 1;
          struct dtsec_cfg * cfg = (struct dtsec_cfg *) malloc(_len_cfg0*sizeof(struct dtsec_cfg));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0].tx_pad_crc = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].ptp_tsu_en = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].ptp_exception_en = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].maximum_frame = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].back_to_back_ipg = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].min_ifg_enforcement = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].non_back_to_back_ipg2 = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].non_back_to_back_ipg1 = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].tx_pause_time_extd = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].preamble_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].rx_prepend = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].tx_pause_time = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].halfdup_coll_window = ((-2 * (next_i()%2)) + 1) * next_i();
        cfg[_i0].halfdup_retransmit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_dflts(cfg);
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
