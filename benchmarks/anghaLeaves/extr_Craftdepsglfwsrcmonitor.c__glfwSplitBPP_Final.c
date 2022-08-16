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

/* Variables and functions */

void _glfwSplitBPP(int bpp, int* red, int* green, int* blue)
{
    int delta;

    // We assume that by 32 the user really meant 24
    if (bpp == 32)
        bpp = 24;

    // Convert "bits per pixel" to red, green & blue sizes

    *red = *green = *blue = bpp / 3;
    delta = bpp - (*red * 3);
    if (delta >= 1)
        *green = *green + 1;

    if (delta == 2)
        *red = *red + 1;
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
          int _len_red0 = 1;
          int * red = (int *) malloc(_len_red0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_red0; _i0++) {
            red[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_green0 = 1;
          int * green = (int *) malloc(_len_green0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_green0; _i0++) {
            green[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_blue0 = 1;
          int * blue = (int *) malloc(_len_blue0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blue0; _i0++) {
            blue[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          _glfwSplitBPP(bpp,red,green,blue);
          free(red);
          free(green);
          free(blue);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
