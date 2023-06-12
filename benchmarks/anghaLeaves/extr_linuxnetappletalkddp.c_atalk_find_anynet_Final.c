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
       0            empty\n\
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
struct net_device {struct atalk_iface* atalk_ptr; } ;
struct TYPE_2__ {int s_node; } ;
struct atalk_iface {int status; TYPE_1__ address; } ;

/* Variables and functions */
 int ATADDR_ANYNODE ; 
 int ATADDR_BCAST ; 
 int ATIF_PROBE ; 

__attribute__((used)) static struct atalk_iface *atalk_find_anynet(int node, struct net_device *dev)
{
	struct atalk_iface *iface = dev->atalk_ptr;

	if (!iface || iface->status & ATIF_PROBE)
		goto out_err;

	if (node != ATADDR_BCAST &&
	    iface->address.s_node != node &&
	    node != ATADDR_ANYNODE)
		goto out_err;
out:
	return iface;
out_err:
	iface = NULL;
	goto out;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int node = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__atalk_ptr0 = 1;
          dev[_i0].atalk_ptr = (struct atalk_iface *) malloc(_len_dev__i0__atalk_ptr0*sizeof(struct atalk_iface));
          for(int _j0 = 0; _j0 < _len_dev__i0__atalk_ptr0; _j0++) {
              dev[_i0].atalk_ptr->status = ((-2 * (next_i()%2)) + 1) * next_i();
          dev[_i0].atalk_ptr->address.s_node = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          }
        
          struct atalk_iface * benchRet = atalk_find_anynet(node,dev);
          printf("%d\n", (*benchRet).status);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].atalk_ptr);
          }
          free(dev);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
