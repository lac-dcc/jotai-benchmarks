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
struct pvr2_hdw {int pathway_state; int /*<<< orphan*/  state_encoder_runok; int /*<<< orphan*/  state_decoder_run; int /*<<< orphan*/  state_pathway_ok; int /*<<< orphan*/  state_encoder_ok; } ;

/* Variables and functions */
#define  PVR2_PATHWAY_ANALOG 129 
#define  PVR2_PATHWAY_DIGITAL 128 

__attribute__((used)) static int state_check_disable_encoder_run(struct pvr2_hdw *hdw)
{
	if (!hdw->state_encoder_ok) {
		/* Encoder isn't healthy at the moment, so stop it. */
		return !0;
	}
	if (!hdw->state_pathway_ok) {
		/* Mode is not understood at the moment (i.e. it wants to
		   change), so encoder must be stopped. */
		return !0;
	}

	switch (hdw->pathway_state) {
	case PVR2_PATHWAY_ANALOG:
		if (!hdw->state_decoder_run) {
			/* We're in analog mode and the decoder is not
			   running; thus the encoder should be stopped as
			   well. */
			return !0;
		}
		break;
	case PVR2_PATHWAY_DIGITAL:
		if (hdw->state_encoder_runok) {
			/* This is a funny case.  We're in digital mode so
			   really the encoder should be stopped.  However
			   if it really is running, only kill it after
			   runok has been set.  This gives a chance for the
			   onair quirk to function (encoder must run
			   briefly first, at least once, before onair
			   digital streaming can work). */
			return !0;
		}
		break;
	default:
		/* Unknown mode; so encoder should be stopped. */
		return !0;
	}

	/* If we get here, we haven't found a reason to stop the
	   encoder. */
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
          int _len_hdw0 = 1;
          struct pvr2_hdw * hdw = (struct pvr2_hdw *) malloc(_len_hdw0*sizeof(struct pvr2_hdw));
          for(int _i0 = 0; _i0 < _len_hdw0; _i0++) {
            hdw[_i0].pathway_state = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_encoder_runok = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_decoder_run = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_pathway_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_encoder_ok = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = state_check_disable_encoder_run(hdw);
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
