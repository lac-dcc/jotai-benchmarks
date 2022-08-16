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
struct if_lim_perf_stat {scalar_t__ lim_total_txpkts; int lim_total_rxpkts; int lim_conn_attempts; int lim_packet_loss_percent; int lim_total_retxpkts; int lim_packet_ooo_percent; int lim_total_oopkts; int lim_conn_timeout_percent; int lim_conn_timeouts; scalar_t__ lim_dl_max_bandwidth; int lim_dl_detected; scalar_t__ lim_ul_max_bandwidth; scalar_t__ lim_rtt_min; int lim_ul_detected; scalar_t__ lim_bk_txpkts; } ;
typedef  int /*<<< orphan*/  boolean_t ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 
 int NSTAT_LIM_CONN_TIMEOUT_PERCENT_THRESHOLD ; 
 scalar_t__ NSTAT_LIM_DL_MAX_BANDWIDTH_THRESHOLD ; 
 int NSTAT_LIM_PACKET_LOSS_PERCENT_THRESHOLD ; 
 scalar_t__ NSTAT_LIM_UL_MAX_BANDWIDTH_THRESHOLD ; 
 scalar_t__ NSTAT_LIM_UL_MIN_RTT_THRESHOLD ; 
 int /*<<< orphan*/  TRUE ; 
 int nstat_lim_min_rx_pkts ; 
 scalar_t__ nstat_lim_min_tx_pkts ; 

__attribute__((used)) static boolean_t
nstat_lim_activity_check(struct if_lim_perf_stat *st)
{
	/* check that the current activity is enough to report stats */
	if (st->lim_total_txpkts < nstat_lim_min_tx_pkts ||
	    st->lim_total_rxpkts < nstat_lim_min_rx_pkts ||
	    st->lim_conn_attempts == 0)
		return (FALSE);

	/*
	 * Compute percentages if there was enough activity. Use
	 * shift-left by 10 to preserve precision.
	 */
	st->lim_packet_loss_percent = ((st->lim_total_retxpkts << 10) /
	    st->lim_total_txpkts) * 100;

	st->lim_packet_ooo_percent = ((st->lim_total_oopkts << 10) /
	    st->lim_total_rxpkts) * 100;

	st->lim_conn_timeout_percent = ((st->lim_conn_timeouts << 10) /
	    st->lim_conn_attempts) * 100;

	/*
	 * Is Low Internet detected? First order metrics are bandwidth
	 * and RTT. If these metrics are below the minimum thresholds
	 * defined then the network attachment can be classified as
	 * having Low Internet capacity.
	 *
	 * High connection timeout rate also indicates Low Internet
	 * capacity.
	 */
	if (st->lim_dl_max_bandwidth > 0 &&
	    st->lim_dl_max_bandwidth <= NSTAT_LIM_DL_MAX_BANDWIDTH_THRESHOLD)
		st->lim_dl_detected = 1;

	if ((st->lim_ul_max_bandwidth > 0 &&
	    st->lim_ul_max_bandwidth <= NSTAT_LIM_UL_MAX_BANDWIDTH_THRESHOLD) ||
	    st->lim_rtt_min >= NSTAT_LIM_UL_MIN_RTT_THRESHOLD)
		st->lim_ul_detected = 1;

	if (st->lim_conn_attempts > 20 &&
	    st->lim_conn_timeout_percent >=
	    NSTAT_LIM_CONN_TIMEOUT_PERCENT_THRESHOLD)
		st->lim_ul_detected = 1;
	/*
	 * Second order metrics: If there was high packet loss even after
	 * using delay based algorithms then we classify it as Low Internet
	 * again
	 */
	if (st->lim_bk_txpkts >= nstat_lim_min_tx_pkts &&
	    st->lim_packet_loss_percent >=
	    NSTAT_LIM_PACKET_LOSS_PERCENT_THRESHOLD)
		st->lim_ul_detected = 1;
	return (TRUE);
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
          int _len_st0 = 1;
          struct if_lim_perf_stat * st = (struct if_lim_perf_stat *) malloc(_len_st0*sizeof(struct if_lim_perf_stat));
          for(int _i0 = 0; _i0 < _len_st0; _i0++) {
            st[_i0].lim_total_txpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_total_rxpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_conn_attempts = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_packet_loss_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_total_retxpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_packet_ooo_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_total_oopkts = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_conn_timeout_percent = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_conn_timeouts = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_dl_max_bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_dl_detected = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_ul_max_bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_rtt_min = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_ul_detected = ((-2 * (next_i()%2)) + 1) * next_i();
        st[_i0].lim_bk_txpkts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nstat_lim_activity_check(st);
          printf("%d\n", benchRet); 
          free(st);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
