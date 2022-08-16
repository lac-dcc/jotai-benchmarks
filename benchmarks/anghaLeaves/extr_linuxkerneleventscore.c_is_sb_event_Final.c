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
struct perf_event_attr {scalar_t__ context_switch; scalar_t__ task; scalar_t__ comm_exec; scalar_t__ comm; scalar_t__ mmap2; scalar_t__ mmap_data; scalar_t__ mmap; } ;
struct perf_event {int attach_state; scalar_t__ parent; struct perf_event_attr attr; } ;

/* Variables and functions */
 int PERF_ATTACH_TASK ; 

__attribute__((used)) static bool is_sb_event(struct perf_event *event)
{
	struct perf_event_attr *attr = &event->attr;

	if (event->parent)
		return false;

	if (event->attach_state & PERF_ATTACH_TASK)
		return false;

	if (attr->mmap || attr->mmap_data || attr->mmap2 ||
	    attr->comm || attr->comm_exec ||
	    attr->task ||
	    attr->context_switch)
		return true;
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
          int _len_event0 = 1;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
            event[_i0].attach_state = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].parent = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.context_switch = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.task = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.comm_exec = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.comm = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.mmap2 = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.mmap_data = ((-2 * (next_i()%2)) + 1) * next_i();
        event[_i0].attr.mmap = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_sb_event(event);
          printf("%d\n", benchRet); 
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
