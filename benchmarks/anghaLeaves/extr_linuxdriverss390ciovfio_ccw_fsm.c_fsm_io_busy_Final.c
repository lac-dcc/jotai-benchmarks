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
struct vfio_ccw_private {TYPE_1__* io_region; } ;
typedef  enum vfio_ccw_event { ____Placeholder_vfio_ccw_event } vfio_ccw_event ;
struct TYPE_2__ {int /*<<< orphan*/  ret_code; } ;

/* Variables and functions */
 int /*<<< orphan*/  EBUSY ; 

__attribute__((used)) static void fsm_io_busy(struct vfio_ccw_private *private,
			enum vfio_ccw_event event)
{
	private->io_region->ret_code = -EBUSY;
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
          enum vfio_ccw_event event = 0;
          int _len_private0 = 1;
          struct vfio_ccw_private * private = (struct vfio_ccw_private *) malloc(_len_private0*sizeof(struct vfio_ccw_private));
          for(int _i0 = 0; _i0 < _len_private0; _i0++) {
              int _len_private__i0__io_region0 = 1;
          private[_i0].io_region = (struct TYPE_2__ *) malloc(_len_private__i0__io_region0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_private__i0__io_region0; _j0++) {
            private[_i0].io_region->ret_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          fsm_io_busy(private,event);
          for(int _aux = 0; _aux < _len_private0; _aux++) {
          free(private[_aux].io_region);
          }
          free(private);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
