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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct dispc_device {TYPE_1__* feat; } ;
struct TYPE_2__ {int sw_max; int hp_max; int vp_max; } ;

/* Variables and functions */

__attribute__((used)) static bool _dispc_lcd_timings_ok(struct dispc_device *dispc,
				  int hsync_len, int hfp, int hbp,
				  int vsw, int vfp, int vbp)
{
	if (hsync_len < 1 || hsync_len > dispc->feat->sw_max ||
	    hfp < 1 || hfp > dispc->feat->hp_max ||
	    hbp < 1 || hbp > dispc->feat->hp_max ||
	    vsw < 1 || vsw > dispc->feat->sw_max ||
	    vfp < 0 || vfp > dispc->feat->vp_max ||
	    vbp < 0 || vbp > dispc->feat->vp_max)
		return false;
	return true;
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
          int hsync_len = 100;
          int hfp = 100;
          int hbp = 100;
          int vsw = 100;
          int vfp = 100;
          int vbp = 100;
          int _len_dispc0 = 1;
          struct dispc_device * dispc = (struct dispc_device *) malloc(_len_dispc0*sizeof(struct dispc_device));
          for(int _i0 = 0; _i0 < _len_dispc0; _i0++) {
              int _len_dispc__i0__feat0 = 1;
          dispc[_i0].feat = (struct TYPE_2__ *) malloc(_len_dispc__i0__feat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dispc__i0__feat0; _j0++) {
            dispc[_i0].feat->sw_max = ((-2 * (next_i()%2)) + 1) * next_i();
        dispc[_i0].feat->hp_max = ((-2 * (next_i()%2)) + 1) * next_i();
        dispc[_i0].feat->vp_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = _dispc_lcd_timings_ok(dispc,hsync_len,hfp,hbp,vsw,vfp,vbp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dispc0; _aux++) {
          free(dispc[_aux].feat);
          }
          free(dispc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
