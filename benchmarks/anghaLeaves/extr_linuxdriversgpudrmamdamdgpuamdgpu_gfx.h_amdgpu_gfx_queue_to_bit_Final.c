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
struct TYPE_3__ {int num_pipe_per_mec; int num_queue_per_pipe; } ;
struct TYPE_4__ {TYPE_1__ mec; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;

/* Variables and functions */

__attribute__((used)) static inline int amdgpu_gfx_queue_to_bit(struct amdgpu_device *adev,
					  int mec, int pipe, int queue)
{
	int bit = 0;

	bit += mec * adev->gfx.mec.num_pipe_per_mec
		* adev->gfx.mec.num_queue_per_pipe;
	bit += pipe * adev->gfx.mec.num_queue_per_pipe;
	bit += queue;

	return bit;
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
          int mec = 100;
          int pipe = 100;
          int queue = 100;
          int _len_adev0 = 1;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].gfx.mec.num_pipe_per_mec = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].gfx.mec.num_queue_per_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = amdgpu_gfx_queue_to_bit(adev,mec,pipe,queue);
          printf("%d\n", benchRet); 
          free(adev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mec = 255;
          int pipe = 255;
          int queue = 255;
          int _len_adev0 = 65025;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].gfx.mec.num_pipe_per_mec = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].gfx.mec.num_queue_per_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = amdgpu_gfx_queue_to_bit(adev,mec,pipe,queue);
          printf("%d\n", benchRet); 
          free(adev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mec = 10;
          int pipe = 10;
          int queue = 10;
          int _len_adev0 = 100;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].gfx.mec.num_pipe_per_mec = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].gfx.mec.num_queue_per_pipe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = amdgpu_gfx_queue_to_bit(adev,mec,pipe,queue);
          printf("%d\n", benchRet); 
          free(adev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
