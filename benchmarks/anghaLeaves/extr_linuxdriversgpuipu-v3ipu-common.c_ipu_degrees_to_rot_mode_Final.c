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
typedef  int u32 ;
typedef  enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;

/* Variables and functions */
 int EINVAL ; 

int ipu_degrees_to_rot_mode(enum ipu_rotate_mode *mode, int degrees,
			    bool hflip, bool vflip)
{
	u32 r90, vf, hf;

	switch (degrees) {
	case 0:
		vf = hf = r90 = 0;
		break;
	case 90:
		vf = hf = 0;
		r90 = 1;
		break;
	case 180:
		vf = hf = 1;
		r90 = 0;
		break;
	case 270:
		vf = hf = r90 = 1;
		break;
	default:
		return -EINVAL;
	}

	hf ^= (u32)hflip;
	vf ^= (u32)vflip;

	*mode = (enum ipu_rotate_mode)((r90 << 2) | (hf << 1) | vf);
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
          int degrees = 100;
          int hflip = 100;
          int vflip = 100;
          int _len_mode0 = 1;
          enum ipu_rotate_mode * mode = (enum ipu_rotate_mode *) malloc(_len_mode0*sizeof(enum ipu_rotate_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = 0;
          }
          int benchRet = ipu_degrees_to_rot_mode(mode,degrees,hflip,vflip);
          printf("%d\n", benchRet); 
          free(mode);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int degrees = 10;
          int hflip = 10;
          int vflip = 10;
          int _len_mode0 = 100;
          enum ipu_rotate_mode * mode = (enum ipu_rotate_mode *) malloc(_len_mode0*sizeof(enum ipu_rotate_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0] = 0;
          }
          int benchRet = ipu_degrees_to_rot_mode(mode,degrees,hflip,vflip);
          printf("%d\n", benchRet); 
          free(mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
