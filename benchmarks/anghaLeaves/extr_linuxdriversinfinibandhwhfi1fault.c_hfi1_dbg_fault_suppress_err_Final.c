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
struct hfi1_ibdev {TYPE_1__* fault; } ;
struct TYPE_2__ {int suppress_err; } ;

/* Variables and functions */

bool hfi1_dbg_fault_suppress_err(struct hfi1_ibdev *ibd)
{
	if (ibd->fault)
		return ibd->fault->suppress_err;
	return false;
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
          int _len_ibd0 = 1;
          struct hfi1_ibdev * ibd = (struct hfi1_ibdev *) malloc(_len_ibd0*sizeof(struct hfi1_ibdev));
          for(int _i0 = 0; _i0 < _len_ibd0; _i0++) {
              int _len_ibd__i0__fault0 = 1;
          ibd[_i0].fault = (struct TYPE_2__ *) malloc(_len_ibd__i0__fault0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ibd__i0__fault0; _j0++) {
            ibd[_i0].fault->suppress_err = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = hfi1_dbg_fault_suppress_err(ibd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ibd0; _aux++) {
          free(ibd[_aux].fault);
          }
          free(ibd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
