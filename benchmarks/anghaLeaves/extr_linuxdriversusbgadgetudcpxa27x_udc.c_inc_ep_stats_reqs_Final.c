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
struct TYPE_2__ {int /*<<< orphan*/  out_ops; int /*<<< orphan*/  in_ops; } ;
struct pxa_ep {TYPE_1__ stats; } ;

/* Variables and functions */

__attribute__((used)) static void inc_ep_stats_reqs(struct pxa_ep *ep, int is_in)
{
	if (is_in)
		ep->stats.in_ops++;
	else
		ep->stats.out_ops++;
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
          int is_in = 100;
          int _len_ep0 = 1;
          struct pxa_ep * ep = (struct pxa_ep *) malloc(_len_ep0*sizeof(struct pxa_ep));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
            ep[_i0].stats.out_ops = ((-2 * (next_i()%2)) + 1) * next_i();
        ep[_i0].stats.in_ops = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          inc_ep_stats_reqs(ep,is_in);
          free(ep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
