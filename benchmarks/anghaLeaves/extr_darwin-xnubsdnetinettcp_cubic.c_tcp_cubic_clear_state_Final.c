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
struct tcpcb {TYPE_1__* t_ccstate; } ;
struct TYPE_2__ {scalar_t__ cub_target_win; scalar_t__ cub_epoch_period; scalar_t__ cub_tcp_bytes_acked; scalar_t__ cub_tcp_win; scalar_t__ cub_origin_point; scalar_t__ cub_epoch_start; scalar_t__ cub_last_max; } ;

/* Variables and functions */

__attribute__((used)) static inline void tcp_cubic_clear_state(struct tcpcb *tp)
{
	tp->t_ccstate->cub_last_max = 0;
	tp->t_ccstate->cub_epoch_start = 0;
	tp->t_ccstate->cub_origin_point = 0;
	tp->t_ccstate->cub_tcp_win = 0;
	tp->t_ccstate->cub_tcp_bytes_acked = 0;
	tp->t_ccstate->cub_epoch_period = 0;
	tp->t_ccstate->cub_target_win = 0;
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
          int _len_tp0 = 1;
          struct tcpcb * tp = (struct tcpcb *) malloc(_len_tp0*sizeof(struct tcpcb));
          for(int _i0 = 0; _i0 < _len_tp0; _i0++) {
              int _len_tp__i0__t_ccstate0 = 1;
          tp[_i0].t_ccstate = (struct TYPE_2__ *) malloc(_len_tp__i0__t_ccstate0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_tp__i0__t_ccstate0; _j0++) {
            tp[_i0].t_ccstate->cub_target_win = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_ccstate->cub_epoch_period = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_ccstate->cub_tcp_bytes_acked = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_ccstate->cub_tcp_win = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_ccstate->cub_origin_point = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_ccstate->cub_epoch_start = ((-2 * (next_i()%2)) + 1) * next_i();
        tp[_i0].t_ccstate->cub_last_max = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          tcp_cubic_clear_state(tp);
          for(int _aux = 0; _aux < _len_tp0; _aux++) {
          free(tp[_aux].t_ccstate);
          }
          free(tp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
