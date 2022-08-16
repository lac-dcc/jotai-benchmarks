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
typedef  TYPE_1__* processor_t ;
struct TYPE_3__ {int /*<<< orphan*/  current_perfctl_class; int /*<<< orphan*/  current_recommended_pset_type; int /*<<< orphan*/  current_sfi_class; int /*<<< orphan*/  current_pri; } ;

/* Variables and functions */
 int /*<<< orphan*/  IDLEPRI ; 
 int /*<<< orphan*/  PERFCONTROL_CLASS_IDLE ; 
 int /*<<< orphan*/  PSET_SMP ; 
 int /*<<< orphan*/  SFI_CLASS_KERNEL ; 

void
processor_state_update_idle(processor_t processor)
{
    processor->current_pri = IDLEPRI;
    processor->current_sfi_class = SFI_CLASS_KERNEL;
    processor->current_recommended_pset_type = PSET_SMP;
    processor->current_perfctl_class = PERFCONTROL_CLASS_IDLE;
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
          int _len_processor0 = 1;
          struct TYPE_3__ * processor = (struct TYPE_3__ *) malloc(_len_processor0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_processor0; _i0++) {
            processor[_i0].current_perfctl_class = ((-2 * (next_i()%2)) + 1) * next_i();
        processor[_i0].current_recommended_pset_type = ((-2 * (next_i()%2)) + 1) * next_i();
        processor[_i0].current_sfi_class = ((-2 * (next_i()%2)) + 1) * next_i();
        processor[_i0].current_pri = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          processor_state_update_idle(processor);
          free(processor);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
