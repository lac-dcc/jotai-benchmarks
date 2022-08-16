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
typedef  int u_int64_t ;
struct ifnet_stats_per_flow {int srtt; int rttupdated; int rttvar; scalar_t__ connreset; scalar_t__ sack_recovery_episodes; scalar_t__ dsack_recvd; scalar_t__ dsack_sent; scalar_t__ pawsdrop; scalar_t__ reordered_pkts; scalar_t__ rcvoopack; scalar_t__ rxmitpkts; scalar_t__ rxpackets; scalar_t__ txpackets; } ;
struct if_tcp_ecn_perf_stat {int rtt_avg; int rtt_var; int /*<<< orphan*/  rst_drop; int /*<<< orphan*/  sack_episodes; int /*<<< orphan*/  total_reorderpkts; int /*<<< orphan*/  total_oopkts; int /*<<< orphan*/  total_rxmitpkts; int /*<<< orphan*/  total_rxpkts; int /*<<< orphan*/  total_txpkts; } ;

/* Variables and functions */
 int TCP_RTTVAR_SHIFT ; 
 int TCP_RTT_SHIFT ; 

__attribute__((used)) static inline void
tcp_flow_ecn_perf_stats(struct ifnet_stats_per_flow *ifs,
    struct if_tcp_ecn_perf_stat *stat)
{
	u_int64_t curval, oldval;
	stat->total_txpkts += ifs->txpackets;
	stat->total_rxpkts += ifs->rxpackets;
	stat->total_rxmitpkts += ifs->rxmitpkts;
	stat->total_oopkts += ifs->rcvoopack;
	stat->total_reorderpkts += (ifs->reordered_pkts +
	    ifs->pawsdrop + ifs->dsack_sent + ifs->dsack_recvd);

	/* Average RTT */
	curval = ifs->srtt >> TCP_RTT_SHIFT;
	if (curval > 0 && ifs->rttupdated >= 16) {
		if (stat->rtt_avg == 0) {
			stat->rtt_avg = curval;
		} else {
			oldval = stat->rtt_avg;
			stat->rtt_avg = ((oldval << 4) - oldval + curval) >> 4;
		}
	}

	/* RTT variance */
	curval = ifs->rttvar >> TCP_RTTVAR_SHIFT;
	if (curval > 0 && ifs->rttupdated >= 16) {
		if (stat->rtt_var == 0) {
			stat->rtt_var = curval;
		} else {
			oldval = stat->rtt_var;
			stat->rtt_var =
			    ((oldval << 4) - oldval + curval) >> 4;
		}
	}

	/* SACK episodes */
	stat->sack_episodes += ifs->sack_recovery_episodes;
	if (ifs->connreset)
		stat->rst_drop++;
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
          int _len_ifs0 = 1;
          struct ifnet_stats_per_flow * ifs = (struct ifnet_stats_per_flow *) malloc(_len_ifs0*sizeof(struct ifnet_stats_per_flow));
          for(int _i0 = 0; _i0 < _len_ifs0; _i0++) {
            ifs[_i0].srtt = ((-2 * (next_i()%2)) + 1) * next_i();
        ifs[_i0].rttupdated = ((-2 * (next_i()%2)) + 1) * next_i();
        ifs[_i0].rttvar = ((-2 * (next_i()%2)) + 1) * next_i();
        ifs[_i0].connreset = ((-2 * (next_i()%2)) + 1) * next_i();
        ifs[_i0].sack_recovery_episodes = ((-2 * (next_i()%2)) + 1) * next_i();
        ifs[_i0].dsack_recvd = ((-2 * (next_i()%2)) + 1) * next_i();
        ifs[_i0].dsack_sent = ((-2 * (next_i()%2)) + 1) * next_i();
        ifs[_i0].pawsdrop = ((-2 * (next_i()%2)) + 1) * next_i();
        ifs[_i0].reordered_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
        ifs[_i0].rcvoopack = ((-2 * (next_i()%2)) + 1) * next_i();
        ifs[_i0].rxmitpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        ifs[_i0].rxpackets = ((-2 * (next_i()%2)) + 1) * next_i();
        ifs[_i0].txpackets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stat0 = 1;
          struct if_tcp_ecn_perf_stat * stat = (struct if_tcp_ecn_perf_stat *) malloc(_len_stat0*sizeof(struct if_tcp_ecn_perf_stat));
          for(int _i0 = 0; _i0 < _len_stat0; _i0++) {
            stat[_i0].rtt_avg = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].rtt_var = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].rst_drop = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].sack_episodes = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].total_reorderpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].total_oopkts = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].total_rxmitpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].total_rxpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        stat[_i0].total_txpkts = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tcp_flow_ecn_perf_stats(ifs,stat);
          free(ifs);
          free(stat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
