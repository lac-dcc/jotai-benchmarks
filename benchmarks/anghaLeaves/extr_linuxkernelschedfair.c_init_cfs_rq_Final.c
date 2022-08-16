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
typedef  scalar_t__ u64 ;
struct cfs_rq {scalar_t__ min_vruntime; scalar_t__ min_vruntime_copy; int /*<<< orphan*/  tasks_timeline; } ;

/* Variables and functions */
 int /*<<< orphan*/  RB_ROOT_CACHED ; 

void init_cfs_rq(struct cfs_rq *cfs_rq)
{
	cfs_rq->tasks_timeline = RB_ROOT_CACHED;
	cfs_rq->min_vruntime = (u64)(-(1LL << 20));
#ifndef CONFIG_64BIT
	cfs_rq->min_vruntime_copy = cfs_rq->min_vruntime;
#endif
#ifdef CONFIG_SMP
	raw_spin_lock_init(&cfs_rq->removed.lock);
#endif
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
          int _len_cfs_rq0 = 1;
          struct cfs_rq * cfs_rq = (struct cfs_rq *) malloc(_len_cfs_rq0*sizeof(struct cfs_rq));
          for(int _i0 = 0; _i0 < _len_cfs_rq0; _i0++) {
            cfs_rq[_i0].min_vruntime = ((-2 * (next_i()%2)) + 1) * next_i();
        cfs_rq[_i0].min_vruntime_copy = ((-2 * (next_i()%2)) + 1) * next_i();
        cfs_rq[_i0].tasks_timeline = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_cfs_rq(cfs_rq);
          free(cfs_rq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
