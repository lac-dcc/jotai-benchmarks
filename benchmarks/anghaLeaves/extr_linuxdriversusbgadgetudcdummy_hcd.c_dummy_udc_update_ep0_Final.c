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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ speed; } ;
struct dummy {TYPE_3__* ep; TYPE_1__ gadget; } ;
struct TYPE_5__ {int maxpacket; } ;
struct TYPE_6__ {TYPE_2__ ep; } ;

/* Variables and functions */
 scalar_t__ USB_SPEED_SUPER ; 

__attribute__((used)) static void dummy_udc_update_ep0(struct dummy *dum)
{
	if (dum->gadget.speed == USB_SPEED_SUPER)
		dum->ep[0].ep.maxpacket = 9;
	else
		dum->ep[0].ep.maxpacket = 64;
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
          int _len_dum0 = 1;
          struct dummy * dum = (struct dummy *) malloc(_len_dum0*sizeof(struct dummy));
          for(int _i0 = 0; _i0 < _len_dum0; _i0++) {
              int _len_dum__i0__ep0 = 1;
          dum[_i0].ep = (struct TYPE_6__ *) malloc(_len_dum__i0__ep0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dum__i0__ep0; _j0++) {
            dum[_i0].ep->ep.maxpacket = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dum[_i0].gadget.speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dummy_udc_update_ep0(dum);
          for(int _aux = 0; _aux < _len_dum0; _aux++) {
          free(dum[_aux].ep);
          }
          free(dum);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
