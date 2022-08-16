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
struct net_device {int dummy; } ;
struct neigh_parms {int /*<<< orphan*/  neigh_setup; TYPE_1__* tbl; } ;
struct TYPE_2__ {scalar_t__ family; } ;

/* Variables and functions */
 scalar_t__ AF_INET ; 
 int /*<<< orphan*/  qeth_l3_neigh_setup_noarp ; 

__attribute__((used)) static int
qeth_l3_neigh_setup(struct net_device *dev, struct neigh_parms *np)
{
	if (np->tbl->family == AF_INET)
		np->neigh_setup = qeth_l3_neigh_setup_noarp;

	return 0;
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
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_np0 = 1;
          struct neigh_parms * np = (struct neigh_parms *) malloc(_len_np0*sizeof(struct neigh_parms));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].neigh_setup = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_np__i0__tbl0 = 1;
          np[_i0].tbl = (struct TYPE_2__ *) malloc(_len_np__i0__tbl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_np__i0__tbl0; _j0++) {
            np[_i0].tbl->family = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qeth_l3_neigh_setup(dev,np);
          printf("%d\n", benchRet); 
          free(dev);
          for(int _aux = 0; _aux < _len_np0; _aux++) {
          free(np[_aux].tbl);
          }
          free(np);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
