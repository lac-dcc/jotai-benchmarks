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
struct net_device {int /*<<< orphan*/  mtu; } ;
struct ipvl_dev {TYPE_1__* dev; } ;
struct TYPE_2__ {int /*<<< orphan*/  mtu; } ;

/* Variables and functions */

__attribute__((used)) static void ipvlan_adjust_mtu(struct ipvl_dev *ipvlan, struct net_device *dev)
{
	ipvlan->dev->mtu = dev->mtu;
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
          int _len_ipvlan0 = 1;
          struct ipvl_dev * ipvlan = (struct ipvl_dev *) malloc(_len_ipvlan0*sizeof(struct ipvl_dev));
          for(int _i0 = 0; _i0 < _len_ipvlan0; _i0++) {
              int _len_ipvlan__i0__dev0 = 1;
          ipvlan[_i0].dev = (struct TYPE_2__ *) malloc(_len_ipvlan__i0__dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ipvlan__i0__dev0; _j0++) {
            ipvlan[_i0].dev->mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].mtu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ipvlan_adjust_mtu(ipvlan,dev);
          for(int _aux = 0; _aux < _len_ipvlan0; _aux++) {
          free(ipvlan[_aux].dev);
          }
          free(ipvlan);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
