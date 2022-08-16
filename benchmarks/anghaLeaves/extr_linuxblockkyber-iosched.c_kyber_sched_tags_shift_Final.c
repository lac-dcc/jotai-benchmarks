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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct kyber_queue_data {TYPE_5__* q; } ;
struct TYPE_10__ {TYPE_4__** queue_hw_ctx; } ;
struct TYPE_9__ {TYPE_3__* sched_tags; } ;
struct TYPE_6__ {unsigned int shift; } ;
struct TYPE_7__ {TYPE_1__ sb; } ;
struct TYPE_8__ {TYPE_2__ bitmap_tags; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int kyber_sched_tags_shift(struct kyber_queue_data *kqd)
{
	/*
	 * All of the hardware queues have the same depth, so we can just grab
	 * the shift of the first one.
	 */
	return kqd->q->queue_hw_ctx[0]->sched_tags->bitmap_tags.sb.shift;
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
          int _len_kqd0 = 1;
          struct kyber_queue_data * kqd = (struct kyber_queue_data *) malloc(_len_kqd0*sizeof(struct kyber_queue_data));
          for(int _i0 = 0; _i0 < _len_kqd0; _i0++) {
              int _len_kqd__i0__q0 = 1;
          kqd[_i0].q = (struct TYPE_10__ *) malloc(_len_kqd__i0__q0*sizeof(struct TYPE_10__));
          for(int _j0 = 0; _j0 < _len_kqd__i0__q0; _j0++) {
              int _len_kqd__i0__q_queue_hw_ctx0 = 1;
          kqd[_i0].q->queue_hw_ctx = (struct TYPE_9__ **) malloc(_len_kqd__i0__q_queue_hw_ctx0*sizeof(struct TYPE_9__ *));
          for(int _j0 = 0; _j0 < _len_kqd__i0__q_queue_hw_ctx0; _j0++) {
            int _len_kqd__i0__q_queue_hw_ctx1 = 1;
            kqd[_i0].q->queue_hw_ctx[_j0] = (struct TYPE_9__ *) malloc(_len_kqd__i0__q_queue_hw_ctx1*sizeof(struct TYPE_9__));
            for(int _j1 = 0; _j1 < _len_kqd__i0__q_queue_hw_ctx1; _j1++) {
                int _len_kqd__i0__q_queue_hw_ctx__j0__sched_tags0 = 1;
          kqd[_i0].q->queue_hw_ctx[_j0]->sched_tags = (struct TYPE_8__ *) malloc(_len_kqd__i0__q_queue_hw_ctx__j0__sched_tags0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_kqd__i0__q_queue_hw_ctx__j0__sched_tags0; _j0++) {
            kqd[_i0].q->queue_hw_ctx[_j0]->sched_tags->bitmap_tags.sb.shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          }
          unsigned int benchRet = kyber_sched_tags_shift(kqd);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_kqd0; _aux++) {
          free(kqd[_aux].q);
          }
          free(kqd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
