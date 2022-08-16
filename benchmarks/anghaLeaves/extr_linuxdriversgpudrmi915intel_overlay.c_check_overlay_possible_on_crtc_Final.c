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
struct intel_overlay {int dummy; } ;
struct intel_crtc {TYPE_1__* config; int /*<<< orphan*/  active; } ;
struct TYPE_2__ {scalar_t__ double_wide; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int check_overlay_possible_on_crtc(struct intel_overlay *overlay,
					  struct intel_crtc *crtc)
{
	if (!crtc->active)
		return -EINVAL;

	/* can't use the overlay with double wide pipe */
	if (crtc->config->double_wide)
		return -EINVAL;

	return 0;
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
          int _len_overlay0 = 1;
          struct intel_overlay * overlay = (struct intel_overlay *) malloc(_len_overlay0*sizeof(struct intel_overlay));
          for(int _i0 = 0; _i0 < _len_overlay0; _i0++) {
            overlay[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crtc0 = 1;
          struct intel_crtc * crtc = (struct intel_crtc *) malloc(_len_crtc0*sizeof(struct intel_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
              int _len_crtc__i0__config0 = 1;
          crtc[_i0].config = (struct TYPE_2__ *) malloc(_len_crtc__i0__config0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__config0; _j0++) {
            crtc[_i0].config->double_wide = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        crtc[_i0].active = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_overlay_possible_on_crtc(overlay,crtc);
          printf("%d\n", benchRet); 
          free(overlay);
          for(int _aux = 0; _aux < _len_crtc0; _aux++) {
          free(crtc[_aux].config);
          }
          free(crtc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
