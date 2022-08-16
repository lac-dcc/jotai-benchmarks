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
       1            big-arr-10x\n\
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
struct isp1301 {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void enable_vbus_draw(struct isp1301 *isp, unsigned mA)
{
	/* H4 controls this by DIP switch S2.4; no soft control.
	 * ON means the charger is always enabled.  Leave it OFF
	 * unless the OTG port is used only in B-peripheral mode.
	 */
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
          unsigned int mA = 100;
          int _len_isp0 = 1;
          struct isp1301 * isp = (struct isp1301 *) malloc(_len_isp0*sizeof(struct isp1301));
          for(int _i0 = 0; _i0 < _len_isp0; _i0++) {
            isp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enable_vbus_draw(isp,mA);
          free(isp);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int mA = 10;
          int _len_isp0 = 100;
          struct isp1301 * isp = (struct isp1301 *) malloc(_len_isp0*sizeof(struct isp1301));
          for(int _i0 = 0; _i0 < _len_isp0; _i0++) {
            isp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enable_vbus_draw(isp,mA);
          free(isp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
