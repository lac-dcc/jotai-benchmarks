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
typedef  int u32 ;
struct mtd_info {int dummy; } ;
struct fsl_ifc_ctrl {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int check_read_ecc(struct mtd_info *mtd, struct fsl_ifc_ctrl *ctrl,
			  u32 eccstat, unsigned int bufnum)
{
	return  (eccstat >> ((3 - bufnum % 4) * 8)) & 15;
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
          int eccstat = 100;
          unsigned int bufnum = 100;
          int _len_mtd0 = 1;
          struct mtd_info * mtd = (struct mtd_info *) malloc(_len_mtd0*sizeof(struct mtd_info));
          for(int _i0 = 0; _i0 < _len_mtd0; _i0++) {
            mtd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctrl0 = 1;
          struct fsl_ifc_ctrl * ctrl = (struct fsl_ifc_ctrl *) malloc(_len_ctrl0*sizeof(struct fsl_ifc_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_read_ecc(mtd,ctrl,eccstat,bufnum);
          printf("%d\n", benchRet); 
          free(mtd);
          free(ctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
