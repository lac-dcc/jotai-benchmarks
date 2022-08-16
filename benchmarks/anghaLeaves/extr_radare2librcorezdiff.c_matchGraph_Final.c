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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {TYPE_1__* graph; } ;
struct TYPE_5__ {scalar_t__ cc; scalar_t__ nbbs; scalar_t__ ebbs; scalar_t__ edges; scalar_t__ bbsum; } ;
typedef  TYPE_2__ RSignItem ;

/* Variables and functions */

__attribute__((used)) static bool matchGraph(RSignItem *a, RSignItem *b) {
	if (a->graph && b->graph) {
		if (a->graph->cc != b->graph->cc) {
			return false;
		}
		if (a->graph->nbbs != b->graph->nbbs) {
			return false;
		}
		if (a->graph->ebbs != b->graph->ebbs) {
			return false;
		}
		if (a->graph->edges != b->graph->edges) {
			return false;
		}
		if (a->graph->bbsum!= b->graph->bbsum) {
			return false;
		}
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
          int _len_a0 = 1;
          struct TYPE_6__ * a = (struct TYPE_6__ *) malloc(_len_a0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
              int _len_a__i0__graph0 = 1;
          a[_i0].graph = (struct TYPE_5__ *) malloc(_len_a__i0__graph0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_a__i0__graph0; _j0++) {
            a[_i0].graph->cc = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].graph->nbbs = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].graph->ebbs = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].graph->edges = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].graph->bbsum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_b0 = 1;
          struct TYPE_6__ * b = (struct TYPE_6__ *) malloc(_len_b0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
              int _len_b__i0__graph0 = 1;
          b[_i0].graph = (struct TYPE_5__ *) malloc(_len_b__i0__graph0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_b__i0__graph0; _j0++) {
            b[_i0].graph->cc = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].graph->nbbs = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].graph->ebbs = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].graph->edges = ((-2 * (next_i()%2)) + 1) * next_i();
        b[_i0].graph->bbsum = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = matchGraph(a,b);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_a0; _aux++) {
          free(a[_aux].graph);
          }
          free(a);
          for(int _aux = 0; _aux < _len_b0; _aux++) {
          free(b[_aux].graph);
          }
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
