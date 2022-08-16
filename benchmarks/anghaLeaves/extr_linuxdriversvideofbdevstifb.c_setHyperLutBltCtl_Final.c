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
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int bits_per_pixel; } ;
struct TYPE_7__ {TYPE_1__ var; } ;
struct stifb_info {TYPE_2__ info; } ;
struct TYPE_8__ {int length; int lutOffset; int /*<<< orphan*/  lutType; } ;
struct TYPE_9__ {int all; TYPE_3__ fields; } ;
typedef  TYPE_4__ NgleLutBltCtl ;

/* Variables and functions */
 int /*<<< orphan*/  HYPER_CMAP_TYPE ; 

__attribute__((used)) static NgleLutBltCtl
setHyperLutBltCtl(struct stifb_info *fb, int offsetWithinLut, int length) 
{
	NgleLutBltCtl lutBltCtl;

	/* set enable, zero reserved fields */
	lutBltCtl.all = 0x80000000;

	lutBltCtl.fields.length = length;
	lutBltCtl.fields.lutType = HYPER_CMAP_TYPE;

	/* Expect lutIndex to be 0 or 1 for image cmaps, 2 or 3 for overlay cmaps */
	if (fb->info.var.bits_per_pixel == 8)
		lutBltCtl.fields.lutOffset = 2 * 256;
	else
		lutBltCtl.fields.lutOffset = 0 * 256;

	/* Offset points to start of LUT.  Adjust for within LUT */
	lutBltCtl.fields.lutOffset += offsetWithinLut;

	return lutBltCtl;
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
          int offsetWithinLut = 100;
          int length = 100;
          int _len_fb0 = 1;
          struct stifb_info * fb = (struct stifb_info *) malloc(_len_fb0*sizeof(struct stifb_info));
          for(int _i0 = 0; _i0 < _len_fb0; _i0++) {
            fb[_i0].info.var.bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_9__ benchRet = setHyperLutBltCtl(fb,offsetWithinLut,length);
          printf("%d\n", benchRet.all);
          free(fb);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int offsetWithinLut = 10;
          int length = 10;
          int _len_fb0 = 100;
          struct stifb_info * fb = (struct stifb_info *) malloc(_len_fb0*sizeof(struct stifb_info));
          for(int _i0 = 0; _i0 < _len_fb0; _i0++) {
            fb[_i0].info.var.bits_per_pixel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_9__ benchRet = setHyperLutBltCtl(fb,offsetWithinLut,length);
          printf("%d\n", benchRet.all);
          free(fb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
