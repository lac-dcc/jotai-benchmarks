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
struct nvidia_par {int paneltweak; int Chipset; } ;
struct _riva_hw_state {int bpp; } ;

/* Variables and functions */

__attribute__((used)) static int nvidia_panel_tweak(struct nvidia_par *par,
			      struct _riva_hw_state *state)
{
	int tweak = 0;

   if (par->paneltweak) {
	   tweak = par->paneltweak;
   } else {
	   /* begin flat panel hacks */
	   /* This is unfortunate, but some chips need this register
	      tweaked or else you get artifacts where adjacent pixels are
	      swapped.  There are no hard rules for what to set here so all
	      we can do is experiment and apply hacks. */

	   if(((par->Chipset & 0xffff) == 0x0328) && (state->bpp == 32)) {
		   /* At least one NV34 laptop needs this workaround. */
		   tweak = -1;
	   }

	   if((par->Chipset & 0xfff0) == 0x0310) {
		   tweak = 1;
	   }
	   /* end flat panel hacks */
   }

   return tweak;
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
          int _len_par0 = 1;
          struct nvidia_par * par = (struct nvidia_par *) malloc(_len_par0*sizeof(struct nvidia_par));
          for(int _i0 = 0; _i0 < _len_par0; _i0++) {
            par[_i0].paneltweak = ((-2 * (next_i()%2)) + 1) * next_i();
        par[_i0].Chipset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state0 = 1;
          struct _riva_hw_state * state = (struct _riva_hw_state *) malloc(_len_state0*sizeof(struct _riva_hw_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].bpp = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = nvidia_panel_tweak(par,state);
          printf("%d\n", benchRet); 
          free(par);
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
