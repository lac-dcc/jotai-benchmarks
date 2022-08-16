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
struct sched_dl_entity {int /*<<< orphan*/  flags; int /*<<< orphan*/  dl_period; int /*<<< orphan*/  dl_deadline; int /*<<< orphan*/  dl_runtime; } ;
struct task_struct {int /*<<< orphan*/  rt_priority; struct sched_dl_entity dl; } ;
struct sched_attr {int /*<<< orphan*/  sched_flags; int /*<<< orphan*/  sched_period; int /*<<< orphan*/  sched_deadline; int /*<<< orphan*/  sched_runtime; int /*<<< orphan*/  sched_priority; } ;

/* Variables and functions */

void __getparam_dl(struct task_struct *p, struct sched_attr *attr)
{
	struct sched_dl_entity *dl_se = &p->dl;

	attr->sched_priority = p->rt_priority;
	attr->sched_runtime = dl_se->dl_runtime;
	attr->sched_deadline = dl_se->dl_deadline;
	attr->sched_period = dl_se->dl_period;
	attr->sched_flags = dl_se->flags;
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
          int _len_p0 = 1;
          struct task_struct * p = (struct task_struct *) malloc(_len_p0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0].rt_priority = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dl.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dl.dl_period = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dl.dl_deadline = ((-2 * (next_i()%2)) + 1) * next_i();
        p[_i0].dl.dl_runtime = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_attr0 = 1;
          struct sched_attr * attr = (struct sched_attr *) malloc(_len_attr0*sizeof(struct sched_attr));
          for(int _i0 = 0; _i0 < _len_attr0; _i0++) {
            attr[_i0].sched_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].sched_period = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].sched_deadline = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].sched_runtime = ((-2 * (next_i()%2)) + 1) * next_i();
        attr[_i0].sched_priority = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __getparam_dl(p,attr);
          free(p);
          free(attr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
