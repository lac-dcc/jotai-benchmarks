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
struct vmci_queue {TYPE_1__* kernel_if; } ;
struct TYPE_2__ {int /*<<< orphan*/ * mutex; scalar_t__ host; } ;

/* Variables and functions */

__attribute__((used)) static void qp_cleanup_queue_mutex(struct vmci_queue *produce_q,
				   struct vmci_queue *consume_q)
{
	if (produce_q->kernel_if->host) {
		produce_q->kernel_if->mutex = NULL;
		consume_q->kernel_if->mutex = NULL;
	}
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
          int _len_produce_q0 = 1;
          struct vmci_queue * produce_q = (struct vmci_queue *) malloc(_len_produce_q0*sizeof(struct vmci_queue));
          for(int _i0 = 0; _i0 < _len_produce_q0; _i0++) {
              int _len_produce_q__i0__kernel_if0 = 1;
          produce_q[_i0].kernel_if = (struct TYPE_2__ *) malloc(_len_produce_q__i0__kernel_if0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_produce_q__i0__kernel_if0; _j0++) {
              int _len_produce_q__i0__kernel_if_mutex0 = 1;
          produce_q[_i0].kernel_if->mutex = (int *) malloc(_len_produce_q__i0__kernel_if_mutex0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_produce_q__i0__kernel_if_mutex0; _j0++) {
            produce_q[_i0].kernel_if->mutex[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        produce_q[_i0].kernel_if->host = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_consume_q0 = 1;
          struct vmci_queue * consume_q = (struct vmci_queue *) malloc(_len_consume_q0*sizeof(struct vmci_queue));
          for(int _i0 = 0; _i0 < _len_consume_q0; _i0++) {
              int _len_consume_q__i0__kernel_if0 = 1;
          consume_q[_i0].kernel_if = (struct TYPE_2__ *) malloc(_len_consume_q__i0__kernel_if0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_consume_q__i0__kernel_if0; _j0++) {
              int _len_consume_q__i0__kernel_if_mutex0 = 1;
          consume_q[_i0].kernel_if->mutex = (int *) malloc(_len_consume_q__i0__kernel_if_mutex0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_consume_q__i0__kernel_if_mutex0; _j0++) {
            consume_q[_i0].kernel_if->mutex[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        consume_q[_i0].kernel_if->host = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qp_cleanup_queue_mutex(produce_q,consume_q);
          for(int _aux = 0; _aux < _len_produce_q0; _aux++) {
          free(produce_q[_aux].kernel_if);
          }
          free(produce_q);
          for(int _aux = 0; _aux < _len_consume_q0; _aux++) {
          free(consume_q[_aux].kernel_if);
          }
          free(consume_q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
