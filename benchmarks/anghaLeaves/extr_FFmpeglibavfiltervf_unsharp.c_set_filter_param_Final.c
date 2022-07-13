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
       0            big-arr-10x\n\
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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int msize_x; int msize_y; float amount; int steps_x; int steps_y; int scalebits; int halfscale; } ;
typedef  TYPE_1__ UnsharpFilterParam ;

/* Variables and functions */

__attribute__((used)) static void set_filter_param(UnsharpFilterParam *fp, int msize_x, int msize_y, float amount)
{
    fp->msize_x = msize_x;
    fp->msize_y = msize_y;
    fp->amount = amount * 65536.0;

    fp->steps_x = msize_x / 2;
    fp->steps_y = msize_y / 2;
    fp->scalebits = (fp->steps_x + fp->steps_y) * 2;
    fp->halfscale = 1 << (fp->scalebits - 1);
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

    // big-arr-10x
    case 0:
    {
          int msize_x = 10;
          int msize_y = 10;
          float amount = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_fp0 = 100;
          struct TYPE_3__ * fp = (struct TYPE_3__ *) malloc(_len_fp0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fp0; _i0++) {
            fp[_i0].msize_x = ((-2 * (next_i()%2)) + 1) * next_i();
        fp[_i0].msize_y = ((-2 * (next_i()%2)) + 1) * next_i();
        fp[_i0].amount = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        fp[_i0].steps_x = ((-2 * (next_i()%2)) + 1) * next_i();
        fp[_i0].steps_y = ((-2 * (next_i()%2)) + 1) * next_i();
        fp[_i0].scalebits = ((-2 * (next_i()%2)) + 1) * next_i();
        fp[_i0].halfscale = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_filter_param(fp,msize_x,msize_y,amount);
          free(fp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
