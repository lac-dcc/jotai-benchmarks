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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {scalar_t__ integer; scalar_t__ decimal; } ;
struct TYPE_7__ {scalar_t__ integer; scalar_t__ decimal; } ;
struct TYPE_6__ {scalar_t__ integer; scalar_t__ decimal; } ;
struct TYPE_5__ {scalar_t__ integer; scalar_t__ decimal; } ;
struct vpfe_ipipe_wb {scalar_t__ ofst_r; scalar_t__ ofst_gr; scalar_t__ ofst_gb; scalar_t__ ofst_b; TYPE_4__ gain_b; TYPE_3__ gain_gb; TYPE_2__ gain_gr; TYPE_1__ gain_r; } ;

/* Variables and functions */
 int EINVAL ; 
 scalar_t__ WB_GAIN_DECI_MASK ; 
 scalar_t__ WB_GAIN_INT_MASK ; 
 scalar_t__ WB_OFFSET_MASK ; 

__attribute__((used)) static int ipipe_validate_wb_params(struct vpfe_ipipe_wb *wbal)
{
	if (wbal->ofst_r > WB_OFFSET_MASK ||
	    wbal->ofst_gr > WB_OFFSET_MASK ||
	    wbal->ofst_gb > WB_OFFSET_MASK ||
	    wbal->ofst_b > WB_OFFSET_MASK ||
	    wbal->gain_r.integer > WB_GAIN_INT_MASK ||
	    wbal->gain_r.decimal > WB_GAIN_DECI_MASK ||
	    wbal->gain_gr.integer > WB_GAIN_INT_MASK ||
	    wbal->gain_gr.decimal > WB_GAIN_DECI_MASK ||
	    wbal->gain_gb.integer > WB_GAIN_INT_MASK ||
	    wbal->gain_gb.decimal > WB_GAIN_DECI_MASK ||
	    wbal->gain_b.integer > WB_GAIN_INT_MASK ||
	    wbal->gain_b.decimal > WB_GAIN_DECI_MASK)
		return -EINVAL;

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
          int _len_wbal0 = 1;
          struct vpfe_ipipe_wb * wbal = (struct vpfe_ipipe_wb *) malloc(_len_wbal0*sizeof(struct vpfe_ipipe_wb));
          for(int _i0 = 0; _i0 < _len_wbal0; _i0++) {
            wbal[_i0].ofst_r = ((-2 * (next_i()%2)) + 1) * next_i();
        wbal[_i0].ofst_gr = ((-2 * (next_i()%2)) + 1) * next_i();
        wbal[_i0].ofst_gb = ((-2 * (next_i()%2)) + 1) * next_i();
        wbal[_i0].ofst_b = ((-2 * (next_i()%2)) + 1) * next_i();
        wbal[_i0].gain_b.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        wbal[_i0].gain_b.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        wbal[_i0].gain_gb.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        wbal[_i0].gain_gb.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        wbal[_i0].gain_gr.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        wbal[_i0].gain_gr.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
        wbal[_i0].gain_r.integer = ((-2 * (next_i()%2)) + 1) * next_i();
        wbal[_i0].gain_r.decimal = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ipipe_validate_wb_params(wbal);
          printf("%d\n", benchRet); 
          free(wbal);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
