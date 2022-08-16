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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {scalar_t__ eff_bw; scalar_t__ max_bw; } ;
struct ifnet {TYPE_5__ if_output_bw; TYPE_4__* if_link_status; } ;
struct if_wifi_status_v1 {scalar_t__ ul_effective_bandwidth; scalar_t__ ul_max_bandwidth; int /*<<< orphan*/  valid_bitmask; } ;
struct TYPE_6__ {struct if_wifi_status_v1 if_status_v1; } ;
struct TYPE_7__ {TYPE_1__ if_wifi_u; } ;
struct TYPE_8__ {TYPE_2__ ifsr_wifi; } ;
struct TYPE_9__ {TYPE_3__ ifsr_u; } ;

/* Variables and functions */
 int /*<<< orphan*/  IF_WIFI_UL_EFFECTIVE_BANDWIDTH_VALID ; 
 int /*<<< orphan*/  IF_WIFI_UL_MAX_BANDWIDTH_VALID ; 

__attribute__((used)) static void
ifnet_set_link_status_outbw(struct ifnet *ifp)
{
	struct if_wifi_status_v1 *sr;
	sr = &ifp->if_link_status->ifsr_u.ifsr_wifi.if_wifi_u.if_status_v1;
	if (ifp->if_output_bw.eff_bw != 0) {
		sr->valid_bitmask |=
		    IF_WIFI_UL_EFFECTIVE_BANDWIDTH_VALID;
		sr->ul_effective_bandwidth =
		    ifp->if_output_bw.eff_bw;
	}
	if (ifp->if_output_bw.max_bw != 0) {
		sr->valid_bitmask |=
		    IF_WIFI_UL_MAX_BANDWIDTH_VALID;
		sr->ul_max_bandwidth =
		    ifp->if_output_bw.max_bw;
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
          int _len_ifp0 = 1;
          struct ifnet * ifp = (struct ifnet *) malloc(_len_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
            ifp[_i0].if_output_bw.eff_bw = ((-2 * (next_i()%2)) + 1) * next_i();
        ifp[_i0].if_output_bw.max_bw = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ifp__i0__if_link_status0 = 1;
          ifp[_i0].if_link_status = (struct TYPE_9__ *) malloc(_len_ifp__i0__if_link_status0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_ifp__i0__if_link_status0; _j0++) {
            ifp[_i0].if_link_status->ifsr_u.ifsr_wifi.if_wifi_u.if_status_v1.ul_effective_bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        ifp[_i0].if_link_status->ifsr_u.ifsr_wifi.if_wifi_u.if_status_v1.ul_max_bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
        ifp[_i0].if_link_status->ifsr_u.ifsr_wifi.if_wifi_u.if_status_v1.valid_bitmask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ifnet_set_link_status_outbw(ifp);
          for(int _aux = 0; _aux < _len_ifp0; _aux++) {
          free(ifp[_aux].if_link_status);
          }
          free(ifp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
