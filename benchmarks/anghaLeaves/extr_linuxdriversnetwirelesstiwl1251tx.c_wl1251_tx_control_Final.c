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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u16 ;
struct TYPE_2__ {int rate_policy; int ack_policy; int tx_complete; int qos; scalar_t__ packet_type; } ;
struct tx_double_buffer_desc {TYPE_1__ control; } ;
struct ieee80211_tx_info {int flags; } ;

/* Variables and functions */
 int IEEE80211_FTYPE_DATA ; 
 int IEEE80211_STYPE_QOS_DATA ; 
 int IEEE80211_STYPE_QOS_NULLFUNC ; 
 int IEEE80211_TX_CTL_INJECTED ; 
 int IEEE80211_TX_CTL_NO_ACK ; 

__attribute__((used)) static void wl1251_tx_control(struct tx_double_buffer_desc *tx_hdr,
			      struct ieee80211_tx_info *control, u16 fc)
{
	*(u16 *)&tx_hdr->control = 0;

	tx_hdr->control.rate_policy = 0;

	/* 802.11 packets */
	tx_hdr->control.packet_type = 0;

	/* Also disable retry and ACK policy for injected packets */
	if ((control->flags & IEEE80211_TX_CTL_NO_ACK) ||
	    (control->flags & IEEE80211_TX_CTL_INJECTED)) {
		tx_hdr->control.rate_policy = 1;
		tx_hdr->control.ack_policy = 1;
	}

	tx_hdr->control.tx_complete = 1;

	if ((fc & IEEE80211_FTYPE_DATA) &&
	    ((fc & IEEE80211_STYPE_QOS_DATA) ||
	     (fc & IEEE80211_STYPE_QOS_NULLFUNC)))
		tx_hdr->control.qos = 1;
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
          int fc = 100;
          int _len_tx_hdr0 = 1;
          struct tx_double_buffer_desc * tx_hdr = (struct tx_double_buffer_desc *) malloc(_len_tx_hdr0*sizeof(struct tx_double_buffer_desc));
          for(int _i0 = 0; _i0 < _len_tx_hdr0; _i0++) {
            tx_hdr[_i0].control.rate_policy = ((-2 * (next_i()%2)) + 1) * next_i();
        tx_hdr[_i0].control.ack_policy = ((-2 * (next_i()%2)) + 1) * next_i();
        tx_hdr[_i0].control.tx_complete = ((-2 * (next_i()%2)) + 1) * next_i();
        tx_hdr[_i0].control.qos = ((-2 * (next_i()%2)) + 1) * next_i();
        tx_hdr[_i0].control.packet_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_control0 = 1;
          struct ieee80211_tx_info * control = (struct ieee80211_tx_info *) malloc(_len_control0*sizeof(struct ieee80211_tx_info));
          for(int _i0 = 0; _i0 < _len_control0; _i0++) {
            control[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wl1251_tx_control(tx_hdr,control,fc);
          free(tx_hdr);
          free(control);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
