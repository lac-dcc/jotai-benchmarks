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
struct qtnf_wmac {struct qtnf_vif* iflist; } ;
struct TYPE_2__ {scalar_t__ iftype; } ;
struct qtnf_vif {TYPE_1__ wdev; } ;

/* Variables and functions */
 scalar_t__ NL80211_IFTYPE_UNSPECIFIED ; 
 int QTNF_MAX_INTF ; 

struct qtnf_vif *qtnf_mac_get_free_vif(struct qtnf_wmac *mac)
{
	struct qtnf_vif *vif;
	int i;

	for (i = 0; i < QTNF_MAX_INTF; i++) {
		vif = &mac->iflist[i];
		if (vif->wdev.iftype == NL80211_IFTYPE_UNSPECIFIED)
			return vif;
	}

	return NULL;
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
          int _len_mac0 = 1;
          struct qtnf_wmac * mac = (struct qtnf_wmac *) malloc(_len_mac0*sizeof(struct qtnf_wmac));
          for(int _i0 = 0; _i0 < _len_mac0; _i0++) {
              int _len_mac__i0__iflist0 = 1;
          mac[_i0].iflist = (struct qtnf_vif *) malloc(_len_mac__i0__iflist0*sizeof(struct qtnf_vif));
          for(int _j0 = 0; _j0 < _len_mac__i0__iflist0; _j0++) {
            mac[_i0].iflist->wdev.iftype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct qtnf_vif * benchRet = qtnf_mac_get_free_vif(mac);
          for(int _aux = 0; _aux < _len_mac0; _aux++) {
          free(mac[_aux].iflist);
          }
          free(mac);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
