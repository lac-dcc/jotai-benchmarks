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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  sfi_class_id_t ;
typedef  int /*<<< orphan*/  pset_cluster_type_t ;
typedef  TYPE_1__* processor_t ;
typedef  int /*<<< orphan*/  perfcontrol_class_t ;
struct TYPE_3__ {int current_pri; int /*<<< orphan*/  current_perfctl_class; int /*<<< orphan*/  current_recommended_pset_type; int /*<<< orphan*/  current_sfi_class; } ;

/* Variables and functions */

void
processor_state_update_explicit(processor_t processor, int pri, sfi_class_id_t sfi_class, 
	pset_cluster_type_t pset_type, perfcontrol_class_t perfctl_class)
{
    processor->current_pri = pri;
    processor->current_sfi_class = sfi_class;
    processor->current_recommended_pset_type = pset_type;
    processor->current_perfctl_class = perfctl_class;
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
          int pri = 100;
          int sfi_class = 100;
          int pset_type = 100;
          int perfctl_class = 100;
          int _len_processor0 = 1;
          struct TYPE_3__ * processor = (struct TYPE_3__ *) malloc(_len_processor0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_processor0; _i0++) {
            processor[_i0].current_pri = ((-2 * (next_i()%2)) + 1) * next_i();
        processor[_i0].current_perfctl_class = ((-2 * (next_i()%2)) + 1) * next_i();
        processor[_i0].current_recommended_pset_type = ((-2 * (next_i()%2)) + 1) * next_i();
        processor[_i0].current_sfi_class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          processor_state_update_explicit(processor,pri,sfi_class,pset_type,perfctl_class);
          free(processor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
