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
struct nvme_ns {scalar_t__ ana_state; TYPE_1__* ctrl; } ;
struct TYPE_2__ {scalar_t__ state; } ;

/* Variables and functions */
 scalar_t__ NVME_ANA_OPTIMIZED ; 
 scalar_t__ NVME_CTRL_LIVE ; 

__attribute__((used)) static inline bool nvme_path_is_optimized(struct nvme_ns *ns)
{
	return ns->ctrl->state == NVME_CTRL_LIVE &&
		ns->ana_state == NVME_ANA_OPTIMIZED;
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
          int _len_ns0 = 1;
          struct nvme_ns * ns = (struct nvme_ns *) malloc(_len_ns0*sizeof(struct nvme_ns));
          for(int _i0 = 0; _i0 < _len_ns0; _i0++) {
            ns[_i0].ana_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ns__i0__ctrl0 = 1;
          ns[_i0].ctrl = (struct TYPE_2__ *) malloc(_len_ns__i0__ctrl0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ns__i0__ctrl0; _j0++) {
            ns[_i0].ctrl->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nvme_path_is_optimized(ns);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ns0; _aux++) {
          free(ns[_aux].ctrl);
          }
          free(ns);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
