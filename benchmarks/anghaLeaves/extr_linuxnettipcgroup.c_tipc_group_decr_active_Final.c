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
struct tipc_member {scalar_t__ state; } ;
struct tipc_group {int /*<<< orphan*/  active_cnt; } ;

/* Variables and functions */
 scalar_t__ MBR_ACTIVE ; 
 scalar_t__ MBR_RECLAIMING ; 
 scalar_t__ MBR_REMITTED ; 

__attribute__((used)) static void tipc_group_decr_active(struct tipc_group *grp,
				   struct tipc_member *m)
{
	if (m->state == MBR_ACTIVE || m->state == MBR_RECLAIMING ||
	    m->state == MBR_REMITTED)
		grp->active_cnt--;
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
          int _len_grp0 = 1;
          struct tipc_group * grp = (struct tipc_group *) malloc(_len_grp0*sizeof(struct tipc_group));
          for(int _i0 = 0; _i0 < _len_grp0; _i0++) {
            grp[_i0].active_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_m0 = 1;
          struct tipc_member * m = (struct tipc_member *) malloc(_len_m0*sizeof(struct tipc_member));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0].state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tipc_group_decr_active(grp,m);
          free(grp);
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
