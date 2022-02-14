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
       0            big-arr\n\
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
struct TYPE_3__ {int chars_in_buf; int block_loc; } ;
typedef  TYPE_1__ lz_info ;

/* Variables and functions */

int lz_left_to_process(lz_info *lzi)
{
  return lzi->chars_in_buf - lzi->block_loc;
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

    // big-arr
    case 0:
    {
          int _len_lzi0 = 1;
          struct TYPE_3__ * lzi = (struct TYPE_3__ *) malloc(_len_lzi0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_lzi0; _i0++) {
            lzi->chars_in_buf = ((-2 * (next_i()%2)) + 1) * next_i();
        lzi->block_loc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lz_left_to_process(lzi);
          printf("%d\n", benchRet); 
          free(lzi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
