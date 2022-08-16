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
struct TYPE_4__ {scalar_t__ rsts; scalar_t__ acks; scalar_t__ reqs; scalar_t__ msgs_rx; scalar_t__ msgs_tx; } ;
struct TYPE_3__ {int /*<<< orphan*/  unlock; int /*<<< orphan*/  check_for_rst; int /*<<< orphan*/  check_for_ack; int /*<<< orphan*/  check_for_msg; int /*<<< orphan*/  write_posted; int /*<<< orphan*/  read_posted; int /*<<< orphan*/  write; int /*<<< orphan*/  read; } ;
struct e1000_mbx_info {TYPE_2__ stats; TYPE_1__ ops; int /*<<< orphan*/  size; scalar_t__ usec_delay; scalar_t__ timeout; } ;
struct e1000_hw {struct e1000_mbx_info mbx; } ;
typedef  int /*<<< orphan*/  s32 ;

/* Variables and functions */
 int /*<<< orphan*/  E1000_VFMAILBOX_SIZE ; 
 int /*<<< orphan*/  igb_check_for_ack_pf ; 
 int /*<<< orphan*/  igb_check_for_msg_pf ; 
 int /*<<< orphan*/  igb_check_for_rst_pf ; 
 int /*<<< orphan*/  igb_read_mbx_pf ; 
 int /*<<< orphan*/  igb_read_posted_mbx ; 
 int /*<<< orphan*/  igb_release_mbx_lock_pf ; 
 int /*<<< orphan*/  igb_write_mbx_pf ; 
 int /*<<< orphan*/  igb_write_posted_mbx ; 

s32 igb_init_mbx_params_pf(struct e1000_hw *hw)
{
	struct e1000_mbx_info *mbx = &hw->mbx;

	mbx->timeout = 0;
	mbx->usec_delay = 0;

	mbx->size = E1000_VFMAILBOX_SIZE;

	mbx->ops.read = igb_read_mbx_pf;
	mbx->ops.write = igb_write_mbx_pf;
	mbx->ops.read_posted = igb_read_posted_mbx;
	mbx->ops.write_posted = igb_write_posted_mbx;
	mbx->ops.check_for_msg = igb_check_for_msg_pf;
	mbx->ops.check_for_ack = igb_check_for_ack_pf;
	mbx->ops.check_for_rst = igb_check_for_rst_pf;
	mbx->ops.unlock = igb_release_mbx_lock_pf;

	mbx->stats.msgs_tx = 0;
	mbx->stats.msgs_rx = 0;
	mbx->stats.reqs = 0;
	mbx->stats.acks = 0;
	mbx->stats.rsts = 0;

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
          int _len_hw0 = 1;
          struct e1000_hw * hw = (struct e1000_hw *) malloc(_len_hw0*sizeof(struct e1000_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].mbx.stats.rsts = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.stats.acks = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.stats.reqs = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.stats.msgs_rx = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.stats.msgs_tx = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.ops.unlock = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.ops.check_for_rst = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.ops.check_for_ack = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.ops.check_for_msg = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.ops.write_posted = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.ops.read_posted = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.ops.write = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.ops.read = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.size = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.usec_delay = ((-2 * (next_i()%2)) + 1) * next_i();
        hw[_i0].mbx.timeout = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = igb_init_mbx_params_pf(hw);
          printf("%d\n", benchRet); 
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
