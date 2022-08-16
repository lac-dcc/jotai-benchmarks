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
       1            big-arr-10x\n\
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
struct wl12xx_vif {int hw_queue_base; } ;

/* Variables and functions */
#define  CONF_TX_AC_BE 131 
#define  CONF_TX_AC_BK 130 
#define  CONF_TX_AC_VI 129 
#define  CONF_TX_AC_VO 128 

__attribute__((used)) static inline
int wlcore_tx_get_mac80211_queue(struct wl12xx_vif *wlvif, int queue)
{
	int mac_queue = wlvif->hw_queue_base;

	switch (queue) {
	case CONF_TX_AC_VO:
		return mac_queue + 0;
	case CONF_TX_AC_VI:
		return mac_queue + 1;
	case CONF_TX_AC_BE:
		return mac_queue + 2;
	case CONF_TX_AC_BK:
		return mac_queue + 3;
	default:
		return mac_queue + 2;
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
          int queue = 100;
          int _len_wlvif0 = 1;
          struct wl12xx_vif * wlvif = (struct wl12xx_vif *) malloc(_len_wlvif0*sizeof(struct wl12xx_vif));
          for(int _i0 = 0; _i0 < _len_wlvif0; _i0++) {
            wlvif[_i0].hw_queue_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wlcore_tx_get_mac80211_queue(wlvif,queue);
          printf("%d\n", benchRet); 
          free(wlvif);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int queue = 10;
          int _len_wlvif0 = 100;
          struct wl12xx_vif * wlvif = (struct wl12xx_vif *) malloc(_len_wlvif0*sizeof(struct wl12xx_vif));
          for(int _i0 = 0; _i0 < _len_wlvif0; _i0++) {
            wlvif[_i0].hw_queue_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = wlcore_tx_get_mac80211_queue(wlvif,queue);
          printf("%d\n", benchRet); 
          free(wlvif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
