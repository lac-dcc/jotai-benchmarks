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
typedef  struct TYPE_16__   TYPE_8__ ;
typedef  struct TYPE_15__   TYPE_7__ ;
typedef  struct TYPE_14__   TYPE_6__ ;
typedef  struct TYPE_13__   TYPE_5__ ;
typedef  struct TYPE_12__   TYPE_4__ ;
typedef  struct TYPE_11__   TYPE_3__ ;
typedef  struct TYPE_10__   TYPE_2__ ;
typedef  struct TYPE_9__   TYPE_1__ ;

/* Type definitions */
struct TYPE_12__ {int ref_freq; } ;
struct TYPE_13__ {TYPE_4__ pll; } ;
struct TYPE_10__ {int system; } ;
struct TYPE_9__ {int mctlwtst; int memrdbk; int opt; int opt3; } ;
struct TYPE_11__ {TYPE_2__ pll; TYPE_1__ reg; } ;
struct TYPE_15__ {int vcomax; } ;
struct TYPE_14__ {int vcomax; } ;
struct TYPE_16__ {TYPE_7__ system; TYPE_6__ pixel; } ;
struct matrox_fb_info {TYPE_5__ features; TYPE_3__ values; TYPE_8__ limits; } ;

/* Variables and functions */

__attribute__((used)) static void default_pins4(struct matrox_fb_info *minfo)
{
	/* G400 */
	minfo->limits.pixel.vcomax	=
	minfo->limits.system.vcomax	= 252000;
	minfo->values.reg.mctlwtst	= 0x04A450A1;
	minfo->values.reg.memrdbk	= 0x000000E7;
	minfo->values.reg.opt		= 0x10000400;
	minfo->values.reg.opt3		= 0x0190A419;
	minfo->values.pll.system	= 200000;
	minfo->features.pll.ref_freq	= 27000;
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
          int _len_minfo0 = 1;
          struct matrox_fb_info * minfo = (struct matrox_fb_info *) malloc(_len_minfo0*sizeof(struct matrox_fb_info));
          for(int _i0 = 0; _i0 < _len_minfo0; _i0++) {
            minfo[_i0].features.pll.ref_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.pll.system = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.reg.mctlwtst = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.reg.memrdbk = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.reg.opt = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.reg.opt3 = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].limits.system.vcomax = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].limits.pixel.vcomax = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          default_pins4(minfo);
          free(minfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
