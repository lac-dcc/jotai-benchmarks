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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int /*<<< orphan*/  qidlestart; int /*<<< orphan*/  qavg; } ;
struct gred_sched_data {TYPE_2__ vars; } ;
struct TYPE_3__ {int /*<<< orphan*/  qidlestart; int /*<<< orphan*/  qavg; } ;
struct gred_sched {TYPE_1__ wred_set; } ;

/* Variables and functions */

__attribute__((used)) static inline void gred_store_wred_set(struct gred_sched *table,
				       struct gred_sched_data *q)
{
	table->wred_set.qavg = q->vars.qavg;
	table->wred_set.qidlestart = q->vars.qidlestart;
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

    // big-arr
    case 0:
    {
          int _len_table0 = 1;
          struct gred_sched * table = (struct gred_sched *) malloc(_len_table0*sizeof(struct gred_sched));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table->wred_set.qidlestart = ((-2 * (next_i()%2)) + 1) * next_i();
        table->wred_set.qavg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_q0 = 1;
          struct gred_sched_data * q = (struct gred_sched_data *) malloc(_len_q0*sizeof(struct gred_sched_data));
          for(int _i0 = 0; _i0 < _len_q0; _i0++) {
            q->vars.qidlestart = ((-2 * (next_i()%2)) + 1) * next_i();
        q->vars.qavg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          gred_store_wred_set(table,q);
          free(table);
          free(q);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
