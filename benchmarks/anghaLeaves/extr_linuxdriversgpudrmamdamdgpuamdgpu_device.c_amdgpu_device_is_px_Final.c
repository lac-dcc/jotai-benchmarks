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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_device {int flags; } ;

/* Variables and functions */
 int AMD_IS_PX ; 

bool amdgpu_device_is_px(struct drm_device *dev)
{
	struct amdgpu_device *adev = dev->dev_private;

	if (adev->flags & AMD_IS_PX)
		return true;
	return false;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 0:
    {
          int _len_dev0 = 65025;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev_private0 = 1;
          dev[_i0].dev_private = (struct amdgpu_device *) malloc(_len_dev__i0__dev_private0*sizeof(struct amdgpu_device));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private0; _j0++) {
              dev[_i0].dev_private->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = amdgpu_device_is_px(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev_private);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_dev0 = 100;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev_private0 = 1;
          dev[_i0].dev_private = (struct amdgpu_device *) malloc(_len_dev__i0__dev_private0*sizeof(struct amdgpu_device));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private0; _j0++) {
              dev[_i0].dev_private->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = amdgpu_device_is_px(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev_private);
          }
          free(dev);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_dev0 = 1;
          struct drm_device * dev = (struct drm_device *) malloc(_len_dev0*sizeof(struct drm_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__dev_private0 = 1;
          dev[_i0].dev_private = (struct amdgpu_device *) malloc(_len_dev__i0__dev_private0*sizeof(struct amdgpu_device));
          for(int _j0 = 0; _j0 < _len_dev__i0__dev_private0; _j0++) {
              dev[_i0].dev_private->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          int benchRet = amdgpu_device_is_px(dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].dev_private);
          }
          free(dev);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
