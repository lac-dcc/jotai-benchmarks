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
struct vnt_private {int exist_sw_net_addr; scalar_t__ preamble_type; int /*<<< orphan*/  auto_fb_ctrl; int /*<<< orphan*/  bb_type; int /*<<< orphan*/  packet_type; int /*<<< orphan*/  op_mode; int /*<<< orphan*/  long_retry_limit; int /*<<< orphan*/  short_retry_limit; scalar_t__ num_rcb; scalar_t__ num_tx_context; } ;

/* Variables and functions */
 int /*<<< orphan*/  AUTO_FB_0 ; 
 int /*<<< orphan*/  BBP_TYPE_DEF ; 
 scalar_t__ CB_MAX_RX_DESC ; 
 scalar_t__ CB_MAX_TX_DESC ; 
 scalar_t__ CB_MIN_RX_DESC ; 
 scalar_t__ CB_MIN_TX_DESC ; 
 int /*<<< orphan*/  LONG_RETRY_DEF ; 
 int /*<<< orphan*/  NL80211_IFTYPE_UNSPECIFIED ; 
 scalar_t__ RX_DESC_DEF0 ; 
 int /*<<< orphan*/  SHORT_RETRY_DEF ; 
 scalar_t__ TX_DESC_DEF0 ; 
 scalar_t__ vnt_rx_buffers ; 
 scalar_t__ vnt_tx_buffers ; 

__attribute__((used)) static void vnt_set_options(struct vnt_private *priv)
{
	/* Set number of TX buffers */
	if (vnt_tx_buffers < CB_MIN_TX_DESC || vnt_tx_buffers > CB_MAX_TX_DESC)
		priv->num_tx_context = TX_DESC_DEF0;
	else
		priv->num_tx_context = vnt_tx_buffers;

	/* Set number of RX buffers */
	if (vnt_rx_buffers < CB_MIN_RX_DESC || vnt_rx_buffers > CB_MAX_RX_DESC)
		priv->num_rcb = RX_DESC_DEF0;
	else
		priv->num_rcb = vnt_rx_buffers;

	priv->short_retry_limit = SHORT_RETRY_DEF;
	priv->long_retry_limit = LONG_RETRY_DEF;
	priv->op_mode = NL80211_IFTYPE_UNSPECIFIED;
	priv->bb_type = BBP_TYPE_DEF;
	priv->packet_type = priv->bb_type;
	priv->auto_fb_ctrl = AUTO_FB_0;
	priv->preamble_type = 0;
	priv->exist_sw_net_addr = false;
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
          int _len_priv0 = 1;
          struct vnt_private * priv = (struct vnt_private *) malloc(_len_priv0*sizeof(struct vnt_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].exist_sw_net_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].preamble_type = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].auto_fb_ctrl = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].bb_type = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].packet_type = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].op_mode = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].long_retry_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].short_retry_limit = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].num_rcb = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].num_tx_context = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vnt_set_options(priv);
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
