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
struct ftrace_branch_data {int correct; int incorrect; } ;

/* Variables and functions */

__attribute__((used)) static inline long get_incorrect_percent(struct ftrace_branch_data *p)
{
	long percent;

	if (p->correct) {
		percent = p->incorrect * 100;
		percent /= p->correct + p->incorrect;
	} else
		percent = p->incorrect ? 100 : -1;

	return percent;
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
          int _len_p0 = 1;
          struct ftrace_branch_data * p = (struct ftrace_branch_data *) malloc(_len_p0*sizeof(struct ftrace_branch_data));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].correct = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].incorrect = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = get_incorrect_percent(p);
          printf("%ld\n", benchRet); 
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
