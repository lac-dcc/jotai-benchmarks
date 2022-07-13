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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int /*<<< orphan*/  u8 ;
struct iwl_mvm_mac_ap_iterator_data {int /*<<< orphan*/  beacon_int; scalar_t__ beacon_device_ts; } ;
struct TYPE_2__ {int /*<<< orphan*/  beacon_int; scalar_t__ sync_device_ts; int /*<<< orphan*/  assoc; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; scalar_t__ p2p; } ;

/* Variables and functions */
 scalar_t__ NL80211_IFTYPE_STATION ; 

__attribute__((used)) static void iwl_mvm_mac_ap_iterator(void *_data, u8 *mac,
				    struct ieee80211_vif *vif)
{
	struct iwl_mvm_mac_ap_iterator_data *data = _data;

	if (vif->type != NL80211_IFTYPE_STATION || !vif->bss_conf.assoc)
		return;

	/* Station client has higher priority over P2P client*/
	if (vif->p2p && data->beacon_device_ts)
		return;

	data->beacon_device_ts = vif->bss_conf.sync_device_ts;
	data->beacon_int = vif->bss_conf.beacon_int;
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
          void * _data;
          int _len_mac0 = 1;
          int * mac = (int *) malloc(_len_mac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vif0 = 1;
          struct ieee80211_vif * vif = (struct ieee80211_vif *) malloc(_len_vif0*sizeof(struct ieee80211_vif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
            vif[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        vif[_i0].bss_conf.beacon_int = ((-2 * (next_i()%2)) + 1) * next_i();
        vif[_i0].bss_conf.sync_device_ts = ((-2 * (next_i()%2)) + 1) * next_i();
        vif[_i0].bss_conf.assoc = ((-2 * (next_i()%2)) + 1) * next_i();
        vif[_i0].p2p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iwl_mvm_mac_ap_iterator(_data,mac,vif);
          free(mac);
          free(vif);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * _data;
          int _len_mac0 = 65025;
          int * mac = (int *) malloc(_len_mac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vif0 = 65025;
          struct ieee80211_vif * vif = (struct ieee80211_vif *) malloc(_len_vif0*sizeof(struct ieee80211_vif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
            vif[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        vif[_i0].bss_conf.beacon_int = ((-2 * (next_i()%2)) + 1) * next_i();
        vif[_i0].bss_conf.sync_device_ts = ((-2 * (next_i()%2)) + 1) * next_i();
        vif[_i0].bss_conf.assoc = ((-2 * (next_i()%2)) + 1) * next_i();
        vif[_i0].p2p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iwl_mvm_mac_ap_iterator(_data,mac,vif);
          free(mac);
          free(vif);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * _data;
          int _len_mac0 = 100;
          int * mac = (int *) malloc(_len_mac0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
            mac[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vif0 = 100;
          struct ieee80211_vif * vif = (struct ieee80211_vif *) malloc(_len_vif0*sizeof(struct ieee80211_vif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
            vif[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        vif[_i0].bss_conf.beacon_int = ((-2 * (next_i()%2)) + 1) * next_i();
        vif[_i0].bss_conf.sync_device_ts = ((-2 * (next_i()%2)) + 1) * next_i();
        vif[_i0].bss_conf.assoc = ((-2 * (next_i()%2)) + 1) * next_i();
        vif[_i0].p2p = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iwl_mvm_mac_ap_iterator(_data,mac,vif);
          free(mac);
          free(vif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
