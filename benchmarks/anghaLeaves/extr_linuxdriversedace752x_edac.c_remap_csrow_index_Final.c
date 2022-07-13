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
struct mem_ctl_info {struct e752x_pvt* pvt_info; } ;
struct e752x_pvt {int /*<<< orphan*/  map_type; } ;

/* Variables and functions */

__attribute__((used)) static inline int remap_csrow_index(struct mem_ctl_info *mci, int index)
{
	struct e752x_pvt *pvt = mci->pvt_info;

	if (!pvt->map_type)
		return (7 - index);

	return (index);
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
          int index = 100;
          int _len_mci0 = 1;
          struct mem_ctl_info * mci = (struct mem_ctl_info *) malloc(_len_mci0*sizeof(struct mem_ctl_info));
          for(int _i0 = 0; _i0 < _len_mci0; _i0++) {
              int _len_mci__i0__pvt_info0 = 1;
          mci[_i0].pvt_info = (struct e752x_pvt *) malloc(_len_mci__i0__pvt_info0*sizeof(struct e752x_pvt));
          for(int _j0 = 0; _j0 < _len_mci__i0__pvt_info0; _j0++) {
            mci[_i0].pvt_info->map_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = remap_csrow_index(mci,index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mci0; _aux++) {
          free(mci[_aux].pvt_info);
          }
          free(mci);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int _len_mci0 = 65025;
          struct mem_ctl_info * mci = (struct mem_ctl_info *) malloc(_len_mci0*sizeof(struct mem_ctl_info));
          for(int _i0 = 0; _i0 < _len_mci0; _i0++) {
              int _len_mci__i0__pvt_info0 = 1;
          mci[_i0].pvt_info = (struct e752x_pvt *) malloc(_len_mci__i0__pvt_info0*sizeof(struct e752x_pvt));
          for(int _j0 = 0; _j0 < _len_mci__i0__pvt_info0; _j0++) {
            mci[_i0].pvt_info->map_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = remap_csrow_index(mci,index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mci0; _aux++) {
          free(mci[_aux].pvt_info);
          }
          free(mci);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int _len_mci0 = 100;
          struct mem_ctl_info * mci = (struct mem_ctl_info *) malloc(_len_mci0*sizeof(struct mem_ctl_info));
          for(int _i0 = 0; _i0 < _len_mci0; _i0++) {
              int _len_mci__i0__pvt_info0 = 1;
          mci[_i0].pvt_info = (struct e752x_pvt *) malloc(_len_mci__i0__pvt_info0*sizeof(struct e752x_pvt));
          for(int _j0 = 0; _j0 < _len_mci__i0__pvt_info0; _j0++) {
            mci[_i0].pvt_info->map_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = remap_csrow_index(mci,index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mci0; _aux++) {
          free(mci[_aux].pvt_info);
          }
          free(mci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
