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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u16 ;
struct dib8000_state {TYPE_2__** fe; } ;
struct TYPE_3__ {int transmission_mode; } ;
struct TYPE_4__ {TYPE_1__ dtv_property_cache; } ;

/* Variables and functions */
#define  TRANSMISSION_MODE_2K 131 
#define  TRANSMISSION_MODE_4K 130 
#define  TRANSMISSION_MODE_8K 129 
#define  TRANSMISSION_MODE_AUTO 128 

__attribute__((used)) static u16 fft_to_mode(struct dib8000_state *state)
{
	u16 mode;
	switch (state->fe[0]->dtv_property_cache.transmission_mode) {
	case TRANSMISSION_MODE_2K:
		mode = 1;
		break;
	case TRANSMISSION_MODE_4K:
		mode = 2;
		break;
	default:
	case TRANSMISSION_MODE_AUTO:
	case TRANSMISSION_MODE_8K:
		mode = 3;
		break;
	}
	return mode;
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
          int _len_state0 = 1;
          struct dib8000_state * state = (struct dib8000_state *) malloc(_len_state0*sizeof(struct dib8000_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__fe0 = 1;
          state[_i0].fe = (struct TYPE_4__ **) malloc(_len_state__i0__fe0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_state__i0__fe0; _j0++) {
            int _len_state__i0__fe1 = 1;
            state[_i0].fe[_j0] = (struct TYPE_4__ *) malloc(_len_state__i0__fe1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_state__i0__fe1; _j1++) {
              state[_i0].fe[_j0]->dtv_property_cache.transmission_mode = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = fft_to_mode(state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(*(state[_aux].fe));
        free(state[_aux].fe);
          }
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_state0 = 65025;
          struct dib8000_state * state = (struct dib8000_state *) malloc(_len_state0*sizeof(struct dib8000_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__fe0 = 1;
          state[_i0].fe = (struct TYPE_4__ **) malloc(_len_state__i0__fe0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_state__i0__fe0; _j0++) {
            int _len_state__i0__fe1 = 1;
            state[_i0].fe[_j0] = (struct TYPE_4__ *) malloc(_len_state__i0__fe1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_state__i0__fe1; _j1++) {
              state[_i0].fe[_j0]->dtv_property_cache.transmission_mode = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = fft_to_mode(state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(*(state[_aux].fe));
        free(state[_aux].fe);
          }
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_state0 = 100;
          struct dib8000_state * state = (struct dib8000_state *) malloc(_len_state0*sizeof(struct dib8000_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__fe0 = 1;
          state[_i0].fe = (struct TYPE_4__ **) malloc(_len_state__i0__fe0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_state__i0__fe0; _j0++) {
            int _len_state__i0__fe1 = 1;
            state[_i0].fe[_j0] = (struct TYPE_4__ *) malloc(_len_state__i0__fe1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_state__i0__fe1; _j1++) {
              state[_i0].fe[_j0]->dtv_property_cache.transmission_mode = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = fft_to_mode(state);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(*(state[_aux].fe));
        free(state[_aux].fe);
          }
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
