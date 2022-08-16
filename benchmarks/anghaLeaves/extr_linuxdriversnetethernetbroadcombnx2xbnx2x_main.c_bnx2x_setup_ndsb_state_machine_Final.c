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
struct hc_status_block_sm {int igu_sb_id; int igu_seg_id; int timer_value; int time_to_expire; } ;

/* Variables and functions */

__attribute__((used)) static void bnx2x_setup_ndsb_state_machine(struct hc_status_block_sm *hc_sm,
					   int igu_sb_id, int igu_seg_id)
{
	hc_sm->igu_sb_id = igu_sb_id;
	hc_sm->igu_seg_id = igu_seg_id;
	hc_sm->timer_value = 0xFF;
	hc_sm->time_to_expire = 0xFFFFFFFF;
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
          int igu_sb_id = 100;
          int igu_seg_id = 100;
          int _len_hc_sm0 = 1;
          struct hc_status_block_sm * hc_sm = (struct hc_status_block_sm *) malloc(_len_hc_sm0*sizeof(struct hc_status_block_sm));
          for(int _i0 = 0; _i0 < _len_hc_sm0; _i0++) {
            hc_sm[_i0].igu_sb_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hc_sm[_i0].igu_seg_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hc_sm[_i0].timer_value = ((-2 * (next_i()%2)) + 1) * next_i();
        hc_sm[_i0].time_to_expire = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          bnx2x_setup_ndsb_state_machine(hc_sm,igu_sb_id,igu_seg_id);
          free(hc_sm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
