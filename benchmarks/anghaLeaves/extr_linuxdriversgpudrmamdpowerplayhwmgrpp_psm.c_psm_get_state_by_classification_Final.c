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
struct TYPE_2__ {int flags; } ;
struct pp_power_state {unsigned long id; TYPE_1__ classification; } ;
struct pp_hwmgr {int num_ps; scalar_t__ ps_size; struct pp_power_state* ps; } ;
typedef  enum PP_StateClassificationFlag { ____Placeholder_PP_StateClassificationFlag } PP_StateClassificationFlag ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int psm_get_state_by_classification(struct pp_hwmgr *hwmgr,
					enum PP_StateClassificationFlag flag,
					unsigned long *state_id)
{
	struct pp_power_state *state;
	int table_entries;
	int i;

	table_entries = hwmgr->num_ps;
	state = hwmgr->ps;

	for (i = 0; i < table_entries; i++) {
		if (state->classification.flags & flag) {
			*state_id = state->id;
			return 0;
		}
		state = (struct pp_power_state *)((unsigned long)state + hwmgr->ps_size);
	}
	return -EINVAL;
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
          enum PP_StateClassificationFlag flag = 0;
          int _len_hwmgr0 = 1;
          struct pp_hwmgr * hwmgr = (struct pp_hwmgr *) malloc(_len_hwmgr0*sizeof(struct pp_hwmgr));
          for(int _i0 = 0; _i0 < _len_hwmgr0; _i0++) {
            hwmgr[_i0].num_ps = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].ps_size = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hwmgr__i0__ps0 = 1;
          hwmgr[_i0].ps = (struct pp_power_state *) malloc(_len_hwmgr__i0__ps0*sizeof(struct pp_power_state));
          for(int _j0 = 0; _j0 < _len_hwmgr__i0__ps0; _j0++) {
            hwmgr[_i0].ps->id = ((-2 * (next_i()%2)) + 1) * next_i();
        hwmgr[_i0].ps->classification.flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_state_id0 = 1;
          unsigned long * state_id = (unsigned long *) malloc(_len_state_id0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_state_id0; _i0++) {
            state_id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = psm_get_state_by_classification(hwmgr,flag,state_id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hwmgr0; _aux++) {
          free(hwmgr[_aux].ps);
          }
          free(hwmgr);
          free(state_id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
