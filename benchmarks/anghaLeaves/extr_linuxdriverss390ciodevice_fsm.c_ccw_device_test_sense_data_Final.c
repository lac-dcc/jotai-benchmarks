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
struct TYPE_6__ {scalar_t__ cu_type; scalar_t__ cu_model; scalar_t__ dev_type; scalar_t__ dev_model; } ;
struct ccw_device {TYPE_2__* private; TYPE_3__ id; } ;
struct TYPE_4__ {scalar_t__ cu_type; scalar_t__ cu_model; scalar_t__ dev_type; scalar_t__ dev_model; } ;
struct TYPE_5__ {TYPE_1__ senseid; } ;

/* Variables and functions */

int ccw_device_test_sense_data(struct ccw_device *cdev)
{
	return cdev->id.cu_type == cdev->private->senseid.cu_type &&
		cdev->id.cu_model == cdev->private->senseid.cu_model &&
		cdev->id.dev_type == cdev->private->senseid.dev_type &&
		cdev->id.dev_model == cdev->private->senseid.dev_model;
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
          cdev[_i0].private = (struct TYPE_5__ *) malloc(_len_cdev__i0__private0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cdev__i0__private0; _j0++) {
            cdev[_i0].private->senseid.cu_type = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->senseid.cu_model = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->senseid.dev_type = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].private->senseid.dev_model = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cdev[_i0].id.cu_type = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].id.cu_model = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].id.dev_type = ((-2 * (next_i()%2)) + 1) * next_i();
        cdev[_i0].id.dev_model = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ccw_device_test_sense_data(cdev);
          printf("%d\n", benchRet); 
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
