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
typedef  int /*<<< orphan*/  u32 ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int iwl_mvm_wowlan_config_key_params(struct iwl_mvm *mvm,
						   struct ieee80211_vif *vif,
						   bool host_awake,
						   u32 cmd_flags)
{
	return 0;
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
          int host_awake = 100;
          int cmd_flags = 100;
          int _len_mvm0 = 1;
          struct iwl_mvm * mvm = (struct iwl_mvm *) malloc(_len_mvm0*sizeof(struct iwl_mvm));
          for(int _i0 = 0; _i0 < _len_mvm0; _i0++) {
            mvm[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vif0 = 1;
          struct ieee80211_vif * vif = (struct ieee80211_vif *) malloc(_len_vif0*sizeof(struct ieee80211_vif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
            vif[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iwl_mvm_wowlan_config_key_params(mvm,vif,host_awake,cmd_flags);
          printf("%d\n", benchRet); 
          free(mvm);
          free(vif);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}