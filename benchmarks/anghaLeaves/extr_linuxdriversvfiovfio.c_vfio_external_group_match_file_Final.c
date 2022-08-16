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

/* Type definitions */
struct vfio_group {int dummy; } ;
struct file {int /*<<< orphan*/ * f_op; struct vfio_group* private_data; } ;

/* Variables and functions */
 int /*<<< orphan*/  vfio_group_fops ; 

bool vfio_external_group_match_file(struct vfio_group *test_group,
				    struct file *filep)
{
	struct vfio_group *group = filep->private_data;

	return (filep->f_op == &vfio_group_fops) && (group == test_group);
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
          int _len_test_group0 = 1;
          struct vfio_group * test_group = (struct vfio_group *) malloc(_len_test_group0*sizeof(struct vfio_group));
          for(int _i0 = 0; _i0 < _len_test_group0; _i0++) {
            test_group[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filep0 = 1;
          struct file * filep = (struct file *) malloc(_len_filep0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filep0; _i0++) {
              int _len_filep__i0__f_op0 = 1;
          filep[_i0].f_op = (int *) malloc(_len_filep__i0__f_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_filep__i0__f_op0; _j0++) {
            filep[_i0].f_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_filep__i0__private_data0 = 1;
          filep[_i0].private_data = (struct vfio_group *) malloc(_len_filep__i0__private_data0*sizeof(struct vfio_group));
          for(int _j0 = 0; _j0 < _len_filep__i0__private_data0; _j0++) {
            filep[_i0].private_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = vfio_external_group_match_file(test_group,filep);
          printf("%d\n", benchRet); 
          free(test_group);
          for(int _aux = 0; _aux < _len_filep0; _aux++) {
          free(filep[_aux].f_op);
          }
          for(int _aux = 0; _aux < _len_filep0; _aux++) {
          free(filep[_aux].private_data);
          }
          free(filep);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
