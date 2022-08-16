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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int num_placement; } ;
struct amdgpu_bo {TYPE_2__* placements; TYPE_1__ placement; } ;
struct TYPE_4__ {int fpfn; int lpfn; } ;

/* Variables and functions */
 int PAGE_SHIFT ; 

__attribute__((used)) static void amdgpu_uvd_force_into_uvd_segment(struct amdgpu_bo *abo)
{
	int i;
	for (i = 0; i < abo->placement.num_placement; ++i) {
		abo->placements[i].fpfn = 0 >> PAGE_SHIFT;
		abo->placements[i].lpfn = (256 * 1024 * 1024) >> PAGE_SHIFT;
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
          int _len_abo0 = 1;
          struct amdgpu_bo * abo = (struct amdgpu_bo *) malloc(_len_abo0*sizeof(struct amdgpu_bo));
          for(int _i0 = 0; _i0 < _len_abo0; _i0++) {
              int _len_abo__i0__placements0 = 1;
          abo[_i0].placements = (struct TYPE_4__ *) malloc(_len_abo__i0__placements0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_abo__i0__placements0; _j0++) {
            abo[_i0].placements->fpfn = ((-2 * (next_i()%2)) + 1) * next_i();
        abo[_i0].placements->lpfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        abo[_i0].placement.num_placement = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          amdgpu_uvd_force_into_uvd_segment(abo);
          for(int _aux = 0; _aux < _len_abo0; _aux++) {
          free(abo[_aux].placements);
          }
          free(abo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
