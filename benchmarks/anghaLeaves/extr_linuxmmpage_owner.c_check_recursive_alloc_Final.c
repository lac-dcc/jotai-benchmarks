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
struct stack_trace {int nr_entries; unsigned long* entries; } ;

/* Variables and functions */

__attribute__((used)) static inline bool check_recursive_alloc(struct stack_trace *trace,
					unsigned long ip)
{
	int i;

	if (!trace->nr_entries)
		return false;

	for (i = 0; i < trace->nr_entries; i++) {
		if (trace->entries[i] == ip)
			return true;
	}

	return false;
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
          unsigned long ip = 100;
          int _len_trace0 = 1;
          struct stack_trace * trace = (struct stack_trace *) malloc(_len_trace0*sizeof(struct stack_trace));
          for(int _i0 = 0; _i0 < _len_trace0; _i0++) {
            trace[_i0].nr_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_trace__i0__entries0 = 1;
          trace[_i0].entries = (unsigned long *) malloc(_len_trace__i0__entries0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_trace__i0__entries0; _j0++) {
            trace[_i0].entries[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_recursive_alloc(trace,ip);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_trace0; _aux++) {
          free(trace[_aux].entries);
          }
          free(trace);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
