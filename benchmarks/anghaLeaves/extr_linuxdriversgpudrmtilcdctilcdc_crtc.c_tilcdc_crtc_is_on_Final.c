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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct drm_crtc {TYPE_1__* state; } ;
struct TYPE_2__ {scalar_t__ active; scalar_t__ enable; } ;

/* Variables and functions */

__attribute__((used)) static bool tilcdc_crtc_is_on(struct drm_crtc *crtc)
{
	return crtc->state && crtc->state->enable && crtc->state->active;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_crtc0 = 65025;
          struct drm_crtc * crtc = (struct drm_crtc *) malloc(_len_crtc0*sizeof(struct drm_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
              int _len_crtc__i0__state0 = 1;
          crtc[_i0].state = (struct TYPE_2__ *) malloc(_len_crtc__i0__state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__state0; _j0++) {
              crtc[_i0].state->active = ((-2 * (next_i()%2)) + 1) * next_i();
          crtc[_i0].state->enable = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = tilcdc_crtc_is_on(crtc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_crtc0; _aux++) {
          free(crtc[_aux].state);
          }
          free(crtc);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_crtc0 = 100;
          struct drm_crtc * crtc = (struct drm_crtc *) malloc(_len_crtc0*sizeof(struct drm_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
              int _len_crtc__i0__state0 = 1;
          crtc[_i0].state = (struct TYPE_2__ *) malloc(_len_crtc__i0__state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__state0; _j0++) {
              crtc[_i0].state->active = ((-2 * (next_i()%2)) + 1) * next_i();
          crtc[_i0].state->enable = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = tilcdc_crtc_is_on(crtc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_crtc0; _aux++) {
          free(crtc[_aux].state);
          }
          free(crtc);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int _len_crtc0 = 1;
          struct drm_crtc * crtc = (struct drm_crtc *) malloc(_len_crtc0*sizeof(struct drm_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
              int _len_crtc__i0__state0 = 1;
          crtc[_i0].state = (struct TYPE_2__ *) malloc(_len_crtc__i0__state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__state0; _j0++) {
              crtc[_i0].state->active = ((-2 * (next_i()%2)) + 1) * next_i();
          crtc[_i0].state->enable = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = tilcdc_crtc_is_on(crtc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_crtc0; _aux++) {
          free(crtc[_aux].state);
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
