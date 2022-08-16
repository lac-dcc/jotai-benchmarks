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
struct fmc_driver {int busid_n; scalar_t__* busid_val; } ;
struct fmc_device {scalar_t__ device_id; } ;

/* Variables and functions */
 int ENOENT ; 

__attribute__((used)) static int ff_validate(struct fmc_device *fmc, struct fmc_driver *drv)
{
	int i;

	if (!drv->busid_n)
		return 0; /* everyhing is valid */
	for (i = 0; i < drv->busid_n; i++)
		if (drv->busid_val[i] == fmc->device_id)
			return i;
	return -ENOENT;
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
          int _len_fmc0 = 1;
          struct fmc_device * fmc = (struct fmc_device *) malloc(_len_fmc0*sizeof(struct fmc_device));
          for(int _i0 = 0; _i0 < _len_fmc0; _i0++) {
            fmc[_i0].device_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_drv0 = 1;
          struct fmc_driver * drv = (struct fmc_driver *) malloc(_len_drv0*sizeof(struct fmc_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
            drv[_i0].busid_n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_drv__i0__busid_val0 = 1;
          drv[_i0].busid_val = (long *) malloc(_len_drv__i0__busid_val0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_drv__i0__busid_val0; _j0++) {
            drv[_i0].busid_val[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ff_validate(fmc,drv);
          printf("%d\n", benchRet); 
          free(fmc);
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].busid_val);
          }
          free(drv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
