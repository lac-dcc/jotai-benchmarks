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
struct bfq_data {scalar_t__ budgets_assigned; int bfq_max_budget; } ;

/* Variables and functions */
 int bfq_default_max_budget ; 
 scalar_t__ bfq_stats_min_budgets ; 

__attribute__((used)) static int bfq_max_budget(struct bfq_data *bfqd)
{
	if (bfqd->budgets_assigned < bfq_stats_min_budgets)
		return bfq_default_max_budget;
	else
		return bfqd->bfq_max_budget;
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
          int _len_bfqd0 = 1;
          struct bfq_data * bfqd = (struct bfq_data *) malloc(_len_bfqd0*sizeof(struct bfq_data));
          for(int _i0 = 0; _i0 < _len_bfqd0; _i0++) {
            bfqd[_i0].budgets_assigned = ((-2 * (next_i()%2)) + 1) * next_i();
        bfqd[_i0].bfq_max_budget = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = bfq_max_budget(bfqd);
          printf("%d\n", benchRet); 
          free(bfqd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
