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

/* Type definitions */
typedef  int u32 ;
typedef  enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;

/* Variables and functions */
 int EINVAL ; 
#define  IPU_ROTATE_180 131 
#define  IPU_ROTATE_90_LEFT 130 
#define  IPU_ROTATE_90_RIGHT 129 
#define  IPU_ROTATE_NONE 128 

int ipu_rot_mode_to_degrees(int *degrees, enum ipu_rotate_mode mode,
			    bool hflip, bool vflip)
{
	u32 r90, vf, hf;

	r90 = ((u32)mode >> 2) & 0x1;
	hf = ((u32)mode >> 1) & 0x1;
	vf = ((u32)mode >> 0) & 0x1;
	hf ^= (u32)hflip;
	vf ^= (u32)vflip;

	switch ((enum ipu_rotate_mode)((r90 << 2) | (hf << 1) | vf)) {
	case IPU_ROTATE_NONE:
		*degrees = 0;
		break;
	case IPU_ROTATE_90_RIGHT:
		*degrees = 90;
		break;
	case IPU_ROTATE_180:
		*degrees = 180;
		break;
	case IPU_ROTATE_90_LEFT:
		*degrees = 270;
		break;
	default:
		return -EINVAL;
	}

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
          enum ipu_rotate_mode mode = 0;
          int hflip = 100;
          int vflip = 100;
          int _len_degrees0 = 1;
          int * degrees = (int *) malloc(_len_degrees0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_degrees0; _i0++) {
            degrees[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipu_rot_mode_to_degrees(degrees,mode,hflip,vflip);
          printf("%d\n", benchRet); 
          free(degrees);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum ipu_rotate_mode mode = 0;
          int hflip = 255;
          int vflip = 255;
          int _len_degrees0 = 65025;
          int * degrees = (int *) malloc(_len_degrees0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_degrees0; _i0++) {
            degrees[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipu_rot_mode_to_degrees(degrees,mode,hflip,vflip);
          printf("%d\n", benchRet); 
          free(degrees);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum ipu_rotate_mode mode = 0;
          int hflip = 10;
          int vflip = 10;
          int _len_degrees0 = 100;
          int * degrees = (int *) malloc(_len_degrees0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_degrees0; _i0++) {
            degrees[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipu_rot_mode_to_degrees(degrees,mode,hflip,vflip);
          printf("%d\n", benchRet); 
          free(degrees);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
