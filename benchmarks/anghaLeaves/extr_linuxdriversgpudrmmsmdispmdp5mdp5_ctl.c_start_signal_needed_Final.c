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
struct mdp5_pipeline {struct mdp5_interface* intf; } ;
struct mdp5_interface {int type; int /*<<< orphan*/  mode; } ;
struct mdp5_ctl {int /*<<< orphan*/  encoder_enabled; } ;

/* Variables and functions */
#define  INTF_DSI 129 
#define  INTF_WB 128 
 int /*<<< orphan*/  MDP5_INTF_DSI_MODE_COMMAND ; 

__attribute__((used)) static bool start_signal_needed(struct mdp5_ctl *ctl,
				struct mdp5_pipeline *pipeline)
{
	struct mdp5_interface *intf = pipeline->intf;

	if (!ctl->encoder_enabled)
		return false;

	switch (intf->type) {
	case INTF_WB:
		return true;
	case INTF_DSI:
		return intf->mode == MDP5_INTF_DSI_MODE_COMMAND;
	default:
		return false;
	}
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
          int _len_ctl0 = 1;
          struct mdp5_ctl * ctl = (struct mdp5_ctl *) malloc(_len_ctl0*sizeof(struct mdp5_ctl));
          for(int _i0 = 0; _i0 < _len_ctl0; _i0++) {
            ctl[_i0].encoder_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pipeline0 = 1;
          struct mdp5_pipeline * pipeline = (struct mdp5_pipeline *) malloc(_len_pipeline0*sizeof(struct mdp5_pipeline));
          for(int _i0 = 0; _i0 < _len_pipeline0; _i0++) {
              int _len_pipeline__i0__intf0 = 1;
          pipeline[_i0].intf = (struct mdp5_interface *) malloc(_len_pipeline__i0__intf0*sizeof(struct mdp5_interface));
          for(int _j0 = 0; _j0 < _len_pipeline__i0__intf0; _j0++) {
            pipeline[_i0].intf->type = ((-2 * (next_i()%2)) + 1) * next_i();
        pipeline[_i0].intf->mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = start_signal_needed(ctl,pipeline);
          printf("%d\n", benchRet); 
          free(ctl);
          for(int _aux = 0; _aux < _len_pipeline0; _aux++) {
          free(pipeline[_aux].intf);
          }
          free(pipeline);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
