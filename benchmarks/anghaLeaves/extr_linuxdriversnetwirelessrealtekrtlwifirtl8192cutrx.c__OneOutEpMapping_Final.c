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
struct rtl_ep_map {int* ep_mapping; } ;
struct ieee80211_hw {int dummy; } ;

/* Variables and functions */
 size_t RTL_TXQ_BCN ; 
 size_t RTL_TXQ_BE ; 
 size_t RTL_TXQ_BK ; 
 size_t RTL_TXQ_HI ; 
 size_t RTL_TXQ_MGT ; 
 size_t RTL_TXQ_VI ; 
 size_t RTL_TXQ_VO ; 

__attribute__((used)) static void _OneOutEpMapping(struct ieee80211_hw *hw, struct rtl_ep_map *ep_map)
{
	ep_map->ep_mapping[RTL_TXQ_BE]	= 2;
	ep_map->ep_mapping[RTL_TXQ_BK]	= 2;
	ep_map->ep_mapping[RTL_TXQ_VI]	= 2;
	ep_map->ep_mapping[RTL_TXQ_VO] = 2;
	ep_map->ep_mapping[RTL_TXQ_MGT] = 2;
	ep_map->ep_mapping[RTL_TXQ_BCN] = 2;
	ep_map->ep_mapping[RTL_TXQ_HI]	= 2;
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
          int _len_hw0 = 1;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ep_map0 = 1;
          struct rtl_ep_map * ep_map = (struct rtl_ep_map *) malloc(_len_ep_map0*sizeof(struct rtl_ep_map));
          for(int _i0 = 0; _i0 < _len_ep_map0; _i0++) {
              int _len_ep_map__i0__ep_mapping0 = 1;
          ep_map[_i0].ep_mapping = (int *) malloc(_len_ep_map__i0__ep_mapping0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ep_map__i0__ep_mapping0; _j0++) {
            ep_map[_i0].ep_mapping[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          _OneOutEpMapping(hw,ep_map);
          free(hw);
          for(int _aux = 0; _aux < _len_ep_map0; _aux++) {
          free(ep_map[_aux].ep_mapping);
          }
          free(ep_map);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
