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
typedef  scalar_t__ u32 ;
struct sctp_transport {scalar_t__ cwnd; scalar_t__ flight_size; scalar_t__ burst_limited; struct sctp_association* asoc; } ;
struct sctp_association {int max_burst; int pathmtu; } ;

/* Variables and functions */

void sctp_transport_burst_limited(struct sctp_transport *t)
{
	struct sctp_association *asoc = t->asoc;
	u32 old_cwnd = t->cwnd;
	u32 max_burst_bytes;

	if (t->burst_limited || asoc->max_burst == 0)
		return;

	max_burst_bytes = t->flight_size + (asoc->max_burst * asoc->pathmtu);
	if (max_burst_bytes < old_cwnd) {
		t->cwnd = max_burst_bytes;
		t->burst_limited = old_cwnd;
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
          int _len_t0 = 1;
          struct sctp_transport * t = (struct sctp_transport *) malloc(_len_t0*sizeof(struct sctp_transport));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].cwnd = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].flight_size = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].burst_limited = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_t__i0__asoc0 = 1;
          t[_i0].asoc = (struct sctp_association *) malloc(_len_t__i0__asoc0*sizeof(struct sctp_association));
          for(int _j0 = 0; _j0 < _len_t__i0__asoc0; _j0++) {
            t[_i0].asoc->max_burst = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].asoc->pathmtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          sctp_transport_burst_limited(t);
          for(int _aux = 0; _aux < _len_t0; _aux++) {
          free(t[_aux].asoc);
          }
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
