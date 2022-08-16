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
typedef  enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;

/* Variables and functions */
#define  NL80211_IFTYPE_ADHOC 138 
#define  NL80211_IFTYPE_AP 137 
#define  NL80211_IFTYPE_AP_VLAN 136 
#define  NL80211_IFTYPE_MESH_POINT 135 
#define  NL80211_IFTYPE_MONITOR 134 
#define  NL80211_IFTYPE_OCB 133 
#define  NL80211_IFTYPE_P2P_CLIENT 132 
#define  NL80211_IFTYPE_P2P_GO 131 
#define  NL80211_IFTYPE_STATION 130 
#define  NL80211_IFTYPE_UNSPECIFIED 129 
#define  NL80211_IFTYPE_WDS 128 

const char *ath_opmode_to_string(enum nl80211_iftype opmode)
{
	switch (opmode) {
	case NL80211_IFTYPE_UNSPECIFIED:
		return "UNSPEC";
	case NL80211_IFTYPE_ADHOC:
		return "ADHOC";
	case NL80211_IFTYPE_STATION:
		return "STATION";
	case NL80211_IFTYPE_AP:
		return "AP";
	case NL80211_IFTYPE_AP_VLAN:
		return "AP-VLAN";
	case NL80211_IFTYPE_WDS:
		return "WDS";
	case NL80211_IFTYPE_MONITOR:
		return "MONITOR";
	case NL80211_IFTYPE_MESH_POINT:
		return "MESH";
	case NL80211_IFTYPE_P2P_CLIENT:
		return "P2P-CLIENT";
	case NL80211_IFTYPE_P2P_GO:
		return "P2P-GO";
	case NL80211_IFTYPE_OCB:
		return "OCB";
	default:
		return "UNKNOWN";
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
          enum nl80211_iftype opmode = 0;
          const char * benchRet = ath_opmode_to_string(opmode);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
