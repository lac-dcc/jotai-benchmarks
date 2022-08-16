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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ uint ;
typedef  scalar_t__ u64 ;
struct sitesurvey_ctrl {scalar_t__ last_tx_pkts; scalar_t__ last_rx_pkts; int traffic_busy; } ;
struct registry_priv {scalar_t__ busy_thresh; } ;
struct mlme_priv {struct sitesurvey_ctrl sitesurveyctrl; } ;
struct TYPE_4__ {scalar_t__ rx_pkts; } ;
struct TYPE_3__ {scalar_t__ tx_pkts; } ;
struct _adapter {TYPE_2__ recvpriv; TYPE_1__ xmitpriv; struct registry_priv registrypriv; struct mlme_priv mlmepriv; } ;

/* Variables and functions */

void _r8712_sitesurvey_ctrl_handler(struct _adapter *adapter)
{
	struct mlme_priv *pmlmepriv = &adapter->mlmepriv;
	struct sitesurvey_ctrl	*psitesurveyctrl = &pmlmepriv->sitesurveyctrl;
	struct registry_priv	*pregistrypriv = &adapter->registrypriv;
	u64 current_tx_pkts;
	uint current_rx_pkts;

	current_tx_pkts = (adapter->xmitpriv.tx_pkts) -
			  (psitesurveyctrl->last_tx_pkts);
	current_rx_pkts = (adapter->recvpriv.rx_pkts) -
			  (psitesurveyctrl->last_rx_pkts);
	psitesurveyctrl->last_tx_pkts = adapter->xmitpriv.tx_pkts;
	psitesurveyctrl->last_rx_pkts = adapter->recvpriv.rx_pkts;
	if ((current_tx_pkts > pregistrypriv->busy_thresh) ||
	    (current_rx_pkts > pregistrypriv->busy_thresh))
		psitesurveyctrl->traffic_busy = true;
	else
		psitesurveyctrl->traffic_busy = false;
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
          int _len_adapter0 = 1;
          struct _adapter * adapter = (struct _adapter *) malloc(_len_adapter0*sizeof(struct _adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].recvpriv.rx_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].xmitpriv.tx_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].registrypriv.busy_thresh = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].mlmepriv.sitesurveyctrl.last_tx_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].mlmepriv.sitesurveyctrl.last_rx_pkts = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].mlmepriv.sitesurveyctrl.traffic_busy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _r8712_sitesurvey_ctrl_handler(adapter);
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
