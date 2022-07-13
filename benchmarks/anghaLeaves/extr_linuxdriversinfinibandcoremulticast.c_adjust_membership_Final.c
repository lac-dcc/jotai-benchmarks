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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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

/* Type definitions */
typedef  int u8 ;
struct mcast_group {int* members; } ;

/* Variables and functions */
 int NUM_JOIN_MEMBERSHIP_TYPES ; 

__attribute__((used)) static void adjust_membership(struct mcast_group *group, u8 join_state, int inc)
{
	int i;

	for (i = 0; i < NUM_JOIN_MEMBERSHIP_TYPES; i++, join_state >>= 1)
		if (join_state & 0x1)
			group->members[i] += inc;
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
          int join_state = 100;
          int inc = 100;
          int _len_group0 = 1;
          struct mcast_group * group = (struct mcast_group *) malloc(_len_group0*sizeof(struct mcast_group));
          for(int _i0 = 0; _i0 < _len_group0; _i0++) {
              int _len_group__i0__members0 = 1;
          group[_i0].members = (int *) malloc(_len_group__i0__members0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_group__i0__members0; _j0++) {
            group[_i0].members[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          adjust_membership(group,join_state,inc);
          for(int _aux = 0; _aux < _len_group0; _aux++) {
          free(group[_aux].members);
          }
          free(group);
        
        break;
    }
    // big-arr
    case 1:
    {
          int join_state = 255;
          int inc = 255;
          int _len_group0 = 65025;
          struct mcast_group * group = (struct mcast_group *) malloc(_len_group0*sizeof(struct mcast_group));
          for(int _i0 = 0; _i0 < _len_group0; _i0++) {
              int _len_group__i0__members0 = 1;
          group[_i0].members = (int *) malloc(_len_group__i0__members0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_group__i0__members0; _j0++) {
            group[_i0].members[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          adjust_membership(group,join_state,inc);
          for(int _aux = 0; _aux < _len_group0; _aux++) {
          free(group[_aux].members);
          }
          free(group);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int join_state = 10;
          int inc = 10;
          int _len_group0 = 100;
          struct mcast_group * group = (struct mcast_group *) malloc(_len_group0*sizeof(struct mcast_group));
          for(int _i0 = 0; _i0 < _len_group0; _i0++) {
              int _len_group__i0__members0 = 1;
          group[_i0].members = (int *) malloc(_len_group__i0__members0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_group__i0__members0; _j0++) {
            group[_i0].members[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          adjust_membership(group,join_state,inc);
          for(int _aux = 0; _aux < _len_group0; _aux++) {
          free(group[_aux].members);
          }
          free(group);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
