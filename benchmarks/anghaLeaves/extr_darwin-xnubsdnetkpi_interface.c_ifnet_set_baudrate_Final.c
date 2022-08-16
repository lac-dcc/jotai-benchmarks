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
typedef  int u_int64_t ;
struct TYPE_4__ {int max_bw; int eff_bw; } ;
struct TYPE_3__ {int max_bw; int eff_bw; } ;
struct ifnet {int if_baudrate; TYPE_2__ if_input_bw; TYPE_1__ if_output_bw; } ;
typedef  int /*<<< orphan*/  errno_t ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 

errno_t
ifnet_set_baudrate(struct ifnet *ifp, u_int64_t baudrate)
{
	if (ifp == NULL)
		return (EINVAL);

	ifp->if_output_bw.max_bw = ifp->if_input_bw.max_bw =
	    ifp->if_output_bw.eff_bw = ifp->if_input_bw.eff_bw = baudrate;

	/* Pin if_baudrate to 32 bits until we can change the storage size */
	ifp->if_baudrate = (baudrate > 0xFFFFFFFF) ? 0xFFFFFFFF : baudrate;

	return (0);
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
          int baudrate = 100;
          int _len_ifp0 = 1;
          struct ifnet * ifp = (struct ifnet *) malloc(_len_ifp0*sizeof(struct ifnet));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
            ifp[_i0].if_baudrate = ((-2 * (next_i()%2)) + 1) * next_i();
        ifp[_i0].if_input_bw.max_bw = ((-2 * (next_i()%2)) + 1) * next_i();
        ifp[_i0].if_input_bw.eff_bw = ((-2 * (next_i()%2)) + 1) * next_i();
        ifp[_i0].if_output_bw.max_bw = ((-2 * (next_i()%2)) + 1) * next_i();
        ifp[_i0].if_output_bw.eff_bw = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ifnet_set_baudrate(ifp,baudrate);
          printf("%d\n", benchRet); 
          free(ifp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
