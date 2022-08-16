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
typedef  int /*<<< orphan*/  u32 ;
struct fman {TYPE_1__* state; } ;
struct TYPE_2__ {int /*<<< orphan*/  bmi_max_fifo_size; } ;

/* Variables and functions */

u32 fman_get_bmi_max_fifo_size(struct fman *fman)
{
	return fman->state->bmi_max_fifo_size;
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
          int _len_fman0 = 1;
          struct fman * fman = (struct fman *) malloc(_len_fman0*sizeof(struct fman));
          for(int _i0 = 0; _i0 < _len_fman0; _i0++) {
              int _len_fman__i0__state0 = 1;
          fman[_i0].state = (struct TYPE_2__ *) malloc(_len_fman__i0__state0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_fman__i0__state0; _j0++) {
            fman[_i0].state->bmi_max_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = fman_get_bmi_max_fifo_size(fman);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_fman0; _aux++) {
          free(fman[_aux].state);
          }
          free(fman);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
