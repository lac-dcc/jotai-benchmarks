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

/* Type definitions */
struct zspage {unsigned int class; int fullness; } ;
typedef  enum fullness_group { ____Placeholder_fullness_group } fullness_group ;

/* Variables and functions */

__attribute__((used)) static void set_zspage_mapping(struct zspage *zspage,
				unsigned int class_idx,
				enum fullness_group fullness)
{
	zspage->class = class_idx;
	zspage->fullness = fullness;
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
          unsigned int class_idx = 255;
          enum fullness_group fullness = 0;
          int _len_zspage0 = 1;
          struct zspage * zspage = (struct zspage *) malloc(_len_zspage0*sizeof(struct zspage));
          for(int _i0 = 0; _i0 < _len_zspage0; _i0++) {
            zspage->class = ((-2 * (next_i()%2)) + 1) * next_i();
        zspage->fullness = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_zspage_mapping(zspage,class_idx,fullness);
          free(zspage);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
