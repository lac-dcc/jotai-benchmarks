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
struct ocfs2_slot_info {int si_num_slots; TYPE_1__* si_slots; } ;
struct TYPE_2__ {int /*<<< orphan*/  sl_valid; } ;

/* Variables and functions */
 int ENOSPC ; 

__attribute__((used)) static int __ocfs2_find_empty_slot(struct ocfs2_slot_info *si,
				   int preferred)
{
	int i, ret = -ENOSPC;

	if ((preferred >= 0) && (preferred < si->si_num_slots)) {
		if (!si->si_slots[preferred].sl_valid) {
			ret = preferred;
			goto out;
		}
	}

	for(i = 0; i < si->si_num_slots; i++) {
		if (!si->si_slots[i].sl_valid) {
			ret = i;
			break;
		}
	}
out:
	return ret;
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
          int preferred = 100;
          int _len_si0 = 1;
          struct ocfs2_slot_info * si = (struct ocfs2_slot_info *) malloc(_len_si0*sizeof(struct ocfs2_slot_info));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0].si_num_slots = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_si__i0__si_slots0 = 1;
          si[_i0].si_slots = (struct TYPE_2__ *) malloc(_len_si__i0__si_slots0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_si__i0__si_slots0; _j0++) {
            si[_i0].si_slots->sl_valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = __ocfs2_find_empty_slot(si,preferred);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_si0; _aux++) {
          free(si[_aux].si_slots);
          }
          free(si);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
