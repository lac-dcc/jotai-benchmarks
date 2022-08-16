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
#define  MP_STEREO3D_AB2L 131 
#define  MP_STEREO3D_AB2R 130 
#define  MP_STEREO3D_SBS2L 129 
#define  MP_STEREO3D_SBS2R 128 

__attribute__((used)) static void get_3d_side_by_side(int stereo_mode, int div[2])
{
    div[0] = div[1] = 1;
    switch (stereo_mode) {
    case MP_STEREO3D_SBS2L:
    case MP_STEREO3D_SBS2R: div[0] = 2; break;
    case MP_STEREO3D_AB2R:
    case MP_STEREO3D_AB2L:  div[1] = 2; break;
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
          int stereo_mode = 100;
          int _len_div0 = 2;
          int * div = (int *) malloc(_len_div0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_div0; _i0++) {
            div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_3d_side_by_side(stereo_mode,div);
          free(div);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int stereo_mode = 10;
          int _len_div0 = 100;
          int * div = (int *) malloc(_len_div0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_div0; _i0++) {
            div[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          get_3d_side_by_side(stereo_mode,div);
          free(div);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
