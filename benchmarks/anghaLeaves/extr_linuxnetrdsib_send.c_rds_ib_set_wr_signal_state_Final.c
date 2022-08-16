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
struct TYPE_2__ {int /*<<< orphan*/  send_flags; } ;
struct rds_ib_send_work {TYPE_1__ s_wr; } ;
struct rds_ib_connection {scalar_t__ i_unsignaled_wrs; } ;

/* Variables and functions */
 int /*<<< orphan*/  IB_SEND_SIGNALED ; 
 scalar_t__ rds_ib_sysctl_max_unsig_wrs ; 

__attribute__((used)) static inline int rds_ib_set_wr_signal_state(struct rds_ib_connection *ic,
					     struct rds_ib_send_work *send,
					     bool notify)
{
	/*
	 * We want to delay signaling completions just enough to get
	 * the batching benefits but not so much that we create dead time
	 * on the wire.
	 */
	if (ic->i_unsignaled_wrs-- == 0 || notify) {
		ic->i_unsignaled_wrs = rds_ib_sysctl_max_unsig_wrs;
		send->s_wr.send_flags |= IB_SEND_SIGNALED;
		return 1;
	}
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
          int notify = 100;
          int _len_ic0 = 1;
          struct rds_ib_connection * ic = (struct rds_ib_connection *) malloc(_len_ic0*sizeof(struct rds_ib_connection));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
            ic[_i0].i_unsignaled_wrs = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_send0 = 1;
          struct rds_ib_send_work * send = (struct rds_ib_send_work *) malloc(_len_send0*sizeof(struct rds_ib_send_work));
          for(int _i0 = 0; _i0 < _len_send0; _i0++) {
            send[_i0].s_wr.send_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rds_ib_set_wr_signal_state(ic,send,notify);
          printf("%d\n", benchRet); 
          free(ic);
          free(send);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
