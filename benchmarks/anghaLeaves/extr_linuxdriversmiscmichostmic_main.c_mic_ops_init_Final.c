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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct mic_device {int family; int /*<<< orphan*/ * smpt_ops; int /*<<< orphan*/ * intr_ops; int /*<<< orphan*/ * ops; } ;

/* Variables and functions */
#define  MIC_FAMILY_X100 128 
 int /*<<< orphan*/  mic_x100_intr_ops ; 
 int /*<<< orphan*/  mic_x100_ops ; 
 int /*<<< orphan*/  mic_x100_smpt_ops ; 

__attribute__((used)) static void mic_ops_init(struct mic_device *mdev)
{
	switch (mdev->family) {
	case MIC_FAMILY_X100:
		mdev->ops = &mic_x100_ops;
		mdev->intr_ops = &mic_x100_intr_ops;
		mdev->smpt_ops = &mic_x100_smpt_ops;
		break;
	default:
		break;
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
          int _len_mdev0 = 1;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mdev__i0__smpt_ops0 = 1;
          mdev[_i0].smpt_ops = (int *) malloc(_len_mdev__i0__smpt_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__smpt_ops0; _j0++) {
            mdev[_i0].smpt_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mdev__i0__intr_ops0 = 1;
          mdev[_i0].intr_ops = (int *) malloc(_len_mdev__i0__intr_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__intr_ops0; _j0++) {
            mdev[_i0].intr_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mdev__i0__ops0 = 1;
          mdev[_i0].ops = (int *) malloc(_len_mdev__i0__ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__ops0; _j0++) {
            mdev[_i0].ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mic_ops_init(mdev);
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].smpt_ops);
          }
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].intr_ops);
          }
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].ops);
          }
          free(mdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mdev0 = 65025;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mdev__i0__smpt_ops0 = 1;
          mdev[_i0].smpt_ops = (int *) malloc(_len_mdev__i0__smpt_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__smpt_ops0; _j0++) {
            mdev[_i0].smpt_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mdev__i0__intr_ops0 = 1;
          mdev[_i0].intr_ops = (int *) malloc(_len_mdev__i0__intr_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__intr_ops0; _j0++) {
            mdev[_i0].intr_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mdev__i0__ops0 = 1;
          mdev[_i0].ops = (int *) malloc(_len_mdev__i0__ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__ops0; _j0++) {
            mdev[_i0].ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mic_ops_init(mdev);
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].smpt_ops);
          }
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].intr_ops);
          }
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].ops);
          }
          free(mdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mdev0 = 100;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
            mdev[_i0].family = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mdev__i0__smpt_ops0 = 1;
          mdev[_i0].smpt_ops = (int *) malloc(_len_mdev__i0__smpt_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__smpt_ops0; _j0++) {
            mdev[_i0].smpt_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mdev__i0__intr_ops0 = 1;
          mdev[_i0].intr_ops = (int *) malloc(_len_mdev__i0__intr_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__intr_ops0; _j0++) {
            mdev[_i0].intr_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mdev__i0__ops0 = 1;
          mdev[_i0].ops = (int *) malloc(_len_mdev__i0__ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_mdev__i0__ops0; _j0++) {
            mdev[_i0].ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mic_ops_init(mdev);
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].smpt_ops);
          }
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].intr_ops);
          }
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].ops);
          }
          free(mdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
