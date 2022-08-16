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
struct wiphy {int dummy; } ;
struct brcmf_if {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void brcmf_wiphy_wowl_params(struct wiphy *wiphy, struct brcmf_if *ifp)
{
#ifdef CONFIG_PM
	struct brcmf_cfg80211_info *cfg = wiphy_to_cfg(wiphy);
	struct wiphy_wowlan_support *wowl;

	wowl = kmemdup(&brcmf_wowlan_support, sizeof(brcmf_wowlan_support),
		       GFP_KERNEL);
	if (!wowl) {
		brcmf_err("only support basic wowlan features\n");
		wiphy->wowlan = &brcmf_wowlan_support;
		return;
	}

	if (brcmf_feat_is_enabled(ifp, BRCMF_FEAT_PNO)) {
		if (brcmf_feat_is_enabled(ifp, BRCMF_FEAT_WOWL_ND)) {
			wowl->flags |= WIPHY_WOWLAN_NET_DETECT;
			wowl->max_nd_match_sets = BRCMF_PNO_MAX_PFN_COUNT;
			init_waitqueue_head(&cfg->wowl.nd_data_wait);
		}
	}
	if (brcmf_feat_is_enabled(ifp, BRCMF_FEAT_WOWL_GTK)) {
		wowl->flags |= WIPHY_WOWLAN_SUPPORTS_GTK_REKEY;
		wowl->flags |= WIPHY_WOWLAN_GTK_REKEY_FAILURE;
	}

	wiphy->wowlan = wowl;
#endif
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
          int _len_wiphy0 = 1;
          struct wiphy * wiphy = (struct wiphy *) malloc(_len_wiphy0*sizeof(struct wiphy));
          for(int _i0 = 0; _i0 < _len_wiphy0; _i0++) {
            wiphy[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ifp0 = 1;
          struct brcmf_if * ifp = (struct brcmf_if *) malloc(_len_ifp0*sizeof(struct brcmf_if));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
            ifp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          brcmf_wiphy_wowl_params(wiphy,ifp);
          free(wiphy);
          free(ifp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
