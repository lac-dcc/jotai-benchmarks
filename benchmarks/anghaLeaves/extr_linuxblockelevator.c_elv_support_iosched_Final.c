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
struct request_queue {TYPE_1__* tag_set; scalar_t__ mq_ops; } ;
struct TYPE_2__ {int flags; } ;

/* Variables and functions */
 int BLK_MQ_F_NO_SCHED ; 

__attribute__((used)) static inline bool elv_support_iosched(struct request_queue *q)
{
	if (q->mq_ops && q->tag_set && (q->tag_set->flags &
				BLK_MQ_F_NO_SCHED))
		return false;
	return true;
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
          int _len_q0 = 1;
          struct request_queue * q = (struct request_queue *) malloc(_len_q0*sizeof(struct request_queue));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
              int _len_q__i0__tag_set0 = 1;
          q[_i0].tag_set = (struct TYPE_2__ *) malloc(_len_q__i0__tag_set0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_q__i0__tag_set0; _j0++) {
            q[_i0].tag_set->flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        q[_i0].mq_ops = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = elv_support_iosched(q);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_q0; _aux++) {
          free(q[_aux].tag_set);
          }
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
