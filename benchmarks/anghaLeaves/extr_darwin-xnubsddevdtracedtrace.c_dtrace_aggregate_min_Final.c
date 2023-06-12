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

/* Type definitions */
typedef  scalar_t__ uint64_t ;
typedef  scalar_t__ int64_t ;

/* Variables and functions */

__attribute__((used)) static void
dtrace_aggregate_min(uint64_t *oval, uint64_t nval, uint64_t arg)
{
#pragma unused(arg) /* __APPLE__ */
	if ((int64_t)nval < (int64_t)*oval)
		*oval = nval;
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
          long nval = 100;
        
          long arg = 100;
        
          int _len_oval0 = 1;
          long * oval = (long *) malloc(_len_oval0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_oval0; _i0++) {
            oval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          dtrace_aggregate_min(oval,nval,arg);
          free(oval);
        
        break;
    }
    // big-arr
    case 1:
    {
          long nval = 255;
        
          long arg = 255;
        
          int _len_oval0 = 65025;
          long * oval = (long *) malloc(_len_oval0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_oval0; _i0++) {
            oval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          dtrace_aggregate_min(oval,nval,arg);
          free(oval);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long nval = 10;
        
          long arg = 10;
        
          int _len_oval0 = 100;
          long * oval = (long *) malloc(_len_oval0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_oval0; _i0++) {
            oval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          dtrace_aggregate_min(oval,nval,arg);
          free(oval);
        
        break;
    }
    // empty
    case 3:
    {
          long nval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long arg = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_oval0 = 1;
          long * oval = (long *) malloc(_len_oval0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_oval0; _i0++) {
            oval[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          dtrace_aggregate_min(oval,nval,arg);
          free(oval);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
