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
struct tracer {scalar_t__ allow_instances; } ;
struct trace_array {int flags; } ;

/* Variables and functions */
 int TRACE_ARRAY_FL_GLOBAL ; 

__attribute__((used)) static bool
trace_ok_for_array(struct tracer *t, struct trace_array *tr)
{
	return (tr->flags & TRACE_ARRAY_FL_GLOBAL) || t->allow_instances;
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
          int _len_t0 = 1;
          struct tracer * t = (struct tracer *) malloc(_len_t0*sizeof(struct tracer));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].allow_instances = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tr0 = 1;
          struct trace_array * tr = (struct trace_array *) malloc(_len_tr0*sizeof(struct trace_array));
          for(int _i0 = 0; _i0 < _len_tr0; _i0++) {
            tr[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = trace_ok_for_array(t,tr);
          printf("%d\n", benchRet); 
          free(t);
          free(tr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
