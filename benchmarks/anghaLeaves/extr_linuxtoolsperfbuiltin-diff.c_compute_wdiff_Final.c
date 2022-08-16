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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u64 ;
struct TYPE_4__ {int computed; int wdiff; } ;
struct TYPE_3__ {int period; } ;
struct hist_entry {TYPE_2__ diff; TYPE_1__ stat; } ;
typedef  int s64 ;

/* Variables and functions */
 int compute_wdiff_w1 ; 
 int compute_wdiff_w2 ; 

__attribute__((used)) static s64 compute_wdiff(struct hist_entry *he, struct hist_entry *pair)
{
	u64 old_period = he->stat.period;
	u64 new_period = pair->stat.period;

	pair->diff.computed = true;
	pair->diff.wdiff = new_period * compute_wdiff_w2 -
			   old_period * compute_wdiff_w1;

	return pair->diff.wdiff;
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
        he[_i0].diff.wdiff = ((-2 * (next_i()%2)) + 1) * next_i();
        he[_i0].stat.period = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pair0 = 1;
          struct hist_entry * pair = (struct hist_entry *) malloc(_len_pair0*sizeof(struct hist_entry));
          for(int _i0 = 0; _i0 < _len_pair0; _i0++) {
            pair[_i0].diff.computed = ((-2 * (next_i()%2)) + 1) * next_i();
        pair[_i0].diff.wdiff = ((-2 * (next_i()%2)) + 1) * next_i();
        pair[_i0].stat.period = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = compute_wdiff(he,pair);
          printf("%d\n", benchRet); 
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
