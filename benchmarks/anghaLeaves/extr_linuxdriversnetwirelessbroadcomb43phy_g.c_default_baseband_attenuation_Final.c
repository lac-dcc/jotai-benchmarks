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
struct b43_phy {int radio_ver; int radio_rev; } ;
struct b43_wldev {struct b43_phy phy; } ;
struct b43_bbatt {int att; } ;

/* Variables and functions */

__attribute__((used)) static void default_baseband_attenuation(struct b43_wldev *dev,
					 struct b43_bbatt *bb)
{
	struct b43_phy *phy = &dev->phy;

	if (phy->radio_ver == 0x2050 && phy->radio_rev < 6)
		bb->att = 0;
	else
		bb->att = 2;
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
          struct b43_wldev * dev = (struct b43_wldev *) malloc(_len_dev0*sizeof(struct b43_wldev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].phy.radio_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        dev[_i0].phy.radio_rev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bb0 = 1;
          struct b43_bbatt * bb = (struct b43_bbatt *) malloc(_len_bb0*sizeof(struct b43_bbatt));
          for(int _i0 = 0; _i0 < _len_bb0; _i0++) {
            bb[_i0].att = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          default_baseband_attenuation(dev,bb);
          free(dev);
          free(bb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
