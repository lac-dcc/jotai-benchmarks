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
struct aoetgt {scalar_t__ maxout; scalar_t__ nframes; scalar_t__ ssthresh; scalar_t__ nout; scalar_t__ next_cwnd; } ;
struct aoedev {long rttavg; long rttdev; } ;

/* Variables and functions */
 long RTTDSCALE ; 
 long RTTSCALE ; 

__attribute__((used)) static void
calc_rttavg(struct aoedev *d, struct aoetgt *t, int rtt)
{
	register long n;

	n = rtt;

	/* cf. Congestion Avoidance and Control, Jacobson & Karels, 1988 */
	n -= d->rttavg >> RTTSCALE;
	d->rttavg += n;
	if (n < 0)
		n = -n;
	n -= d->rttdev >> RTTDSCALE;
	d->rttdev += n;

	if (!t || t->maxout >= t->nframes)
		return;
	if (t->maxout < t->ssthresh)
		t->maxout += 1;
	else if (t->nout == t->maxout && t->next_cwnd-- == 0) {
		t->maxout += 1;
		t->next_cwnd = t->maxout;
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
          int rtt = 100;
          int _len_d0 = 1;
          struct aoedev * d = (struct aoedev *) malloc(_len_d0*sizeof(struct aoedev));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].rttavg = ((-2 * (next_i()%2)) + 1) * next_i();
        d[_i0].rttdev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_t0 = 1;
          struct aoetgt * t = (struct aoetgt *) malloc(_len_t0*sizeof(struct aoetgt));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].maxout = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nframes = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].ssthresh = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].nout = ((-2 * (next_i()%2)) + 1) * next_i();
        t[_i0].next_cwnd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          calc_rttavg(d,t,rtt);
          free(d);
          free(t);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
