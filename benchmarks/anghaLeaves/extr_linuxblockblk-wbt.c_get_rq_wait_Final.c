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
struct rq_wb {struct rq_wait* rq_wait; } ;
struct rq_wait {int dummy; } ;
typedef  enum wbt_flags { ____Placeholder_wbt_flags } wbt_flags ;

/* Variables and functions */
 int WBT_DISCARD ; 
 int WBT_KSWAPD ; 
 size_t WBT_RWQ_BG ; 
 size_t WBT_RWQ_DISCARD ; 
 size_t WBT_RWQ_KSWAPD ; 

__attribute__((used)) static inline struct rq_wait *get_rq_wait(struct rq_wb *rwb,
					  enum wbt_flags wb_acct)
{
	if (wb_acct & WBT_KSWAPD)
		return &rwb->rq_wait[WBT_RWQ_KSWAPD];
	else if (wb_acct & WBT_DISCARD)
		return &rwb->rq_wait[WBT_RWQ_DISCARD];

	return &rwb->rq_wait[WBT_RWQ_BG];
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
          enum wbt_flags wb_acct = 0;
          int _len_rwb0 = 1;
          struct rq_wb * rwb = (struct rq_wb *) malloc(_len_rwb0*sizeof(struct rq_wb));
          for(int _i0 = 0; _i0 < _len_rwb0; _i0++) {
              int _len_rwb__i0__rq_wait0 = 1;
          rwb[_i0].rq_wait = (struct rq_wait *) malloc(_len_rwb__i0__rq_wait0*sizeof(struct rq_wait));
          for(int _j0 = 0; _j0 < _len_rwb__i0__rq_wait0; _j0++) {
            rwb[_i0].rq_wait->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct rq_wait * benchRet = get_rq_wait(rwb,wb_acct);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_rwb0; _aux++) {
          free(rwb[_aux].rq_wait);
          }
          free(rwb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
