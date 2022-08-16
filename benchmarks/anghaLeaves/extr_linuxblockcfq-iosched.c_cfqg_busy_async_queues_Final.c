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
struct cfq_group {TYPE_1__** service_trees; } ;
struct cfq_data {int dummy; } ;
struct TYPE_2__ {int count; } ;

/* Variables and functions */
 size_t ASYNC_WORKLOAD ; 
 size_t BE_WORKLOAD ; 
 size_t RT_WORKLOAD ; 

__attribute__((used)) static inline int cfqg_busy_async_queues(struct cfq_data *cfqd,
					struct cfq_group *cfqg)
{
	return cfqg->service_trees[RT_WORKLOAD][ASYNC_WORKLOAD].count +
		cfqg->service_trees[BE_WORKLOAD][ASYNC_WORKLOAD].count;
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
          int _len_cfqd0 = 1;
          struct cfq_data * cfqd = (struct cfq_data *) malloc(_len_cfqd0*sizeof(struct cfq_data));
          for(int _i0 = 0; _i0 < _len_cfqd0; _i0++) {
            cfqd[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cfqg0 = 1;
          struct cfq_group * cfqg = (struct cfq_group *) malloc(_len_cfqg0*sizeof(struct cfq_group));
          for(int _i0 = 0; _i0 < _len_cfqg0; _i0++) {
              int _len_cfqg__i0__service_trees0 = 1;
          cfqg[_i0].service_trees = (struct TYPE_2__ **) malloc(_len_cfqg__i0__service_trees0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_cfqg__i0__service_trees0; _j0++) {
            int _len_cfqg__i0__service_trees1 = 1;
            cfqg[_i0].service_trees[_j0] = (struct TYPE_2__ *) malloc(_len_cfqg__i0__service_trees1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_cfqg__i0__service_trees1; _j1++) {
              cfqg[_i0].service_trees[_j0]->count = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = cfqg_busy_async_queues(cfqd,cfqg);
          printf("%d\n", benchRet); 
          free(cfqd);
          for(int _aux = 0; _aux < _len_cfqg0; _aux++) {
          free(*(cfqg[_aux].service_trees));
        free(cfqg[_aux].service_trees);
          }
          free(cfqg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
