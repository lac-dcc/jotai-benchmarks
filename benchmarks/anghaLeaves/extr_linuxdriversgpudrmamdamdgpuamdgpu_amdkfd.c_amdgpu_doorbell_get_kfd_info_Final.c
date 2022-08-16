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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_2__ {int size; int num_doorbells; scalar_t__ base; } ;
struct amdgpu_device {TYPE_1__ doorbell; } ;
typedef  scalar_t__ phys_addr_t ;

/* Variables and functions */

__attribute__((used)) static void amdgpu_doorbell_get_kfd_info(struct amdgpu_device *adev,
					 phys_addr_t *aperture_base,
					 size_t *aperture_size,
					 size_t *start_offset)
{
	/*
	 * The first num_doorbells are used by amdgpu.
	 * amdkfd takes whatever's left in the aperture.
	 */
	if (adev->doorbell.size > adev->doorbell.num_doorbells * sizeof(u32)) {
		*aperture_base = adev->doorbell.base;
		*aperture_size = adev->doorbell.size;
		*start_offset = adev->doorbell.num_doorbells * sizeof(u32);
	} else {
		*aperture_base = 0;
		*aperture_size = 0;
		*start_offset = 0;
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
          int _len_adev0 = 1;
          struct amdgpu_device * adev = (struct amdgpu_device *) malloc(_len_adev0*sizeof(struct amdgpu_device));
          for(int _i0 = 0; _i0 < _len_adev0; _i0++) {
            adev[_i0].doorbell.size = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].doorbell.num_doorbells = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].doorbell.base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aperture_base0 = 1;
          long * aperture_base = (long *) malloc(_len_aperture_base0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_aperture_base0; _i0++) {
            aperture_base[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_aperture_size0 = 1;
          unsigned long * aperture_size = (unsigned long *) malloc(_len_aperture_size0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_aperture_size0; _i0++) {
            aperture_size[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_start_offset0 = 1;
          unsigned long * start_offset = (unsigned long *) malloc(_len_start_offset0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_start_offset0; _i0++) {
            start_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          amdgpu_doorbell_get_kfd_info(adev,aperture_base,aperture_size,start_offset);
          free(adev);
          free(aperture_base);
          free(aperture_size);
          free(start_offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
