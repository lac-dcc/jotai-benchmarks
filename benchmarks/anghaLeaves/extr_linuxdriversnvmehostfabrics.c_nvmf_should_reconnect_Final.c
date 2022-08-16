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
struct nvme_ctrl {int nr_reconnects; TYPE_1__* opts; } ;
struct TYPE_2__ {int max_reconnects; } ;

/* Variables and functions */

bool nvmf_should_reconnect(struct nvme_ctrl *ctrl)
{
	if (ctrl->opts->max_reconnects == -1 ||
	    ctrl->nr_reconnects < ctrl->opts->max_reconnects)
		return true;

	return false;
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
          int _len_ctrl0 = 1;
          struct nvme_ctrl * ctrl = (struct nvme_ctrl *) malloc(_len_ctrl0*sizeof(struct nvme_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0].nr_reconnects = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctrl__i0__opts0 = 1;
          ctrl[_i0].opts = (struct TYPE_2__ *) malloc(_len_ctrl__i0__opts0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__opts0; _j0++) {
            ctrl[_i0].opts->max_reconnects = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = nvmf_should_reconnect(ctrl);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(ctrl[_aux].opts);
          }
          free(ctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
