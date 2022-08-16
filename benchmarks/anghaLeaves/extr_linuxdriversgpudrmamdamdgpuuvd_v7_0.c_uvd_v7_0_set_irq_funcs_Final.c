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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int num_uvd_inst; int harvest_config; TYPE_3__* inst; scalar_t__ num_enc_rings; } ;
struct amdgpu_device {TYPE_1__ uvd; } ;
struct TYPE_5__ {int /*<<< orphan*/ * funcs; scalar_t__ num_types; } ;
struct TYPE_6__ {TYPE_2__ irq; } ;

/* Variables and functions */
 int /*<<< orphan*/  uvd_v7_0_irq_funcs ; 

__attribute__((used)) static void uvd_v7_0_set_irq_funcs(struct amdgpu_device *adev)
{
	int i;

	for (i = 0; i < adev->uvd.num_uvd_inst; i++) {
		if (adev->uvd.harvest_config & (1 << i))
			continue;
		adev->uvd.inst[i].irq.num_types = adev->uvd.num_enc_rings + 1;
		adev->uvd.inst[i].irq.funcs = &uvd_v7_0_irq_funcs;
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
            adev[_i0].uvd.num_uvd_inst = ((-2 * (next_i()%2)) + 1) * next_i();
        adev[_i0].uvd.harvest_config = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adev__i0__uvd_inst0 = 1;
          adev[_i0].uvd.inst = (struct TYPE_6__ *) malloc(_len_adev__i0__uvd_inst0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_adev__i0__uvd_inst0; _j0++) {
              int _len_adev__i0__uvd_inst_irq_funcs0 = 1;
          adev[_i0].uvd.inst->irq.funcs = (int *) malloc(_len_adev__i0__uvd_inst_irq_funcs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_adev__i0__uvd_inst_irq_funcs0; _j0++) {
            adev[_i0].uvd.inst->irq.funcs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].uvd.inst->irq.num_types = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        adev[_i0].uvd.num_enc_rings = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          uvd_v7_0_set_irq_funcs(adev);
          free(adev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
