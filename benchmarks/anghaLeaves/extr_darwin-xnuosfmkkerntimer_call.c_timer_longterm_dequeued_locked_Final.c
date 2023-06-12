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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/ * call; } ;
struct TYPE_5__ {TYPE_1__ threshold; int /*<<< orphan*/  dequeues; } ;
typedef  TYPE_2__ timer_longterm_t ;
typedef  int /*<<< orphan*/ * timer_call_t ;

/* Variables and functions */
 TYPE_2__ timer_longterm ; 

void
timer_longterm_dequeued_locked(timer_call_t call)
{
	timer_longterm_t	*tlp = &timer_longterm;

	tlp->dequeues++;
	if (call == tlp->threshold.call)
		tlp->threshold.call = NULL;
}

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
          int _len_call0 = 65025;
          int * call = (int *) malloc(_len_call0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
            call[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          timer_longterm_dequeued_locked(call);
          free(call);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_call0 = 100;
          int * call = (int *) malloc(_len_call0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
            call[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          timer_longterm_dequeued_locked(call);
          free(call);
        
        break;
    }
    // empty
    case 2:
    {
          int _len_call0 = 1;
          int * call = (int *) malloc(_len_call0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_call0; _i0++) {
            call[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          timer_longterm_dequeued_locked(call);
          free(call);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
