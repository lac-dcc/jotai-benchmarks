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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
struct xhci_virt_device {int real_port; struct xhci_tt_bw_info* tt_info; } ;
struct xhci_tt_bw_info {scalar_t__ active_eps; } ;
struct xhci_interval_bw_table {scalar_t__ bw_used; } ;
struct xhci_hcd {TYPE_1__* rh_bw; } ;
struct TYPE_2__ {struct xhci_interval_bw_table bw_table; } ;

/* Variables and functions */
 int ENOMEM ; 
 scalar_t__ HS_BW_LIMIT ; 
 scalar_t__ TT_HS_OVERHEAD ; 

__attribute__((used)) static int xhci_check_tt_bw_table(struct xhci_hcd *xhci,
		struct xhci_virt_device *virt_dev,
		int old_active_eps)
{
	struct xhci_interval_bw_table *bw_table;
	struct xhci_tt_bw_info *tt_info;

	/* Find the bandwidth table for the root port this TT is attached to. */
	bw_table = &xhci->rh_bw[virt_dev->real_port - 1].bw_table;
	tt_info = virt_dev->tt_info;
	/* If this TT already had active endpoints, the bandwidth for this TT
	 * has already been added.  Removing all periodic endpoints (and thus
	 * making the TT enactive) will only decrease the bandwidth used.
	 */
	if (old_active_eps)
		return 0;
	if (old_active_eps == 0 && tt_info->active_eps != 0) {
		if (bw_table->bw_used + TT_HS_OVERHEAD > HS_BW_LIMIT)
			return -ENOMEM;
		return 0;
	}
	/* Not sure why we would have no new active endpoints...
	 *
	 * Maybe because of an Evaluate Context change for a hub update or a
	 * control endpoint 0 max packet size change?
	 * FIXME: skip the bandwidth calculation in that case.
	 */
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
          int old_active_eps = 100;
          int _len_xhci0 = 1;
          struct xhci_hcd * xhci = (struct xhci_hcd *) malloc(_len_xhci0*sizeof(struct xhci_hcd));
          for(int _i0 = 0; _i0 < _len_xhci0; _i0++) {
              int _len_xhci__i0__rh_bw0 = 1;
          xhci[_i0].rh_bw = (struct TYPE_2__ *) malloc(_len_xhci__i0__rh_bw0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_xhci__i0__rh_bw0; _j0++) {
            xhci[_i0].rh_bw->bw_table.bw_used = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_virt_dev0 = 1;
          struct xhci_virt_device * virt_dev = (struct xhci_virt_device *) malloc(_len_virt_dev0*sizeof(struct xhci_virt_device));
          for(int _i0 = 0; _i0 < _len_virt_dev0; _i0++) {
            virt_dev[_i0].real_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_virt_dev__i0__tt_info0 = 1;
          virt_dev[_i0].tt_info = (struct xhci_tt_bw_info *) malloc(_len_virt_dev__i0__tt_info0*sizeof(struct xhci_tt_bw_info));
          for(int _j0 = 0; _j0 < _len_virt_dev__i0__tt_info0; _j0++) {
            virt_dev[_i0].tt_info->active_eps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xhci_check_tt_bw_table(xhci,virt_dev,old_active_eps);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_xhci0; _aux++) {
          free(xhci[_aux].rh_bw);
          }
          free(xhci);
          for(int _aux = 0; _aux < _len_virt_dev0; _aux++) {
          free(virt_dev[_aux].tt_info);
          }
          free(virt_dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int old_active_eps = 255;
          int _len_xhci0 = 65025;
          struct xhci_hcd * xhci = (struct xhci_hcd *) malloc(_len_xhci0*sizeof(struct xhci_hcd));
          for(int _i0 = 0; _i0 < _len_xhci0; _i0++) {
              int _len_xhci__i0__rh_bw0 = 1;
          xhci[_i0].rh_bw = (struct TYPE_2__ *) malloc(_len_xhci__i0__rh_bw0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_xhci__i0__rh_bw0; _j0++) {
            xhci[_i0].rh_bw->bw_table.bw_used = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_virt_dev0 = 65025;
          struct xhci_virt_device * virt_dev = (struct xhci_virt_device *) malloc(_len_virt_dev0*sizeof(struct xhci_virt_device));
          for(int _i0 = 0; _i0 < _len_virt_dev0; _i0++) {
            virt_dev[_i0].real_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_virt_dev__i0__tt_info0 = 1;
          virt_dev[_i0].tt_info = (struct xhci_tt_bw_info *) malloc(_len_virt_dev__i0__tt_info0*sizeof(struct xhci_tt_bw_info));
          for(int _j0 = 0; _j0 < _len_virt_dev__i0__tt_info0; _j0++) {
            virt_dev[_i0].tt_info->active_eps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xhci_check_tt_bw_table(xhci,virt_dev,old_active_eps);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_xhci0; _aux++) {
          free(xhci[_aux].rh_bw);
          }
          free(xhci);
          for(int _aux = 0; _aux < _len_virt_dev0; _aux++) {
          free(virt_dev[_aux].tt_info);
          }
          free(virt_dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int old_active_eps = 10;
          int _len_xhci0 = 100;
          struct xhci_hcd * xhci = (struct xhci_hcd *) malloc(_len_xhci0*sizeof(struct xhci_hcd));
          for(int _i0 = 0; _i0 < _len_xhci0; _i0++) {
              int _len_xhci__i0__rh_bw0 = 1;
          xhci[_i0].rh_bw = (struct TYPE_2__ *) malloc(_len_xhci__i0__rh_bw0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_xhci__i0__rh_bw0; _j0++) {
            xhci[_i0].rh_bw->bw_table.bw_used = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_virt_dev0 = 100;
          struct xhci_virt_device * virt_dev = (struct xhci_virt_device *) malloc(_len_virt_dev0*sizeof(struct xhci_virt_device));
          for(int _i0 = 0; _i0 < _len_virt_dev0; _i0++) {
            virt_dev[_i0].real_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_virt_dev__i0__tt_info0 = 1;
          virt_dev[_i0].tt_info = (struct xhci_tt_bw_info *) malloc(_len_virt_dev__i0__tt_info0*sizeof(struct xhci_tt_bw_info));
          for(int _j0 = 0; _j0 < _len_virt_dev__i0__tt_info0; _j0++) {
            virt_dev[_i0].tt_info->active_eps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = xhci_check_tt_bw_table(xhci,virt_dev,old_active_eps);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_xhci0; _aux++) {
          free(xhci[_aux].rh_bw);
          }
          free(xhci);
          for(int _aux = 0; _aux < _len_virt_dev0; _aux++) {
          free(virt_dev[_aux].tt_info);
          }
          free(virt_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
