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

/* Type definitions */
struct xhci_hcd {struct xhci_dbc* dbc; } ;
struct xhci_dbc {struct dbc_ep* eps; } ;
struct dbc_ep {int dummy; } ;

/* Variables and functions */
 size_t BULK_OUT ; 

__attribute__((used)) static inline struct dbc_ep *get_out_ep(struct xhci_hcd *xhci)
{
	struct xhci_dbc		*dbc = xhci->dbc;

	return &dbc->eps[BULK_OUT];
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
          int _len_xhci0 = 1;
          struct xhci_hcd * xhci = (struct xhci_hcd *) malloc(_len_xhci0*sizeof(struct xhci_hcd));
          for(int _i0 = 0; _i0 < _len_xhci0; _i0++) {
              int _len_xhci__i0__dbc0 = 1;
          xhci[_i0].dbc = (struct xhci_dbc *) malloc(_len_xhci__i0__dbc0*sizeof(struct xhci_dbc));
          for(int _j0 = 0; _j0 < _len_xhci__i0__dbc0; _j0++) {
              int _len_xhci__i0__dbc_eps0 = 1;
          xhci[_i0].dbc->eps = (struct dbc_ep *) malloc(_len_xhci__i0__dbc_eps0*sizeof(struct dbc_ep));
          for(int _j0 = 0; _j0 < _len_xhci__i0__dbc_eps0; _j0++) {
            xhci[_i0].dbc->eps->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct dbc_ep * benchRet = get_out_ep(xhci);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_xhci0; _aux++) {
          free(xhci[_aux].dbc);
          }
          free(xhci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
