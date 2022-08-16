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
struct ipoctal_stats {scalar_t__ parity_err; scalar_t__ overrun_err; scalar_t__ framing_err; scalar_t__ rcv_break; scalar_t__ rx; scalar_t__ tx; } ;

/* Variables and functions */

__attribute__((used)) static void ipoctal_reset_stats(struct ipoctal_stats *stats)
{
	stats->tx = 0;
	stats->rx = 0;
	stats->rcv_break = 0;
	stats->framing_err = 0;
	stats->overrun_err = 0;
	stats->parity_err = 0;
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
          struct ipoctal_stats * stats = (struct ipoctal_stats *) malloc(_len_stats0*sizeof(struct ipoctal_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].parity_err = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].overrun_err = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].framing_err = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rcv_break = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].rx = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ipoctal_reset_stats(stats);
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
