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
 unsigned long DEBUG_LEVEL_1 ; 
 unsigned long DEBUG_LEVEL_2 ; 
 unsigned long DEBUG_LEVEL_3 ; 
 unsigned long DEBUG_LEVEL_4 ; 
 unsigned long DEBUG_LEVEL_5 ; 
 unsigned long DEBUG_LEVEL_6 ; 

void fbtft_expand_debug_value(unsigned long *debug)
{
	switch (*debug & 0x7) {
	case 1:
		*debug |= DEBUG_LEVEL_1;
		break;
	case 2:
		*debug |= DEBUG_LEVEL_2;
		break;
	case 3:
		*debug |= DEBUG_LEVEL_3;
		break;
	case 4:
		*debug |= DEBUG_LEVEL_4;
		break;
	case 5:
		*debug |= DEBUG_LEVEL_5;
		break;
	case 6:
		*debug |= DEBUG_LEVEL_6;
		break;
	case 7:
		*debug = 0xFFFFFFFF;
		break;
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
          int _len_debug0 = 1;
          unsigned long * debug = (unsigned long *) malloc(_len_debug0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_debug0; _i0++) {
            debug[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fbtft_expand_debug_value(debug);
          free(debug);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_debug0 = 100;
          unsigned long * debug = (unsigned long *) malloc(_len_debug0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_debug0; _i0++) {
            debug[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fbtft_expand_debug_value(debug);
          free(debug);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
