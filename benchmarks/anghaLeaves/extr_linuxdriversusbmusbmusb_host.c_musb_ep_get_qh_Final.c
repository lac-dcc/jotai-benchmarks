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
struct musb_qh {int dummy; } ;
struct musb_hw_ep {struct musb_qh* out_qh; struct musb_qh* in_qh; } ;

/* Variables and functions */

__attribute__((used)) static struct musb_qh *musb_ep_get_qh(struct musb_hw_ep *ep, int is_in)
{
	return is_in ? ep->in_qh : ep->out_qh;
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
          int is_in = 100;
          int _len_ep0 = 1;
          struct musb_hw_ep * ep = (struct musb_hw_ep *) malloc(_len_ep0*sizeof(struct musb_hw_ep));
          for(int _i0 = 0; _i0 < _len_ep0; _i0++) {
              int _len_ep__i0__out_qh0 = 1;
          ep[_i0].out_qh = (struct musb_qh *) malloc(_len_ep__i0__out_qh0*sizeof(struct musb_qh));
          for(int _j0 = 0; _j0 < _len_ep__i0__out_qh0; _j0++) {
            ep[_i0].out_qh->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ep__i0__in_qh0 = 1;
          ep[_i0].in_qh = (struct musb_qh *) malloc(_len_ep__i0__in_qh0*sizeof(struct musb_qh));
          for(int _j0 = 0; _j0 < _len_ep__i0__in_qh0; _j0++) {
            ep[_i0].in_qh->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct musb_qh * benchRet = musb_ep_get_qh(ep,is_in);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_ep0; _aux++) {
          free(ep[_aux].out_qh);
          }
          for(int _aux = 0; _aux < _len_ep0; _aux++) {
          free(ep[_aux].in_qh);
          }
          free(ep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
