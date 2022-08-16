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
struct smcd_cdc_msg {int /*<<< orphan*/  conn_state_flags; int /*<<< orphan*/  prod_flags; int /*<<< orphan*/  cons_count; int /*<<< orphan*/  cons_wrap; int /*<<< orphan*/  prod_count; int /*<<< orphan*/  prod_wrap; } ;
struct TYPE_4__ {int /*<<< orphan*/  count; int /*<<< orphan*/  wrap; } ;
struct TYPE_3__ {int /*<<< orphan*/  count; int /*<<< orphan*/  wrap; } ;
struct smc_host_cdc_msg {int /*<<< orphan*/  conn_state_flags; int /*<<< orphan*/  prod_flags; TYPE_2__ cons; TYPE_1__ prod; } ;

/* Variables and functions */

__attribute__((used)) static inline void smcd_cdc_msg_to_host(struct smc_host_cdc_msg *local,
					struct smcd_cdc_msg *peer)
{
	local->prod.wrap = peer->prod_wrap;
	local->prod.count = peer->prod_count;
	local->cons.wrap = peer->cons_wrap;
	local->cons.count = peer->cons_count;
	local->prod_flags = peer->prod_flags;
	local->conn_state_flags = peer->conn_state_flags;
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
          int _len_local0 = 1;
          struct smc_host_cdc_msg * local = (struct smc_host_cdc_msg *) malloc(_len_local0*sizeof(struct smc_host_cdc_msg));
          for(int _i0 = 0; _i0 < _len_local0; _i0++) {
            local[_i0].conn_state_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        local[_i0].prod_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        local[_i0].cons.count = ((-2 * (next_i()%2)) + 1) * next_i();
        local[_i0].cons.wrap = ((-2 * (next_i()%2)) + 1) * next_i();
        local[_i0].prod.count = ((-2 * (next_i()%2)) + 1) * next_i();
        local[_i0].prod.wrap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_peer0 = 1;
          struct smcd_cdc_msg * peer = (struct smcd_cdc_msg *) malloc(_len_peer0*sizeof(struct smcd_cdc_msg));
          for(int _i0 = 0; _i0 < _len_peer0; _i0++) {
            peer[_i0].conn_state_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].prod_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].cons_count = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].cons_wrap = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].prod_count = ((-2 * (next_i()%2)) + 1) * next_i();
        peer[_i0].prod_wrap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          smcd_cdc_msg_to_host(local,peer);
          free(local);
          free(peer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
