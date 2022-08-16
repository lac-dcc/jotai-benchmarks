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
struct dispc_clock_info {int lck_div; int pck_div; unsigned long lck; int pck; } ;

/* Variables and functions */
 int EINVAL ; 

int dispc_calc_clock_rates(unsigned long dispc_fclk_rate,
		struct dispc_clock_info *cinfo)
{
	if (cinfo->lck_div > 255 || cinfo->lck_div == 0)
		return -EINVAL;
	if (cinfo->pck_div < 1 || cinfo->pck_div > 255)
		return -EINVAL;

	cinfo->lck = dispc_fclk_rate / cinfo->lck_div;
	cinfo->pck = cinfo->lck / cinfo->pck_div;

	return 0;
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
          unsigned long dispc_fclk_rate = 100;
          int _len_cinfo0 = 1;
          struct dispc_clock_info * cinfo = (struct dispc_clock_info *) malloc(_len_cinfo0*sizeof(struct dispc_clock_info));
          for(int _i0 = 0; _i0 < _len_cinfo0; _i0++) {
            cinfo[_i0].lck_div = ((-2 * (next_i()%2)) + 1) * next_i();
        cinfo[_i0].pck_div = ((-2 * (next_i()%2)) + 1) * next_i();
        cinfo[_i0].lck = ((-2 * (next_i()%2)) + 1) * next_i();
        cinfo[_i0].pck = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dispc_calc_clock_rates(dispc_fclk_rate,cinfo);
          printf("%d\n", benchRet); 
          free(cinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
