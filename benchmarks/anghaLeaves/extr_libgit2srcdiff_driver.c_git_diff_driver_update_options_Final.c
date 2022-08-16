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
typedef  int uint32_t ;
struct TYPE_3__ {int binary_flags; int other_flags; } ;
typedef  TYPE_1__ git_diff_driver ;

/* Variables and functions */
 int FORCE_DIFFABLE ; 

void git_diff_driver_update_options(
	uint32_t *option_flags, git_diff_driver *driver)
{
	if ((*option_flags & FORCE_DIFFABLE) == 0)
		*option_flags |= driver->binary_flags;

	*option_flags |= driver->other_flags;
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
          int _len_option_flags0 = 1;
          int * option_flags = (int *) malloc(_len_option_flags0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_option_flags0; _i0++) {
            option_flags[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_driver0 = 1;
          struct TYPE_3__ * driver = (struct TYPE_3__ *) malloc(_len_driver0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_driver0; _i0++) {
            driver[_i0].binary_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        driver[_i0].other_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          git_diff_driver_update_options(option_flags,driver);
          free(option_flags);
          free(driver);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
