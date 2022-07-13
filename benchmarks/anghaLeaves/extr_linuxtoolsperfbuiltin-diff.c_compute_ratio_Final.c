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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int computed; double period_ratio; } ;
struct TYPE_3__ {double period; } ;
struct hist_entry {TYPE_2__ diff; TYPE_1__ stat; } ;

/* Variables and functions */

__attribute__((used)) static double compute_ratio(struct hist_entry *he, struct hist_entry *pair)
{
	double old_period = he->stat.period ?: 1;
	double new_period = pair->stat.period;

	pair->diff.computed = true;
	pair->diff.period_ratio = new_period / old_period;
	return pair->diff.period_ratio;
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
          int _len_he0 = 1;
          struct hist_entry * he = (struct hist_entry *) malloc(_len_he0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_he0; _i0++) {
            he[_i0].diff.computed = ((-2 * (next_i()%2)) + 1) * next_i();
        he[_i0].diff.period_ratio = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        he[_i0].stat.period = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_pair0 = 1;
          struct hist_entry * pair = (struct hist_entry *) malloc(_len_pair0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_pair0; _i0++) {
            pair[_i0].diff.computed = ((-2 * (next_i()%2)) + 1) * next_i();
        pair[_i0].diff.period_ratio = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        pair[_i0].stat.period = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          double benchRet = compute_ratio(he,pair);
          printf("%lf\n", benchRet); 
          free(he);
          free(pair);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_he0 = 65025;
          struct hist_entry * he = (struct hist_entry *) malloc(_len_he0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_he0; _i0++) {
            he[_i0].diff.computed = ((-2 * (next_i()%2)) + 1) * next_i();
        he[_i0].diff.period_ratio = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        he[_i0].stat.period = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_pair0 = 65025;
          struct hist_entry * pair = (struct hist_entry *) malloc(_len_pair0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_pair0; _i0++) {
            pair[_i0].diff.computed = ((-2 * (next_i()%2)) + 1) * next_i();
        pair[_i0].diff.period_ratio = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        pair[_i0].stat.period = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          double benchRet = compute_ratio(he,pair);
          printf("%lf\n", benchRet); 
          free(he);
          free(pair);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_he0 = 100;
          struct hist_entry * he = (struct hist_entry *) malloc(_len_he0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_he0; _i0++) {
            he[_i0].diff.computed = ((-2 * (next_i()%2)) + 1) * next_i();
        he[_i0].diff.period_ratio = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        he[_i0].stat.period = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_pair0 = 100;
          struct hist_entry * pair = (struct hist_entry *) malloc(_len_pair0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_pair0; _i0++) {
            pair[_i0].diff.computed = ((-2 * (next_i()%2)) + 1) * next_i();
        pair[_i0].diff.period_ratio = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        pair[_i0].stat.period = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          double benchRet = compute_ratio(he,pair);
          printf("%lf\n", benchRet); 
          free(he);
          free(pair);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
