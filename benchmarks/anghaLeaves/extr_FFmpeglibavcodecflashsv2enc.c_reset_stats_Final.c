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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {double diff_blocks; int tot_blocks; double diff_lines; int tot_lines; int raw_size; int comp_size; int uncomp_size; } ;
typedef  TYPE_1__ FlashSV2Context ;

/* Variables and functions */

__attribute__((used)) static void reset_stats(FlashSV2Context * s)
{
#ifndef FLASHSV2_DUMB
    s->diff_blocks = 0.1;
    s->tot_blocks = 1;
    s->diff_lines = 0.1;
    s->tot_lines = 1;
    s->raw_size = s->comp_size = s->uncomp_size = 10;
#endif
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
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].diff_blocks = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        s[_i0].tot_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].diff_lines = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        s[_i0].tot_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].raw_size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].comp_size = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].uncomp_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          reset_stats(s);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
