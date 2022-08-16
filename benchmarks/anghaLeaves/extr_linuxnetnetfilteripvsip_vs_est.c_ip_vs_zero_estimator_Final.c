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
struct ip_vs_kstats {int /*<<< orphan*/  outpkts; int /*<<< orphan*/  inpkts; int /*<<< orphan*/  conns; int /*<<< orphan*/  outbytes; int /*<<< orphan*/  inbytes; } ;
struct ip_vs_estimator {scalar_t__ outbps; scalar_t__ inbps; scalar_t__ outpps; scalar_t__ inpps; scalar_t__ cps; int /*<<< orphan*/  last_outpkts; int /*<<< orphan*/  last_inpkts; int /*<<< orphan*/  last_conns; int /*<<< orphan*/  last_outbytes; int /*<<< orphan*/  last_inbytes; } ;
struct ip_vs_stats {struct ip_vs_kstats kstats; struct ip_vs_estimator est; } ;

/* Variables and functions */

void ip_vs_zero_estimator(struct ip_vs_stats *stats)
{
	struct ip_vs_estimator *est = &stats->est;
	struct ip_vs_kstats *k = &stats->kstats;

	/* reset counters, caller must hold the stats->lock lock */
	est->last_inbytes = k->inbytes;
	est->last_outbytes = k->outbytes;
	est->last_conns = k->conns;
	est->last_inpkts = k->inpkts;
	est->last_outpkts = k->outpkts;
	est->cps = 0;
	est->inpps = 0;
	est->outpps = 0;
	est->inbps = 0;
	est->outbps = 0;
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
          int _len_stats0 = 1;
          struct ip_vs_stats * stats = (struct ip_vs_stats *) malloc(_len_stats0*sizeof(struct ip_vs_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].kstats.outpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].kstats.inpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].kstats.conns = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].kstats.outbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].kstats.inbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].est.outbps = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].est.inbps = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].est.outpps = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].est.inpps = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].est.cps = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].est.last_outpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].est.last_inpkts = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].est.last_conns = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].est.last_outbytes = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].est.last_inbytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ip_vs_zero_estimator(stats);
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
