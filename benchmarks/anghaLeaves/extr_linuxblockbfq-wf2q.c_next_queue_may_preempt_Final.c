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
struct bfq_sched_data {scalar_t__ next_in_service; scalar_t__ in_service_entity; } ;
struct bfq_data {TYPE_1__* root_group; } ;
struct TYPE_2__ {struct bfq_sched_data sched_data; } ;

/* Variables and functions */

bool next_queue_may_preempt(struct bfq_data *bfqd)
{
	struct bfq_sched_data *sd = &bfqd->root_group->sched_data;

	return sd->next_in_service != sd->in_service_entity;
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
              int _len_bfqd__i0__root_group0 = 1;
          bfqd[_i0].root_group = (struct TYPE_2__ *) malloc(_len_bfqd__i0__root_group0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_bfqd__i0__root_group0; _j0++) {
            bfqd[_i0].root_group->sched_data.next_in_service = ((-2 * (next_i()%2)) + 1) * next_i();
        bfqd[_i0].root_group->sched_data.in_service_entity = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = next_queue_may_preempt(bfqd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bfqd0; _aux++) {
          free(bfqd[_aux].root_group);
          }
          free(bfqd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
