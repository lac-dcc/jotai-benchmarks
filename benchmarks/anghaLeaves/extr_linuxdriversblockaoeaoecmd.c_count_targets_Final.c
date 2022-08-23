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
struct aoedev {int ntargets; TYPE_1__** targets; } ;
struct TYPE_2__ {scalar_t__ taint; } ;

/* Variables and functions */

__attribute__((used)) static int
count_targets(struct aoedev *d, int *untainted)
{
	int i, good;

	for (i = good = 0; i < d->ntargets && d->targets[i]; ++i)
		if (d->targets[i]->taint == 0)
			good++;

	if (untainted)
		*untainted = good;
	return i;
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
          int _len_d0 = 1;
          struct aoedev * d = (struct aoedev *) malloc(_len_d0*sizeof(struct aoedev));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0].ntargets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_d__i0__targets0 = 1;
          d[_i0].targets = (struct TYPE_2__ **) malloc(_len_d__i0__targets0*sizeof(struct TYPE_2__ *));
          for(int _j0 = 0; _j0 < _len_d__i0__targets0; _j0++) {
            int _len_d__i0__targets1 = 1;
            d[_i0].targets[_j0] = (struct TYPE_2__ *) malloc(_len_d__i0__targets1*sizeof(struct TYPE_2__));
            for(int _j1 = 0; _j1 < _len_d__i0__targets1; _j1++) {
              d[_i0].targets[_j0]->taint = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_untainted0 = 1;
          int * untainted = (int *) malloc(_len_untainted0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_untainted0; _i0++) {
            untainted[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = count_targets(d,untainted);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_d0; _aux++) {
          free(*(d[_aux].targets));
        free(d[_aux].targets);
          }
          free(d);
          free(untainted);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}