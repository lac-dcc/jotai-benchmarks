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
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_2__ {int /*<<< orphan*/  total_mem_blocks; } ;
struct wl1271_tx_hw_descr {TYPE_1__ wl18xx_mem; } ;
struct wl1271 {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void
wl18xx_set_tx_desc_blocks(struct wl1271 *wl, struct wl1271_tx_hw_descr *desc,
			  u32 blks, u32 spare_blks)
{
	desc->wl18xx_mem.total_mem_blocks = blks;
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
          int blks = 100;
          int spare_blks = 100;
          int _len_wl0 = 1;
          struct wl1271 * wl = (struct wl1271 *) malloc(_len_wl0*sizeof(struct wl1271));
          for(int _i0 = 0; _i0 < _len_wl0; _i0++) {
            wl[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_desc0 = 1;
          struct wl1271_tx_hw_descr * desc = (struct wl1271_tx_hw_descr *) malloc(_len_desc0*sizeof(struct wl1271_tx_hw_descr));
          for(int _i0 = 0; _i0 < _len_desc0; _i0++) {
            desc[_i0].wl18xx_mem.total_mem_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wl18xx_set_tx_desc_blocks(wl,desc,blks,spare_blks);
          free(wl);
          free(desc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
