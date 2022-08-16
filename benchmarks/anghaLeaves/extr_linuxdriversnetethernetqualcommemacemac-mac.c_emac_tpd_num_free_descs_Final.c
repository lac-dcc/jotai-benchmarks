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
typedef  scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ produce_idx; scalar_t__ consume_idx; scalar_t__ count; } ;
struct emac_tx_queue {TYPE_1__ tpd; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int emac_tpd_num_free_descs(struct emac_tx_queue *tx_q)
{
	u32 produce_idx = tx_q->tpd.produce_idx;
	u32 consume_idx = tx_q->tpd.consume_idx;

	return (consume_idx > produce_idx) ?
		(consume_idx - produce_idx - 1) :
		(tx_q->tpd.count + consume_idx - produce_idx - 1);
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
          int _len_tx_q0 = 1;
          struct emac_tx_queue * tx_q = (struct emac_tx_queue *) malloc(_len_tx_q0*sizeof(struct emac_tx_queue));
          for(int _i0 = 0; _i0 < _len_tx_q0; _i0++) {
            tx_q[_i0].tpd.produce_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        tx_q[_i0].tpd.consume_idx = ((-2 * (next_i()%2)) + 1) * next_i();
        tx_q[_i0].tpd.count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = emac_tpd_num_free_descs(tx_q);
          printf("%u\n", benchRet); 
          free(tx_q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
