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
struct sxgbe_rx_ctxt_desc {scalar_t__ ptp_msgtype; scalar_t__ tstamp_dropped; } ;
struct sxgbe_extra_stats {int /*<<< orphan*/  rx_ptp_resv_msg_type; int /*<<< orphan*/  rx_ptp_signal; int /*<<< orphan*/  rx_ptp_mgmt; int /*<<< orphan*/  rx_ptp_announce; int /*<<< orphan*/  rx_ptp_type_pdelay_follow_up; int /*<<< orphan*/  rx_ptp_type_pdelay_resp; int /*<<< orphan*/  rx_ptp_type_pdelay_req; int /*<<< orphan*/  rx_ptp_type_delay_resp; int /*<<< orphan*/  rx_ptp_type_delay_req; int /*<<< orphan*/  rx_ptp_type_follow_up; int /*<<< orphan*/  rx_ptp_type_sync; int /*<<< orphan*/  rx_msg_type_no_ptp; int /*<<< orphan*/  timestamp_dropped; } ;

/* Variables and functions */
 scalar_t__ RX_NO_PTP ; 
 scalar_t__ RX_PTP_ANNOUNCE ; 
 scalar_t__ RX_PTP_DELAY_REQ ; 
 scalar_t__ RX_PTP_DELAY_RESP ; 
 scalar_t__ RX_PTP_FOLLOW_UP ; 
 scalar_t__ RX_PTP_MGMT ; 
 scalar_t__ RX_PTP_PDELAY_FOLLOW_UP ; 
 scalar_t__ RX_PTP_PDELAY_REQ ; 
 scalar_t__ RX_PTP_PDELAY_RESP ; 
 scalar_t__ RX_PTP_RESV_MSG ; 
 scalar_t__ RX_PTP_SIGNAL ; 
 scalar_t__ RX_PTP_SYNC ; 

__attribute__((used)) static void sxgbe_rx_ctxt_wbstatus(struct sxgbe_rx_ctxt_desc *p,
				   struct sxgbe_extra_stats *x)
{
	if (p->tstamp_dropped)
		x->timestamp_dropped++;

	/* ptp */
	if (p->ptp_msgtype == RX_NO_PTP)
		x->rx_msg_type_no_ptp++;
	else if (p->ptp_msgtype == RX_PTP_SYNC)
		x->rx_ptp_type_sync++;
	else if (p->ptp_msgtype == RX_PTP_FOLLOW_UP)
		x->rx_ptp_type_follow_up++;
	else if (p->ptp_msgtype == RX_PTP_DELAY_REQ)
		x->rx_ptp_type_delay_req++;
	else if (p->ptp_msgtype == RX_PTP_DELAY_RESP)
		x->rx_ptp_type_delay_resp++;
	else if (p->ptp_msgtype == RX_PTP_PDELAY_REQ)
		x->rx_ptp_type_pdelay_req++;
	else if (p->ptp_msgtype == RX_PTP_PDELAY_RESP)
		x->rx_ptp_type_pdelay_resp++;
	else if (p->ptp_msgtype == RX_PTP_PDELAY_FOLLOW_UP)
		x->rx_ptp_type_pdelay_follow_up++;
	else if (p->ptp_msgtype == RX_PTP_ANNOUNCE)
		x->rx_ptp_announce++;
	else if (p->ptp_msgtype == RX_PTP_MGMT)
		x->rx_ptp_mgmt++;
	else if (p->ptp_msgtype == RX_PTP_SIGNAL)
		x->rx_ptp_signal++;
	else if (p->ptp_msgtype == RX_PTP_RESV_MSG)
		x->rx_ptp_resv_msg_type++;
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
          int _len_p0 = 1;
          struct sxgbe_rx_ctxt_desc * p = (struct sxgbe_rx_ctxt_desc *) malloc(_len_p0*sizeof(struct sxgbe_rx_ctxt_desc));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].ptp_msgtype = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].tstamp_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_x0 = 1;
          struct sxgbe_extra_stats * x = (struct sxgbe_extra_stats *) malloc(_len_x0*sizeof(struct sxgbe_extra_stats));
          for(int _i0 = 0; _i0 < _len_x0; _i0++) {
            x[_i0].rx_ptp_resv_msg_type = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].rx_ptp_signal = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].rx_ptp_mgmt = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].rx_ptp_announce = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].rx_ptp_type_pdelay_follow_up = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].rx_ptp_type_pdelay_resp = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].rx_ptp_type_pdelay_req = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].rx_ptp_type_delay_resp = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].rx_ptp_type_delay_req = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].rx_ptp_type_follow_up = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].rx_ptp_type_sync = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].rx_msg_type_no_ptp = ((-2 * (next_i()%2)) + 1) * next_i();
        x[_i0].timestamp_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sxgbe_rx_ctxt_wbstatus(p,x);
          free(p);
          free(x);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
