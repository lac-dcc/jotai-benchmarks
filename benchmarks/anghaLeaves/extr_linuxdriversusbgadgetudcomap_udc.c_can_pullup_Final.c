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
struct omap_udc {scalar_t__ vbus_active; scalar_t__ softconnect; scalar_t__ driver; } ;

/* Variables and functions */

__attribute__((used)) static int can_pullup(struct omap_udc *udc)
{
	return udc->driver && udc->softconnect && udc->vbus_active;
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
          int _len_udc0 = 1;
          struct omap_udc * udc = (struct omap_udc *) malloc(_len_udc0*sizeof(struct omap_udc));
          for(int _i0 = 0; _i0 < _len_udc0; _i0++) {
            udc[_i0].vbus_active = ((-2 * (next_i()%2)) + 1) * next_i();
        udc[_i0].softconnect = ((-2 * (next_i()%2)) + 1) * next_i();
        udc[_i0].driver = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = can_pullup(udc);
          printf("%d\n", benchRet); 
          free(udc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
