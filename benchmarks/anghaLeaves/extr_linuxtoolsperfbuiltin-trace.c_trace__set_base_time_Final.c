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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct trace {scalar_t__ base_time; int /*<<< orphan*/  full_time; } ;
struct perf_sample {scalar_t__ time; } ;
struct TYPE_2__ {int sample_type; } ;
struct perf_evsel {TYPE_1__ attr; } ;

/* Variables and functions */
 int PERF_SAMPLE_TIME ; 

__attribute__((used)) static void trace__set_base_time(struct trace *trace,
				 struct perf_evsel *evsel,
				 struct perf_sample *sample)
{
	/*
	 * BPF events were not setting PERF_SAMPLE_TIME, so be more robust
	 * and don't use sample->time unconditionally, we may end up having
	 * some other event in the future without PERF_SAMPLE_TIME for good
	 * reason, i.e. we may not be interested in its timestamps, just in
	 * it taking place, picking some piece of information when it
	 * appears in our event stream (vfs_getname comes to mind).
	 */
	if (trace->base_time == 0 && !trace->full_time &&
	    (evsel->attr.sample_type & PERF_SAMPLE_TIME))
		trace->base_time = sample->time;
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
          int _len_trace0 = 1;
          struct trace * trace = (struct trace *) malloc(_len_trace0*sizeof(struct trace));
          for(int _i0 = 0; _i0 < _len_trace0; _i0++) {
            trace[_i0].base_time = ((-2 * (next_i()%2)) + 1) * next_i();
        trace[_i0].full_time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_evsel0 = 1;
          struct perf_evsel * evsel = (struct perf_evsel *) malloc(_len_evsel0*sizeof(struct perf_evsel));
          for(int _i0 = 0; _i0 < _len_evsel0; _i0++) {
            evsel[_i0].attr.sample_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sample0 = 1;
          struct perf_sample * sample = (struct perf_sample *) malloc(_len_sample0*sizeof(struct perf_sample));
          for(int _i0 = 0; _i0 < _len_sample0; _i0++) {
            sample[_i0].time = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          trace__set_base_time(trace,evsel,sample);
          free(trace);
          free(evsel);
          free(sample);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
