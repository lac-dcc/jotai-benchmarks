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
typedef  scalar_t__ u32 ;
struct amdgpu_device {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int dce_virtual_crtc_get_scanoutpos(struct amdgpu_device *adev, int crtc,
					u32 *vbl, u32 *position)
{
	*vbl = 0;
	*position = 0;

	return -EINVAL;
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
          int crtc = 100;
          int _len_adev0 = 1;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbl0 = 1;
          long * vbl = (long *) malloc(_len_vbl0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_vbl0; _i0++) {
            vbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_position0 = 1;
          long * position = (long *) malloc(_len_position0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_position0; _i0++) {
            position[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dce_virtual_crtc_get_scanoutpos(adev,crtc,vbl,position);
          printf("%d\n", benchRet); 
          free(adev);
          free(vbl);
          free(position);
        
        break;
    }
    // big-arr
    case 1:
    {
          int crtc = 255;
          int _len_adev0 = 65025;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbl0 = 65025;
          long * vbl = (long *) malloc(_len_vbl0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_vbl0; _i0++) {
            vbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_position0 = 65025;
          long * position = (long *) malloc(_len_position0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_position0; _i0++) {
            position[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dce_virtual_crtc_get_scanoutpos(adev,crtc,vbl,position);
          printf("%d\n", benchRet); 
          free(adev);
          free(vbl);
          free(position);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int crtc = 10;
          int _len_adev0 = 100;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vbl0 = 100;
          long * vbl = (long *) malloc(_len_vbl0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_vbl0; _i0++) {
            vbl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_position0 = 100;
          long * position = (long *) malloc(_len_position0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_position0; _i0++) {
            position[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dce_virtual_crtc_get_scanoutpos(adev,crtc,vbl,position);
          printf("%d\n", benchRet); 
          free(adev);
          free(vbl);
          free(position);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
