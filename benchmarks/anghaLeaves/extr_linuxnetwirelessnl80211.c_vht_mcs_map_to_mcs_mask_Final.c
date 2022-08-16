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
typedef  int u8 ;
typedef  int u16 ;

/* Variables and functions */
#define  IEEE80211_VHT_MCS_NOT_SUPPORTED 131 
#define  IEEE80211_VHT_MCS_SUPPORT_0_7 130 
#define  IEEE80211_VHT_MCS_SUPPORT_0_8 129 
#define  IEEE80211_VHT_MCS_SUPPORT_0_9 128 

__attribute__((used)) static u16 vht_mcs_map_to_mcs_mask(u8 vht_mcs_map)
{
	u16 mcs_mask = 0;

	switch (vht_mcs_map) {
	case IEEE80211_VHT_MCS_NOT_SUPPORTED:
		break;
	case IEEE80211_VHT_MCS_SUPPORT_0_7:
		mcs_mask = 0x00FF;
		break;
	case IEEE80211_VHT_MCS_SUPPORT_0_8:
		mcs_mask = 0x01FF;
		break;
	case IEEE80211_VHT_MCS_SUPPORT_0_9:
		mcs_mask = 0x03FF;
		break;
	default:
		break;
	}

	return mcs_mask;
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
          int vht_mcs_map = 100;
          int benchRet = vht_mcs_map_to_mcs_mask(vht_mcs_map);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int vht_mcs_map = 255;
          int benchRet = vht_mcs_map_to_mcs_mask(vht_mcs_map);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vht_mcs_map = 10;
          int benchRet = vht_mcs_map_to_mcs_mask(vht_mcs_map);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
