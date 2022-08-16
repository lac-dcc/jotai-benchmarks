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
struct ccw1 {scalar_t__ count; int /*<<< orphan*/  flags; int /*<<< orphan*/  cmd_code; } ;

/* Variables and functions */
 int /*<<< orphan*/  CCW_FLAG_SLI ; 
 int /*<<< orphan*/  DASD_FBA_CCW_WRITE ; 

__attribute__((used)) static void ccw_write_no_data(struct ccw1 *ccw)
{
	ccw->cmd_code = DASD_FBA_CCW_WRITE;
	ccw->flags |= CCW_FLAG_SLI;
	ccw->count = 0;
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
          int _len_ccw0 = 1;
          struct ccw1 * ccw = (struct ccw1 *) malloc(_len_ccw0*sizeof(struct ccw1));
          for(int _i0 = 0; _i0 < _len_ccw0; _i0++) {
            ccw[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        ccw[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ccw[_i0].cmd_code = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ccw_write_no_data(ccw);
          free(ccw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
