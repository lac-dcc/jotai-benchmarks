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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct xhci_virt_device {int real_port; TYPE_2__* tt_info; } ;
struct TYPE_3__ {int /*<<< orphan*/  bw_used; } ;
struct xhci_root_port_bw_info {int num_active_tts; TYPE_1__ bw_table; } ;
struct xhci_hcd {struct xhci_root_port_bw_info* rh_bw; } ;
struct TYPE_4__ {scalar_t__ active_eps; } ;

/* Variables and functions */
 scalar_t__ TT_HS_OVERHEAD ; 

void xhci_update_tt_active_eps(struct xhci_hcd *xhci,
		struct xhci_virt_device *virt_dev,
		int old_active_eps)
{
	struct xhci_root_port_bw_info *rh_bw_info;
	if (!virt_dev->tt_info)
		return;

	rh_bw_info = &xhci->rh_bw[virt_dev->real_port - 1];
	if (old_active_eps == 0 &&
				virt_dev->tt_info->active_eps != 0) {
		rh_bw_info->num_active_tts += 1;
		rh_bw_info->bw_table.bw_used += TT_HS_OVERHEAD;
	} else if (old_active_eps != 0 &&
				virt_dev->tt_info->active_eps == 0) {
		rh_bw_info->num_active_tts -= 1;
		rh_bw_info->bw_table.bw_used -= TT_HS_OVERHEAD;
	}
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
          xhci[_i0].rh_bw = (struct xhci_root_port_bw_info *) malloc(_len_xhci__i0__rh_bw0*sizeof(struct xhci_root_port_bw_info));
          for(int _j0 = 0; _j0 < _len_xhci__i0__rh_bw0; _j0++) {
            xhci[_i0].rh_bw->num_active_tts = ((-2 * (next_i()%2)) + 1) * next_i();
        xhci[_i0].rh_bw->bw_table.bw_used = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_virt_dev0 = 1;
          struct xhci_virt_device * virt_dev = (struct xhci_virt_device *) malloc(_len_virt_dev0*sizeof(struct xhci_virt_device));
          for(int _i0 = 0; _i0 < _len_virt_dev0; _i0++) {
            virt_dev[_i0].real_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_virt_dev__i0__tt_info0 = 1;
          virt_dev[_i0].tt_info = (struct TYPE_4__ *) malloc(_len_virt_dev__i0__tt_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_virt_dev__i0__tt_info0; _j0++) {
            virt_dev[_i0].tt_info->active_eps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          xhci_update_tt_active_eps(xhci,virt_dev,old_active_eps);
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
          xhci[_i0].rh_bw = (struct xhci_root_port_bw_info *) malloc(_len_xhci__i0__rh_bw0*sizeof(struct xhci_root_port_bw_info));
          for(int _j0 = 0; _j0 < _len_xhci__i0__rh_bw0; _j0++) {
            xhci[_i0].rh_bw->num_active_tts = ((-2 * (next_i()%2)) + 1) * next_i();
        xhci[_i0].rh_bw->bw_table.bw_used = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_virt_dev0 = 65025;
          struct xhci_virt_device * virt_dev = (struct xhci_virt_device *) malloc(_len_virt_dev0*sizeof(struct xhci_virt_device));
          for(int _i0 = 0; _i0 < _len_virt_dev0; _i0++) {
            virt_dev[_i0].real_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_virt_dev__i0__tt_info0 = 1;
          virt_dev[_i0].tt_info = (struct TYPE_4__ *) malloc(_len_virt_dev__i0__tt_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_virt_dev__i0__tt_info0; _j0++) {
            virt_dev[_i0].tt_info->active_eps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          xhci_update_tt_active_eps(xhci,virt_dev,old_active_eps);
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
          xhci[_i0].rh_bw = (struct xhci_root_port_bw_info *) malloc(_len_xhci__i0__rh_bw0*sizeof(struct xhci_root_port_bw_info));
          for(int _j0 = 0; _j0 < _len_xhci__i0__rh_bw0; _j0++) {
            xhci[_i0].rh_bw->num_active_tts = ((-2 * (next_i()%2)) + 1) * next_i();
        xhci[_i0].rh_bw->bw_table.bw_used = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_virt_dev0 = 100;
          struct xhci_virt_device * virt_dev = (struct xhci_virt_device *) malloc(_len_virt_dev0*sizeof(struct xhci_virt_device));
          for(int _i0 = 0; _i0 < _len_virt_dev0; _i0++) {
            virt_dev[_i0].real_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_virt_dev__i0__tt_info0 = 1;
          virt_dev[_i0].tt_info = (struct TYPE_4__ *) malloc(_len_virt_dev__i0__tt_info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_virt_dev__i0__tt_info0; _j0++) {
            virt_dev[_i0].tt_info->active_eps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          xhci_update_tt_active_eps(xhci,virt_dev,old_active_eps);
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
