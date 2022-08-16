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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ on_time_scan; scalar_t__ on_time_rf; scalar_t__ tx_time; scalar_t__ rx_time; } ;
struct TYPE_3__ {int /*<<< orphan*/  on_time_scan; int /*<<< orphan*/  on_time_rf; int /*<<< orphan*/  tx_time; int /*<<< orphan*/  rx_time; } ;
struct iwl_mvm {TYPE_2__ radio_stats; TYPE_1__ accu_radio_stats; } ;

/* Variables and functions */

void iwl_mvm_accu_radio_stats(struct iwl_mvm *mvm)
{
	mvm->accu_radio_stats.rx_time += mvm->radio_stats.rx_time;
	mvm->accu_radio_stats.tx_time += mvm->radio_stats.tx_time;
	mvm->accu_radio_stats.on_time_rf += mvm->radio_stats.on_time_rf;
	mvm->accu_radio_stats.on_time_scan += mvm->radio_stats.on_time_scan;
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
            mvm[_i0].radio_stats.on_time_scan = ((-2 * (next_i()%2)) + 1) * next_i();
        mvm[_i0].radio_stats.on_time_rf = ((-2 * (next_i()%2)) + 1) * next_i();
        mvm[_i0].radio_stats.tx_time = ((-2 * (next_i()%2)) + 1) * next_i();
        mvm[_i0].radio_stats.rx_time = ((-2 * (next_i()%2)) + 1) * next_i();
        mvm[_i0].accu_radio_stats.on_time_scan = ((-2 * (next_i()%2)) + 1) * next_i();
        mvm[_i0].accu_radio_stats.on_time_rf = ((-2 * (next_i()%2)) + 1) * next_i();
        mvm[_i0].accu_radio_stats.tx_time = ((-2 * (next_i()%2)) + 1) * next_i();
        mvm[_i0].accu_radio_stats.rx_time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          iwl_mvm_accu_radio_stats(mvm);
          free(mvm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
