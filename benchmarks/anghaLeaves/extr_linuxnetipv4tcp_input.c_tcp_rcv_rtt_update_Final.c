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
       1            big-arr-10x\n\
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
typedef  int u32 ;
struct TYPE_2__ {int rtt_us; } ;
struct tcp_sock {TYPE_1__ rcv_rtt_est; } ;

/* Variables and functions */

__attribute__((used)) static void tcp_rcv_rtt_update(struct tcp_sock *tp, u32 sample, int win_dep)
{
	u32 new_sample = tp->rcv_rtt_est.rtt_us;
	long m = sample;

	if (new_sample != 0) {
		/* If we sample in larger samples in the non-timestamp
		 * case, we could grossly overestimate the RTT especially
		 * with chatty applications or bulk transfer apps which
		 * are stalled on filesystem I/O.
		 *
		 * Also, since we are only going for a minimum in the
		 * non-timestamp case, we do not smooth things out
		 * else with timestamps disabled convergence takes too
		 * long.
		 */
		if (!win_dep) {
			m -= (new_sample >> 3);
			new_sample += m;
		} else {
			m <<= 3;
			if (m < new_sample)
				new_sample = m;
		}
	} else {
		/* No previous measure. */
		new_sample = m << 3;
	}

	tp->rcv_rtt_est.rtt_us = new_sample;
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
          int sample = 100;
          int win_dep = 100;
          int _len_tp0 = 1;
          struct tcp_sock * tp = (struct tcp_sock *) malloc(_len_tp0*sizeof(struct tcp_sock));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].rcv_rtt_est.rtt_us = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tcp_rcv_rtt_update(tp,sample,win_dep);
          free(tp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int sample = 10;
          int win_dep = 10;
          int _len_tp0 = 100;
          struct tcp_sock * tp = (struct tcp_sock *) malloc(_len_tp0*sizeof(struct tcp_sock));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
            tp[_i0].rcv_rtt_est.rtt_us = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tcp_rcv_rtt_update(tp,sample,win_dep);
          free(tp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
