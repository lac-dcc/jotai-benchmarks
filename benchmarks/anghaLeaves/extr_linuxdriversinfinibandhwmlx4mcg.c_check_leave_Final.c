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
       0            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct mcast_group {TYPE_1__* func; } ;
struct TYPE_2__ {scalar_t__ state; int join_state; } ;

/* Variables and functions */
 int MAD_STATUS_REQ_INVALID ; 
 scalar_t__ MCAST_MEMBER ; 

__attribute__((used)) static int check_leave(struct mcast_group *group, int slave, u8 leave_mask)
{
	if (group->func[slave].state != MCAST_MEMBER)
		return MAD_STATUS_REQ_INVALID;

	/* make sure we're not deleting unset bits */
	if (~group->func[slave].join_state & leave_mask)
		return MAD_STATUS_REQ_INVALID;

	if (!leave_mask)
		return MAD_STATUS_REQ_INVALID;

	return 0;
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

    // big-arr-10x
    case 0:
    {
          int slave = 10;
          int leave_mask = 10;
          int _len_group0 = 100;
          struct mcast_group * group = (struct mcast_group *) malloc(_len_group0*sizeof(struct mcast_group));
          for(int _i0 = 0; _i0 < _len_group0; _i0++) {
              int _len_group__i0__func0 = 1;
          group[_i0].func = (struct TYPE_2__ *) malloc(_len_group__i0__func0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_group__i0__func0; _j0++) {
            group[_i0].func->state = ((-2 * (next_i()%2)) + 1) * next_i();
        group[_i0].func->join_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_leave(group,slave,leave_mask);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_group0; _aux++) {
          free(group[_aux].func);
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
