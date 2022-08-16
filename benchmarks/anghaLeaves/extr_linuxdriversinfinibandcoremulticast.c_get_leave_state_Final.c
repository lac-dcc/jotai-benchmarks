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
typedef  int u8 ;
struct TYPE_2__ {int join_state; } ;
struct mcast_group {TYPE_1__ rec; int /*<<< orphan*/ * members; } ;

/* Variables and functions */
 int NUM_JOIN_MEMBERSHIP_TYPES ; 

__attribute__((used)) static u8 get_leave_state(struct mcast_group *group)
{
	u8 leave_state = 0;
	int i;

	for (i = 0; i < NUM_JOIN_MEMBERSHIP_TYPES; i++)
		if (!group->members[i])
			leave_state |= (0x1 << i);

	return leave_state & group->rec.join_state;
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
          int _len_group0 = 1;
          struct mcast_group * group = (struct mcast_group *) malloc(_len_group0*sizeof(struct mcast_group));
          for(int _i0 = 0; _i0 < _len_group0; _i0++) {
            group[_i0].rec.join_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_group__i0__members0 = 1;
          group[_i0].members = (int *) malloc(_len_group__i0__members0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_group__i0__members0; _j0++) {
            group[_i0].members[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = get_leave_state(group);
          printf("%d\n", benchRet); 
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
