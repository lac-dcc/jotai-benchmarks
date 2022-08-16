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
struct file {struct cec_fh* private_data; } ;
struct cec_fh {TYPE_1__* adap; } ;
struct cec_devnode {int dummy; } ;
struct TYPE_2__ {struct cec_devnode devnode; } ;

/* Variables and functions */

__attribute__((used)) static inline struct cec_devnode *cec_devnode_data(struct file *filp)
{
	struct cec_fh *fh = filp->private_data;

	return &fh->adap->devnode;
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
          int _len_filp0 = 1;
          struct file * filp = (struct file *) malloc(_len_filp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
              int _len_filp__i0__private_data0 = 1;
          filp[_i0].private_data = (struct cec_fh *) malloc(_len_filp__i0__private_data0*sizeof(struct cec_fh));
          for(int _j0 = 0; _j0 < _len_filp__i0__private_data0; _j0++) {
              int _len_filp__i0__private_data_adap0 = 1;
          filp[_i0].private_data->adap = (struct TYPE_2__ *) malloc(_len_filp__i0__private_data_adap0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_filp__i0__private_data_adap0; _j0++) {
            filp[_i0].private_data->adap->devnode.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct cec_devnode * benchRet = cec_devnode_data(filp);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_filp0; _aux++) {
          free(filp[_aux].private_data);
          }
          free(filp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
