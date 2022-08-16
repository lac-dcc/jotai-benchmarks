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
typedef  TYPE_1__* ifnet_t ;
typedef  int /*<<< orphan*/  errno_t ;
typedef  int boolean_t ;
struct TYPE_3__ {int if_xflags; } ;

/* Variables and functions */
 int /*<<< orphan*/  EINVAL ; 
 int IFXF_LOW_POWER ; 

errno_t
ifnet_get_low_power_mode(ifnet_t ifp, boolean_t *on)
{
	if (ifp == NULL || on == NULL)
		return (EINVAL);

	*on  = !!(ifp->if_xflags & IFXF_LOW_POWER);

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
          int _len_ifp0 = 1;
          struct TYPE_3__ * ifp = (struct TYPE_3__ *) malloc(_len_ifp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_ifp0; _i0++) {
            ifp[_i0].if_xflags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_on0 = 1;
          int * on = (int *) malloc(_len_on0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_on0; _i0++) {
            on[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ifnet_get_low_power_mode(ifp,on);
          printf("%d\n", benchRet); 
          free(ifp);
          free(on);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
