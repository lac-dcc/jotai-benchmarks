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
typedef  int u32 ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ath10k {TYPE_2__* hw; } ;
struct TYPE_3__ {int listen_interval; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;

/* Variables and functions */
 scalar_t__ NL80211_IFTYPE_STATION ; 

__attribute__((used)) static u32 ath10k_peer_assoc_h_listen_intval(struct ath10k *ar,
					     struct ieee80211_vif *vif)
{
	/* Some firmware revisions have unstable STA powersave when listen
	 * interval is set too high (e.g. 5). The symptoms are firmware doesn't
	 * generate NullFunc frames properly even if buffered frames have been
	 * indicated in Beacon TIM. Firmware would seldom wake up to pull
	 * buffered frames. Often pinging the device from AP would simply fail.
	 *
	 * As a workaround set it to 1.
	 */
	if (vif->type == NL80211_IFTYPE_STATION)
		return 1;

	return ar->hw->conf.listen_interval;
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
          int _len_ar0 = 1;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
              int _len_ar__i0__hw0 = 1;
          ar[_i0].hw = (struct TYPE_4__ *) malloc(_len_ar__i0__hw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ar__i0__hw0; _j0++) {
            ar[_i0].hw->conf.listen_interval = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vif0 = 1;
          struct ieee80211_vif * vif = (struct ieee80211_vif *) malloc(_len_vif0*sizeof(struct ieee80211_vif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
            vif[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_peer_assoc_h_listen_intval(ar,vif);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ar0; _aux++) {
          free(ar[_aux].hw);
          }
          free(ar);
          free(vif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
