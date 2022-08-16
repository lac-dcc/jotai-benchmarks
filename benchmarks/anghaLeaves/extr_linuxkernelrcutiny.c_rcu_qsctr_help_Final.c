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
struct rcu_ctrlblk {scalar_t__ donetail; scalar_t__ curtail; } ;

/* Variables and functions */

__attribute__((used)) static int rcu_qsctr_help(struct rcu_ctrlblk *rcp)
{
	if (rcp->donetail != rcp->curtail) {
		rcp->donetail = rcp->curtail;
		return 1;
	}

	return 0;
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
          int _len_rcp0 = 1;
          struct rcu_ctrlblk * rcp = (struct rcu_ctrlblk *) malloc(_len_rcp0*sizeof(struct rcu_ctrlblk));
          for(int _i0 = 0; _i0 < _len_rcp0; _i0++) {
            rcp[_i0].donetail = ((-2 * (next_i()%2)) + 1) * next_i();
        rcp[_i0].curtail = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rcu_qsctr_help(rcp);
          printf("%d\n", benchRet); 
          free(rcp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
