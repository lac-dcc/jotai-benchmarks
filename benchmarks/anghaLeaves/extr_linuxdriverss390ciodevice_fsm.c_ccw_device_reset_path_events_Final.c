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
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_2__ {scalar_t__ pgid_reset_mask; scalar_t__ path_new_mask; scalar_t__ path_gone_mask; } ;

/* Variables and functions */

__attribute__((used)) static void ccw_device_reset_path_events(struct ccw_device *cdev)
{
	cdev->private->path_gone_mask = 0;
	cdev->private->path_new_mask = 0;
	cdev->private->pgid_reset_mask = 0;
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
          int _len_cdev0 = 1;
          struct ccw_device * cdev = (struct ccw_device *) malloc(_len_cdev0*sizeof(struct ccw_device));
          for(int _i0 = 0; _i0 < _len_cdev0; _i0++) {
              int _len_cdev__i0__private0 = 1;
          cdev[_i0].private = (struct TYPE_2__ *) malloc(_len_cdev__i0__private0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private0; _j0++) {
            cdev[_i0].private->pgid_reset_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->path_new_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->path_gone_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ccw_device_reset_path_events(cdev);
          for(int _aux = 0; _aux < _len_cdev0; _aux++) {
          free(cdev[_aux].private);
          }
          free(cdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
