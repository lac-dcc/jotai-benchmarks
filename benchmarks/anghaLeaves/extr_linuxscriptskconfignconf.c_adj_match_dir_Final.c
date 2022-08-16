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
       1            big-arr-10x\n\
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
typedef  scalar_t__ match_f ;

/* Variables and functions */
 scalar_t__ FIND_NEXT_MATCH_DOWN ; 
 scalar_t__ FIND_NEXT_MATCH_UP ; 
 scalar_t__ MATCH_TINKER_PATTERN_DOWN ; 
 scalar_t__ MATCH_TINKER_PATTERN_UP ; 

__attribute__((used)) static void adj_match_dir(match_f *match_direction)
{
	if (*match_direction == FIND_NEXT_MATCH_DOWN)
		*match_direction =
			MATCH_TINKER_PATTERN_DOWN;
	else if (*match_direction == FIND_NEXT_MATCH_UP)
		*match_direction =
			MATCH_TINKER_PATTERN_UP;
	/* else, do no change.. */
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
          int _len_match_direction0 = 1;
          long * match_direction = (long *) malloc(_len_match_direction0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_match_direction0; _i0++) {
            match_direction[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adj_match_dir(match_direction);
          free(match_direction);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_match_direction0 = 100;
          long * match_direction = (long *) malloc(_len_match_direction0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_match_direction0; _i0++) {
            match_direction[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          adj_match_dir(match_direction);
          free(match_direction);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
