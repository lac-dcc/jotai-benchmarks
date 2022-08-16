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
typedef  struct TYPE_20__   TYPE_9__ ;
typedef  struct TYPE_19__   TYPE_8__ ;
typedef  struct TYPE_18__   TYPE_7__ ;
typedef  struct TYPE_17__   TYPE_6__ ;
typedef  struct TYPE_16__   TYPE_5__ ;
typedef  struct TYPE_15__   TYPE_4__ ;
typedef  struct TYPE_14__   TYPE_3__ ;
typedef  struct TYPE_13__   TYPE_2__ ;
typedef  struct TYPE_12__   TYPE_1__ ;
typedef  struct TYPE_11__   TYPE_10__ ;

/* Type definitions */
struct TYPE_20__ {int opt; int opt2; int opt3; int mctlwtst_core; int mctlwtst; int memmisc; int memrdbk; int maccess; } ;
struct TYPE_19__ {int ddr; int dll; int emrswen; } ;
struct TYPE_16__ {int system; int video; } ;
struct TYPE_11__ {TYPE_9__ reg; TYPE_8__ memory; TYPE_5__ pll; } ;
struct TYPE_17__ {int ref_freq; } ;
struct TYPE_18__ {TYPE_6__ pll; } ;
struct TYPE_14__ {int vcomax; int vcomin; } ;
struct TYPE_13__ {int vcomax; int vcomin; } ;
struct TYPE_12__ {int vcomax; int vcomin; } ;
struct TYPE_15__ {TYPE_3__ video; TYPE_2__ system; TYPE_1__ pixel; } ;
struct matrox_fb_info {TYPE_10__ values; TYPE_7__ features; TYPE_4__ limits; } ;

/* Variables and functions */

__attribute__((used)) static void default_pins5(struct matrox_fb_info *minfo)
{
	/* Mine 16MB G450 with SDRAM DDR */
	minfo->limits.pixel.vcomax	=
	minfo->limits.system.vcomax	=
	minfo->limits.video.vcomax	= 600000;
	minfo->limits.pixel.vcomin	=
	minfo->limits.system.vcomin	=
	minfo->limits.video.vcomin	= 256000;
	minfo->values.pll.system	=
	minfo->values.pll.video		= 284000;
	minfo->values.reg.opt		= 0x404A1160;
	minfo->values.reg.opt2		= 0x0000AC00;
	minfo->values.reg.opt3		= 0x0090A409;
	minfo->values.reg.mctlwtst_core	=
	minfo->values.reg.mctlwtst	= 0x0C81462B;
	minfo->values.reg.memmisc	= 0x80000004;
	minfo->values.reg.memrdbk	= 0x01001103;
	minfo->features.pll.ref_freq	= 27000;
	minfo->values.memory.ddr	= 1;
	minfo->values.memory.dll	= 1;
	minfo->values.memory.emrswen	= 1;
	minfo->values.reg.maccess	= 0x00004000;
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
            minfo[_i0].values.reg.opt = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.reg.opt2 = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.reg.opt3 = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.reg.mctlwtst_core = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.reg.mctlwtst = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.reg.memmisc = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.reg.memrdbk = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.reg.maccess = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.memory.ddr = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.memory.dll = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.memory.emrswen = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.pll.system = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].values.pll.video = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].features.pll.ref_freq = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].limits.video.vcomax = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].limits.video.vcomin = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].limits.system.vcomax = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].limits.system.vcomin = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].limits.pixel.vcomax = ((-2 * (next_i()%2)) + 1) * next_i();
        minfo[_i0].limits.pixel.vcomin = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          default_pins5(minfo);
          free(minfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
