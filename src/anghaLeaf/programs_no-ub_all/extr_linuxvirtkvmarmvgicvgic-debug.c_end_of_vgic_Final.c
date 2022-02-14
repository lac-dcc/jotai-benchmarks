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
       0            big-arr\n\
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
struct vgic_state_iter {scalar_t__ dist_id; scalar_t__ vcpu_id; scalar_t__ nr_cpus; scalar_t__ intid; scalar_t__ nr_spis; scalar_t__ lpi_idx; scalar_t__ nr_lpis; } ;

/* Variables and functions */
 scalar_t__ VGIC_NR_PRIVATE_IRQS ; 

__attribute__((used)) static bool end_of_vgic(struct vgic_state_iter *iter)
{
	return iter->dist_id > 0 &&
		iter->vcpu_id == iter->nr_cpus &&
		iter->intid >= (iter->nr_spis + VGIC_NR_PRIVATE_IRQS) &&
		iter->lpi_idx > iter->nr_lpis;
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

    // big-arr
    case 0:
    {
          int _len_iter0 = 1;
          struct vgic_state_iter * iter = (struct vgic_state_iter *) malloc(_len_iter0*sizeof(struct vgic_state_iter));
          for(int _i0 = 0; _i0 < _len_iter0; _i0++) {
            iter->dist_id = ((-2 * (next_i()%2)) + 1) * next_i();
        iter->vcpu_id = ((-2 * (next_i()%2)) + 1) * next_i();
        iter->nr_cpus = ((-2 * (next_i()%2)) + 1) * next_i();
        iter->intid = ((-2 * (next_i()%2)) + 1) * next_i();
        iter->nr_spis = ((-2 * (next_i()%2)) + 1) * next_i();
        iter->lpi_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        iter->nr_lpis = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = end_of_vgic(iter);
          printf("%d\n", benchRet); 
          free(iter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
