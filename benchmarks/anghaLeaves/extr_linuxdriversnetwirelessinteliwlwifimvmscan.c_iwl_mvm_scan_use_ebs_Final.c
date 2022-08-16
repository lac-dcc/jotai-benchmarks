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
struct iwl_ucode_capabilities {int flags; } ;
struct iwl_mvm {scalar_t__ last_ebs_successful; TYPE_1__* fw; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct TYPE_2__ {struct iwl_ucode_capabilities ucode_capa; } ;

/* Variables and functions */
 scalar_t__ IWL_MVM_ENABLE_EBS ; 
 int IWL_UCODE_TLV_FLAGS_EBS_SUPPORT ; 
 scalar_t__ NL80211_IFTYPE_P2P_DEVICE ; 

__attribute__((used)) static inline bool iwl_mvm_scan_use_ebs(struct iwl_mvm *mvm,
					struct ieee80211_vif *vif)
{
	const struct iwl_ucode_capabilities *capa = &mvm->fw->ucode_capa;

	/* We can only use EBS if:
	 *	1. the feature is supported;
	 *	2. the last EBS was successful;
	 *	3. if only single scan, the single scan EBS API is supported;
	 *	4. it's not a p2p find operation.
	 */
	return ((capa->flags & IWL_UCODE_TLV_FLAGS_EBS_SUPPORT) &&
		mvm->last_ebs_successful && IWL_MVM_ENABLE_EBS &&
		vif->type != NL80211_IFTYPE_P2P_DEVICE);
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
          int _len_mvm0 = 1;
          struct iwl_mvm * mvm = (struct iwl_mvm *) malloc(_len_mvm0*sizeof(struct iwl_mvm));
          for(int _i0 = 0; _i0 < _len_mvm0; _i0++) {
            mvm[_i0].last_ebs_successful = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mvm__i0__fw0 = 1;
          mvm[_i0].fw = (struct TYPE_2__ *) malloc(_len_mvm__i0__fw0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_mvm__i0__fw0; _j0++) {
            mvm[_i0].fw->ucode_capa.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_vif0 = 1;
          struct ieee80211_vif * vif = (struct ieee80211_vif *) malloc(_len_vif0*sizeof(struct ieee80211_vif));
          for(int _i0 = 0; _i0 < _len_vif0; _i0++) {
            vif[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iwl_mvm_scan_use_ebs(mvm,vif);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mvm0; _aux++) {
          free(mvm[_aux].fw);
          }
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
