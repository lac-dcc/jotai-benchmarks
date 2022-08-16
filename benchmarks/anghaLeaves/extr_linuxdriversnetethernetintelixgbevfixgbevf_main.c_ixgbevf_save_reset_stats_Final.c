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
struct TYPE_2__ {scalar_t__ base_vfmprc; scalar_t__ vfmprc; int /*<<< orphan*/  saved_reset_vfmprc; scalar_t__ base_vfgotc; scalar_t__ vfgotc; int /*<<< orphan*/  saved_reset_vfgotc; scalar_t__ base_vfgorc; scalar_t__ vfgorc; int /*<<< orphan*/  saved_reset_vfgorc; scalar_t__ base_vfgptc; scalar_t__ vfgptc; int /*<<< orphan*/  saved_reset_vfgptc; scalar_t__ base_vfgprc; scalar_t__ vfgprc; int /*<<< orphan*/  saved_reset_vfgprc; } ;
struct ixgbevf_adapter {TYPE_1__ stats; } ;

/* Variables and functions */

__attribute__((used)) static void ixgbevf_save_reset_stats(struct ixgbevf_adapter *adapter)
{
	/* Only save pre-reset stats if there are some */
	if (adapter->stats.vfgprc || adapter->stats.vfgptc) {
		adapter->stats.saved_reset_vfgprc += adapter->stats.vfgprc -
			adapter->stats.base_vfgprc;
		adapter->stats.saved_reset_vfgptc += adapter->stats.vfgptc -
			adapter->stats.base_vfgptc;
		adapter->stats.saved_reset_vfgorc += adapter->stats.vfgorc -
			adapter->stats.base_vfgorc;
		adapter->stats.saved_reset_vfgotc += adapter->stats.vfgotc -
			adapter->stats.base_vfgotc;
		adapter->stats.saved_reset_vfmprc += adapter->stats.vfmprc -
			adapter->stats.base_vfmprc;
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
          int _len_adapter0 = 1;
          struct ixgbevf_adapter * adapter = (struct ixgbevf_adapter *) malloc(_len_adapter0*sizeof(struct ixgbevf_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].stats.base_vfmprc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.vfmprc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.saved_reset_vfmprc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.base_vfgotc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.vfgotc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.saved_reset_vfgotc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.base_vfgorc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.vfgorc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.saved_reset_vfgorc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.base_vfgptc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.vfgptc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.saved_reset_vfgptc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.base_vfgprc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.vfgprc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].stats.saved_reset_vfgprc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbevf_save_reset_stats(adapter);
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
