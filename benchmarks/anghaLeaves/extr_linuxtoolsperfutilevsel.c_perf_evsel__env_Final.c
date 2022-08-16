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
struct perf_evsel {TYPE_1__* evlist; } ;
struct perf_env {int dummy; } ;
struct TYPE_2__ {struct perf_env* env; } ;

/* Variables and functions */

struct perf_env *perf_evsel__env(struct perf_evsel *evsel)
{
	if (evsel && evsel->evlist)
		return evsel->evlist->env;
	return NULL;
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
          int _len_evsel0 = 1;
          struct perf_evsel * evsel = (struct perf_evsel *) malloc(_len_evsel0*sizeof(struct perf_evsel));
          for(int _i0 = 0; _i0 < _len_evsel0; _i0++) {
              int _len_evsel__i0__evlist0 = 1;
          evsel[_i0].evlist = (struct TYPE_2__ *) malloc(_len_evsel__i0__evlist0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_evsel__i0__evlist0; _j0++) {
              int _len_evsel__i0__evlist_env0 = 1;
          evsel[_i0].evlist->env = (struct perf_env *) malloc(_len_evsel__i0__evlist_env0*sizeof(struct perf_env));
          for(int _j0 = 0; _j0 < _len_evsel__i0__evlist_env0; _j0++) {
            evsel[_i0].evlist->env->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct perf_env * benchRet = perf_evsel__env(evsel);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_evsel0; _aux++) {
          free(evsel[_aux].evlist);
          }
          free(evsel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
