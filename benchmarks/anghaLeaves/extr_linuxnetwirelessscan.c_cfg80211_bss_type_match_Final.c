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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  int u16 ;
typedef  enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
typedef  enum ieee80211_bss_type { ____Placeholder_ieee80211_bss_type } ieee80211_bss_type ;

/* Variables and functions */
 int IEEE80211_BSS_TYPE_ANY ; 
#define  IEEE80211_BSS_TYPE_ESS 131 
#define  IEEE80211_BSS_TYPE_IBSS 130 
#define  IEEE80211_BSS_TYPE_MBSS 129 
#define  IEEE80211_BSS_TYPE_PBSS 128 
 int NL80211_BAND_60GHZ ; 
 int WLAN_CAPABILITY_DMG_TYPE_AP ; 
 int WLAN_CAPABILITY_DMG_TYPE_IBSS ; 
 int WLAN_CAPABILITY_DMG_TYPE_MASK ; 
 int WLAN_CAPABILITY_DMG_TYPE_PBSS ; 
 int WLAN_CAPABILITY_ESS ; 
 int WLAN_CAPABILITY_IBSS ; 

__attribute__((used)) static bool cfg80211_bss_type_match(u16 capability,
				    enum nl80211_band band,
				    enum ieee80211_bss_type bss_type)
{
	bool ret = true;
	u16 mask, val;

	if (bss_type == IEEE80211_BSS_TYPE_ANY)
		return ret;

	if (band == NL80211_BAND_60GHZ) {
		mask = WLAN_CAPABILITY_DMG_TYPE_MASK;
		switch (bss_type) {
		case IEEE80211_BSS_TYPE_ESS:
			val = WLAN_CAPABILITY_DMG_TYPE_AP;
			break;
		case IEEE80211_BSS_TYPE_PBSS:
			val = WLAN_CAPABILITY_DMG_TYPE_PBSS;
			break;
		case IEEE80211_BSS_TYPE_IBSS:
			val = WLAN_CAPABILITY_DMG_TYPE_IBSS;
			break;
		default:
			return false;
		}
	} else {
		mask = WLAN_CAPABILITY_ESS | WLAN_CAPABILITY_IBSS;
		switch (bss_type) {
		case IEEE80211_BSS_TYPE_ESS:
			val = WLAN_CAPABILITY_ESS;
			break;
		case IEEE80211_BSS_TYPE_IBSS:
			val = WLAN_CAPABILITY_IBSS;
			break;
		case IEEE80211_BSS_TYPE_MBSS:
			val = 0;
			break;
		default:
			return false;
		}
	}

	ret = ((capability & mask) == val);
	return ret;
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
          int capability = 100;
          enum nl80211_band band = 0;
          enum ieee80211_bss_type bss_type = 0;
          int benchRet = cfg80211_bss_type_match(capability,band,bss_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int capability = 255;
          enum nl80211_band band = 0;
          enum ieee80211_bss_type bss_type = 0;
          int benchRet = cfg80211_bss_type_match(capability,band,bss_type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int capability = 10;
          enum nl80211_band band = 0;
          enum ieee80211_bss_type bss_type = 0;
          int benchRet = cfg80211_bss_type_match(capability,band,bss_type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
