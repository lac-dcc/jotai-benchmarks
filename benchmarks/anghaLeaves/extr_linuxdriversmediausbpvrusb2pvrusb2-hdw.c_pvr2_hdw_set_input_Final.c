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
struct pvr2_hdw {int input_val; int input_dirty; int freqSelector; int freqDirty; } ;

/* Variables and functions */
 int PVR2_CVAL_INPUT_DTV ; 
 int PVR2_CVAL_INPUT_RADIO ; 
 int PVR2_CVAL_INPUT_TV ; 

__attribute__((used)) static int pvr2_hdw_set_input(struct pvr2_hdw *hdw,int v)
{
	if (hdw->input_val != v) {
		hdw->input_val = v;
		hdw->input_dirty = !0;
	}

	/* Handle side effects - if we switch to a mode that needs the RF
	   tuner, then select the right frequency choice as well and mark
	   it dirty. */
	if (hdw->input_val == PVR2_CVAL_INPUT_RADIO) {
		hdw->freqSelector = 0;
		hdw->freqDirty = !0;
	} else if ((hdw->input_val == PVR2_CVAL_INPUT_TV) ||
		   (hdw->input_val == PVR2_CVAL_INPUT_DTV)) {
		hdw->freqSelector = 1;
		hdw->freqDirty = !0;
	}
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
          int v = 100;
          int _len_hdw0 = 1;
          struct pvr2_hdw * hdw = (struct pvr2_hdw *) malloc(_len_hdw0*sizeof(struct pvr2_hdw));
          for(int _i0 = 0; _i0 < _len_hdw0; _i0++) {
            hdw[_i0].input_val = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].input_dirty = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].freqSelector = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].freqDirty = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pvr2_hdw_set_input(hdw,v);
          printf("%d\n", benchRet); 
          free(hdw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
