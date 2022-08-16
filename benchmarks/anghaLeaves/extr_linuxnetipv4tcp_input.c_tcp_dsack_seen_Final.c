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
struct TYPE_4__ {int dsack_seen; } ;
struct TYPE_3__ {int /*<<< orphan*/  sack_ok; } ;
struct tcp_sock {int /*<<< orphan*/  dsack_dups; TYPE_2__ rack; TYPE_1__ rx_opt; } ;

/* Variables and functions */
 int /*<<< orphan*/  TCP_DSACK_SEEN ; 

__attribute__((used)) static void tcp_dsack_seen(struct tcp_sock *tp)
{
	tp->rx_opt.sack_ok |= TCP_DSACK_SEEN;
	tp->rack.dsack_seen = 1;
	tp->dsack_dups++;
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
          int _len_tp0 = 1;
          struct tcp_sock * tp = (struct tcp_sock *) malloc(_len_tp0*sizeof(struct tcp_sock));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].dsack_dups = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].rack.dsack_seen = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].rx_opt.sack_ok = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tcp_dsack_seen(tp);
          free(tp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
