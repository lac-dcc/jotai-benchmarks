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
struct vgic_state_iter {scalar_t__ dist_id; scalar_t__ intid; scalar_t__ vcpu_id; scalar_t__ nr_cpus; scalar_t__ nr_spis; size_t lpi_idx; size_t nr_lpis; scalar_t__* lpi_array; } ;

/* Variables and functions */
 scalar_t__ VGIC_NR_PRIVATE_IRQS ; 

__attribute__((used)) static void iter_next(struct vgic_state_iter *iter)
{
	if (iter->dist_id == 0) {
		iter->dist_id++;
		return;
	}

	iter->intid++;
	if (iter->intid == VGIC_NR_PRIVATE_IRQS &&
	    ++iter->vcpu_id < iter->nr_cpus)
		iter->intid = 0;

	if (iter->intid >= (iter->nr_spis + VGIC_NR_PRIVATE_IRQS)) {
		if (iter->lpi_idx < iter->nr_lpis)
			iter->intid = iter->lpi_array[iter->lpi_idx];
		iter->lpi_idx++;
	}
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
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int _len_iter0 = 65025;
          struct vgic_state_iter * iter = (struct vgic_state_iter *) malloc(_len_iter0*sizeof(struct vgic_state_iter));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              iter[_i0].dist_id = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].intid = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].vcpu_id = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].nr_cpus = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].nr_spis = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].lpi_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].nr_lpis = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__lpi_array0 = 1;
          iter[_i0].lpi_array = (long *) malloc(_len_iter__i0__lpi_array0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_iter__i0__lpi_array0; _j0++) {
            iter[_i0].lpi_array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          iter_next(iter);
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].lpi_array);
          }
          free(iter);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int _len_iter0 = 100;
          struct vgic_state_iter * iter = (struct vgic_state_iter *) malloc(_len_iter0*sizeof(struct vgic_state_iter));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              iter[_i0].dist_id = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].intid = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].vcpu_id = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].nr_cpus = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].nr_spis = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].lpi_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].nr_lpis = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__lpi_array0 = 1;
          iter[_i0].lpi_array = (long *) malloc(_len_iter__i0__lpi_array0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_iter__i0__lpi_array0; _j0++) {
            iter[_i0].lpi_array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          iter_next(iter);
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].lpi_array);
          }
          free(iter);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 32
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 21
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 21
          // ------------------------------- 

          int _len_iter0 = 1;
          struct vgic_state_iter * iter = (struct vgic_state_iter *) malloc(_len_iter0*sizeof(struct vgic_state_iter));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
              iter[_i0].dist_id = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].intid = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].vcpu_id = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].nr_cpus = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].nr_spis = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].lpi_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          iter[_i0].nr_lpis = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iter__i0__lpi_array0 = 1;
          iter[_i0].lpi_array = (long *) malloc(_len_iter__i0__lpi_array0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_iter__i0__lpi_array0; _j0++) {
            iter[_i0].lpi_array[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          iter_next(iter);
          for(int _aux = 0; _aux < _len_iter0; _aux++) {
          free(iter[_aux].lpi_array);
          }
          free(iter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
