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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct ifnet {int dummy; } ;
typedef  struct ifnet* ifnet_t ;
typedef  TYPE_1__* ifaddr_t ;
struct TYPE_3__ {struct ifnet* ifa_ifp; } ;

/* Variables and functions */

ifnet_t
ifaddr_ifnet(ifaddr_t ifa)
{
	struct ifnet *ifp;

	if (ifa == NULL)
		return (NULL);

	/* ifa_ifp is set once at creation time; it is never changed */
	ifp = ifa->ifa_ifp;

	return (ifp);
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
          int _len_ifa0 = 1;
          struct TYPE_3__ * ifa = (struct TYPE_3__ *) malloc(_len_ifa0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ifa0; _i0++) {
              int _len_ifa__i0__ifa_ifp0 = 1;
          ifa[_i0].ifa_ifp = (struct ifnet *) malloc(_len_ifa__i0__ifa_ifp0*sizeof(struct ifnet));
          for(int _j0 = 0; _j0 < _len_ifa__i0__ifa_ifp0; _j0++) {
            ifa[_i0].ifa_ifp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct ifnet * benchRet = ifaddr_ifnet(ifa);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ifa0; _aux++) {
          free(ifa[_aux].ifa_ifp);
          }
          free(ifa);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
