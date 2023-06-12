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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_1__* upl_t ;
struct upl_io_completion {int io_error; } ;
struct TYPE_3__ {struct upl_io_completion* upl_iodone; } ;

/* Variables and functions */

void upl_set_iodone_error(upl_t upl, int error)
{
        struct upl_io_completion *upl_ctx = upl->upl_iodone;

	if (upl_ctx)
	        upl_ctx->io_error = error;
}

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
          int error = 100;
        
          int _len_upl0 = 1;
          struct TYPE_3__ * upl = (struct TYPE_3__ *) malloc(_len_upl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_upl0; _i0++) {
              int _len_upl__i0__upl_iodone0 = 1;
          upl[_i0].upl_iodone = (struct upl_io_completion *) malloc(_len_upl__i0__upl_iodone0*sizeof(struct upl_io_completion));
          for(int _j0 = 0; _j0 < _len_upl__i0__upl_iodone0; _j0++) {
              upl[_i0].upl_iodone->io_error = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          upl_set_iodone_error(upl,error);
          for(int _aux = 0; _aux < _len_upl0; _aux++) {
          free(upl[_aux].upl_iodone);
          }
          free(upl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int error = 255;
        
          int _len_upl0 = 65025;
          struct TYPE_3__ * upl = (struct TYPE_3__ *) malloc(_len_upl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_upl0; _i0++) {
              int _len_upl__i0__upl_iodone0 = 1;
          upl[_i0].upl_iodone = (struct upl_io_completion *) malloc(_len_upl__i0__upl_iodone0*sizeof(struct upl_io_completion));
          for(int _j0 = 0; _j0 < _len_upl__i0__upl_iodone0; _j0++) {
              upl[_i0].upl_iodone->io_error = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          upl_set_iodone_error(upl,error);
          for(int _aux = 0; _aux < _len_upl0; _aux++) {
          free(upl[_aux].upl_iodone);
          }
          free(upl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int error = 10;
        
          int _len_upl0 = 100;
          struct TYPE_3__ * upl = (struct TYPE_3__ *) malloc(_len_upl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_upl0; _i0++) {
              int _len_upl__i0__upl_iodone0 = 1;
          upl[_i0].upl_iodone = (struct upl_io_completion *) malloc(_len_upl__i0__upl_iodone0*sizeof(struct upl_io_completion));
          for(int _j0 = 0; _j0 < _len_upl__i0__upl_iodone0; _j0++) {
              upl[_i0].upl_iodone->io_error = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          upl_set_iodone_error(upl,error);
          for(int _aux = 0; _aux < _len_upl0; _aux++) {
          free(upl[_aux].upl_iodone);
          }
          free(upl);
        
        break;
    }
    // empty
    case 3:
    {
          int error = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_upl0 = 1;
          struct TYPE_3__ * upl = (struct TYPE_3__ *) malloc(_len_upl0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_upl0; _i0++) {
              int _len_upl__i0__upl_iodone0 = 1;
          upl[_i0].upl_iodone = (struct upl_io_completion *) malloc(_len_upl__i0__upl_iodone0*sizeof(struct upl_io_completion));
          for(int _j0 = 0; _j0 < _len_upl__i0__upl_iodone0; _j0++) {
              upl[_i0].upl_iodone->io_error = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          }
        
          upl_set_iodone_error(upl,error);
          for(int _aux = 0; _aux < _len_upl0; _aux++) {
          free(upl[_aux].upl_iodone);
          }
          free(upl);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
