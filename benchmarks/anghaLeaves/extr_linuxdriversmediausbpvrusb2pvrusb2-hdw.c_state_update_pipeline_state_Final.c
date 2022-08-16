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
struct pvr2_hdw {unsigned int state_pipeline_idle; scalar_t__ state_pipeline_pause; int /*<<< orphan*/  state_decoder_quiescent; scalar_t__ state_usbstream_run; scalar_t__ state_decoder_run; scalar_t__ state_encoder_run; } ;

/* Variables and functions */

__attribute__((used)) static int state_update_pipeline_state(struct pvr2_hdw *hdw)
{
	unsigned int st;
	int updatedFl = 0;
	/* Update pipeline state */
	st = !(hdw->state_encoder_run ||
	       hdw->state_decoder_run ||
	       hdw->state_usbstream_run ||
	       (!hdw->state_decoder_quiescent));
	if (!st != !hdw->state_pipeline_idle) {
		hdw->state_pipeline_idle = st;
		updatedFl = !0;
	}
	if (hdw->state_pipeline_idle && hdw->state_pipeline_pause) {
		hdw->state_pipeline_pause = 0;
		updatedFl = !0;
	}
	return updatedFl;
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
          int _len_hdw0 = 1;
          struct pvr2_hdw * hdw = (struct pvr2_hdw *) malloc(_len_hdw0*sizeof(struct pvr2_hdw));
          for(int _i0 = 0; _i0 < _len_hdw0; _i0++) {
            hdw[_i0].state_pipeline_idle = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_pipeline_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_decoder_quiescent = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_usbstream_run = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_decoder_run = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_encoder_run = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = state_update_pipeline_state(hdw);
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
