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
typedef  int u8 ;
struct rtl_sta_info {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef  enum wireless_mode { ____Placeholder_wireless_mode } wireless_mode ;

/* Variables and functions */

__attribute__((used)) static u8 _rtl8822be_get_ra_ldpc(struct ieee80211_hw *hw, u8 mac_id,
				 struct rtl_sta_info *sta_entry,
				 enum wireless_mode wirelessmode)
{
	u8 b_ldpc = 0;
	/*not support ldpc, do not open*/
	return b_ldpc << 2;
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
          int mac_id = 100;
          enum wireless_mode wirelessmode = 0;
          int _len_hw0 = 1;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sta_entry0 = 1;
          struct rtl_sta_info * sta_entry = (struct rtl_sta_info *) malloc(_len_sta_entry0*sizeof(struct rtl_sta_info));
          for(int _i0 = 0; _i0 < _len_sta_entry0; _i0++) {
            sta_entry[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _rtl8822be_get_ra_ldpc(hw,mac_id,sta_entry,wirelessmode);
          printf("%d\n", benchRet); 
          free(hw);
          free(sta_entry);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
