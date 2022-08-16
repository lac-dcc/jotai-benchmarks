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

/* Variables and functions */
 unsigned int CRT_Device ; 
 unsigned int DVI_Device ; 
 unsigned int LCD_Device ; 
 unsigned int None_Device ; 

void viafb_get_gamma_support_state(int bpp, unsigned int *support_state)
{
	if (bpp == 8)
		*support_state = None_Device;
	else
		*support_state = CRT_Device | DVI_Device | LCD_Device;
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
          int bpp = 100;
          int _len_support_state0 = 1;
          unsigned int * support_state = (unsigned int *) malloc(_len_support_state0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_support_state0; _i0++) {
            support_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          viafb_get_gamma_support_state(bpp,support_state);
          free(support_state);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int bpp = 10;
          int _len_support_state0 = 100;
          unsigned int * support_state = (unsigned int *) malloc(_len_support_state0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_support_state0; _i0++) {
            support_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          viafb_get_gamma_support_state(bpp,support_state);
          free(support_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
