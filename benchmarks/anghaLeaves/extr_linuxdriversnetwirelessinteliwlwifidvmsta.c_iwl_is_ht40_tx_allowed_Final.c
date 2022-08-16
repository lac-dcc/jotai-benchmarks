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
struct TYPE_2__ {int /*<<< orphan*/  is_40mhz; int /*<<< orphan*/  enabled; } ;
struct iwl_rxon_context {TYPE_1__ ht; } ;
struct iwl_priv {int dummy; } ;
struct ieee80211_sta {scalar_t__ bandwidth; } ;

/* Variables and functions */
 scalar_t__ IEEE80211_STA_RX_BW_40 ; 

bool iwl_is_ht40_tx_allowed(struct iwl_priv *priv,
			    struct iwl_rxon_context *ctx,
			    struct ieee80211_sta *sta)
{
	if (!ctx->ht.enabled || !ctx->ht.is_40mhz)
		return false;

#ifdef CONFIG_IWLWIFI_DEBUGFS
	if (priv->disable_ht40)
		return false;
#endif

	/* special case for RXON */
	if (!sta)
		return true;

	return sta->bandwidth >= IEEE80211_STA_RX_BW_40;
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
          int _len_priv0 = 1;
          struct iwl_priv * priv = (struct iwl_priv *) malloc(_len_priv0*sizeof(struct iwl_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 1;
          struct iwl_rxon_context * ctx = (struct iwl_rxon_context *) malloc(_len_ctx0*sizeof(struct iwl_rxon_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].ht.is_40mhz = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].ht.enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sta0 = 1;
          struct ieee80211_sta * sta = (struct ieee80211_sta *) malloc(_len_sta0*sizeof(struct ieee80211_sta));
          for(int _i0 = 0; _i0 < _len_sta0; _i0++) {
            sta[_i0].bandwidth = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iwl_is_ht40_tx_allowed(priv,ctx,sta);
          printf("%d\n", benchRet); 
          free(priv);
          free(ctx);
          free(sta);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
