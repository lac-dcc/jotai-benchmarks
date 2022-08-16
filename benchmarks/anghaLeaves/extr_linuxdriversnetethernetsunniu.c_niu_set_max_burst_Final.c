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
struct tx_ring_info {int max_burst; } ;
struct niu {TYPE_1__* dev; } ;
struct TYPE_2__ {int mtu; } ;

/* Variables and functions */

__attribute__((used)) static void niu_set_max_burst(struct niu *np, struct tx_ring_info *rp)
{
	int mtu = np->dev->mtu;

	/* These values are recommended by the HW designers for fair
	 * utilization of DRR amongst the rings.
	 */
	rp->max_burst = mtu + 32;
	if (rp->max_burst > 4096)
		rp->max_burst = 4096;
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
          int _len_np0 = 1;
          struct niu * np = (struct niu *) malloc(_len_np0*sizeof(struct niu));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
              int _len_np__i0__dev0 = 1;
          np[_i0].dev = (struct TYPE_2__ *) malloc(_len_np__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_np__i0__dev0; _j0++) {
            np[_i0].dev->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rp0 = 1;
          struct tx_ring_info * rp = (struct tx_ring_info *) malloc(_len_rp0*sizeof(struct tx_ring_info));
          for(int _i0 = 0; _i0 < _len_rp0; _i0++) {
            rp[_i0].max_burst = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          niu_set_max_burst(np,rp);
          for(int _aux = 0; _aux < _len_np0; _aux++) {
          free(np[_aux].dev);
          }
          free(np);
          free(rp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
