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
typedef  struct TYPE_5__   TYPE_3__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int current_import_jobs_time; int prev_import_jobs_time; scalar_t__ current_import_jobs_count; scalar_t__ prev_import_jobs_count; } ;
typedef  TYPE_1__ queue ;
struct TYPE_5__ {int mstime; } ;

/* Variables and functions */
 TYPE_3__ server ; 

void updateQueueImportRate(queue *q) {
    /* If the current second no longer matches the current counter
     * timestamp, copy the old timestamp/counter into 'prev', and
     * start a new counter with an updated time. */
    if (server.mstime - q->current_import_jobs_time > 1000) {
        q->prev_import_jobs_time = q->current_import_jobs_time;
        q->prev_import_jobs_count = q->current_import_jobs_count;
        q->current_import_jobs_time = server.mstime;
        q->current_import_jobs_count = 0;
    }
    /* Anyway, update the current counter. */
    q->current_import_jobs_count++;
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
          struct TYPE_4__ * q = (struct TYPE_4__ *) malloc(_len_q0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q[_i0].current_import_jobs_time = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].prev_import_jobs_time = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].current_import_jobs_count = ((-2 * (next_i()%2)) + 1) * next_i();
        q[_i0].prev_import_jobs_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          updateQueueImportRate(q);
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
