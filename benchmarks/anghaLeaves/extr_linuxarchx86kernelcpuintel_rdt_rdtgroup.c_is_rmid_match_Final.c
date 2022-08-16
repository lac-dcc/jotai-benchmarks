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
struct task_struct {scalar_t__ rmid; } ;
struct TYPE_2__ {scalar_t__ rmid; } ;
struct rdtgroup {scalar_t__ type; TYPE_1__ mon; } ;

/* Variables and functions */
 scalar_t__ RDTMON_GROUP ; 
 scalar_t__ rdt_mon_capable ; 

__attribute__((used)) static bool is_rmid_match(struct task_struct *t, struct rdtgroup *r)
{
	return (rdt_mon_capable &&
		(r->type == RDTMON_GROUP) && (t->rmid == r->mon.rmid));
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
          int _len_t0 = 1;
          struct task_struct * t = (struct task_struct *) malloc(_len_t0*sizeof(struct task_struct));
          for(int _i0 = 0; _i0 < _len_t0; _i0++) {
            t[_i0].rmid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r0 = 1;
          struct rdtgroup * r = (struct rdtgroup *) malloc(_len_r0*sizeof(struct rdtgroup));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
        r[_i0].mon.rmid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = is_rmid_match(t,r);
          printf("%d\n", benchRet); 
          free(t);
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
