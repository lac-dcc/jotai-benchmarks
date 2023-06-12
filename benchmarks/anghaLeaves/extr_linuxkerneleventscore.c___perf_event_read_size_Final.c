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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u64 ;
struct TYPE_2__ {int read_format; } ;
struct perf_event {int read_size; TYPE_1__ attr; } ;

/* Variables and functions */
 int PERF_FORMAT_GROUP ; 
 int PERF_FORMAT_ID ; 
 int PERF_FORMAT_TOTAL_TIME_ENABLED ; 
 int PERF_FORMAT_TOTAL_TIME_RUNNING ; 

__attribute__((used)) static void __perf_event_read_size(struct perf_event *event, int nr_siblings)
{
	int entry = sizeof(u64); /* value */
	int size = 0;
	int nr = 1;

	if (event->attr.read_format & PERF_FORMAT_TOTAL_TIME_ENABLED)
		size += sizeof(u64);

	if (event->attr.read_format & PERF_FORMAT_TOTAL_TIME_RUNNING)
		size += sizeof(u64);

	if (event->attr.read_format & PERF_FORMAT_ID)
		entry += sizeof(u64);

	if (event->attr.read_format & PERF_FORMAT_GROUP) {
		nr += nr_siblings;
		size += sizeof(u64);
	}

	size += entry * nr;
	event->read_size = size;
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
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 29
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 29
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 29
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          int nr_siblings = 100;
        
          int _len_event0 = 1;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
              event[_i0].read_size = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.read_format = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          __perf_event_read_size(event,nr_siblings);
          free(event);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 29
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 29
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 29
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          int nr_siblings = 255;
        
          int _len_event0 = 65025;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
              event[_i0].read_size = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.read_format = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          __perf_event_read_size(event,nr_siblings);
          free(event);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 29
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 29
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 29
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          int nr_siblings = 10;
        
          int _len_event0 = 100;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
              event[_i0].read_size = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.read_format = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          __perf_event_read_size(event,nr_siblings);
          free(event);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 36
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 29
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 29
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 29
          // ------------------------------- 
          // static_instructions_Os : 29
          // dynamic_instructions_Os : 29
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 29
          // ------------------------------- 

          int nr_siblings = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_event0 = 1;
          struct perf_event * event = (struct perf_event *) malloc(_len_event0*sizeof(struct perf_event));
          for(int _i0 = 0; _i0 < _len_event0; _i0++) {
              event[_i0].read_size = ((-2 * (next_i()%2)) + 1) * next_i();
          event[_i0].attr.read_format = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          __perf_event_read_size(event,nr_siblings);
          free(event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
