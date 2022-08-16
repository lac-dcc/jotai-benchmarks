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

/* Type definitions */
typedef  scalar_t__ uint32_t ;
struct dc_plane_state {scalar_t__ irq_source; } ;

/* Variables and functions */
 scalar_t__ DC_IRQ_SOURCE_PFLIP1 ; 

void enable_surface_flip_reporting(struct dc_plane_state *plane_state,
		uint32_t controller_id)
{
	plane_state->irq_source = controller_id + DC_IRQ_SOURCE_PFLIP1 - 1;
	/*register_flip_interrupt(surface);*/
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
          long controller_id = 100;
          int _len_plane_state0 = 1;
          struct dc_plane_state * plane_state = (struct dc_plane_state *) malloc(_len_plane_state0*sizeof(struct dc_plane_state));
          for(int _i0 = 0; _i0 < _len_plane_state0; _i0++) {
            plane_state[_i0].irq_source = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enable_surface_flip_reporting(plane_state,controller_id);
          free(plane_state);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long controller_id = 10;
          int _len_plane_state0 = 100;
          struct dc_plane_state * plane_state = (struct dc_plane_state *) malloc(_len_plane_state0*sizeof(struct dc_plane_state));
          for(int _i0 = 0; _i0 < _len_plane_state0; _i0++) {
            plane_state[_i0].irq_source = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enable_surface_flip_reporting(plane_state,controller_id);
          free(plane_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
