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
typedef  long u32 ;
struct batadv_tp_vars {int srtt; int rttvar; int rto; } ;

/* Variables and functions */

__attribute__((used)) static void batadv_tp_update_rto(struct batadv_tp_vars *tp_vars,
				 u32 new_rtt)
{
	long m = new_rtt;

	/* RTT update
	 * Details in Section 2.2 and 2.3 of RFC6298
	 *
	 * It's tricky to understand. Don't lose hair please.
	 * Inspired by tcp_rtt_estimator() tcp_input.c
	 */
	if (tp_vars->srtt != 0) {
		m -= (tp_vars->srtt >> 3); /* m is now error in rtt est */
		tp_vars->srtt += m; /* rtt = 7/8 srtt + 1/8 new */
		if (m < 0)
			m = -m;

		m -= (tp_vars->rttvar >> 2);
		tp_vars->rttvar += m; /* mdev ~= 3/4 rttvar + 1/4 new */
	} else {
		/* first measure getting in */
		tp_vars->srtt = m << 3;	/* take the measured time to be srtt */
		tp_vars->rttvar = m << 1; /* new_rtt / 2 */
	}

	/* rto = srtt + 4 * rttvar.
	 * rttvar is scaled by 4, therefore doesn't need to be multiplied
	 */
	tp_vars->rto = (tp_vars->srtt >> 3) + tp_vars->rttvar;
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
          long new_rtt = 100;
          int _len_tp_vars0 = 1;
          struct batadv_tp_vars * tp_vars = (struct batadv_tp_vars *) malloc(_len_tp_vars0*sizeof(struct batadv_tp_vars));
          for(int _i0 = 0; _i0 < _len_tp_vars0; _i0++) {
            tp_vars[_i0].srtt = ((-2 * (next_i()%2)) + 1) * next_i();
        tp_vars[_i0].rttvar = ((-2 * (next_i()%2)) + 1) * next_i();
        tp_vars[_i0].rto = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          batadv_tp_update_rto(tp_vars,new_rtt);
          free(tp_vars);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
