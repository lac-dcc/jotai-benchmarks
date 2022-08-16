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
struct sm_resource_t {scalar_t__* res_stats; } ;
struct TYPE_2__ {int /*<<< orphan*/ * deceased; int /*<<< orphan*/ * terminated; int /*<<< orphan*/  res_deceased_cnt; int /*<<< orphan*/  res_terminated_cnt; } ;

/* Variables and functions */
 int END_ALL ; 
 TYPE_1__* sm_state ; 

__attribute__((used)) static void vc_sm_resource_deceased(struct sm_resource_t *p_res, int terminated)
{
	if (sm_state != NULL) {
		if (p_res != NULL) {
			int ix;

			if (terminated)
				sm_state->res_terminated_cnt++;
			else
				sm_state->res_deceased_cnt++;

			for (ix = 0; ix < END_ALL; ix++) {
				if (terminated)
					sm_state->terminated[ix] +=
					    p_res->res_stats[ix];
				else
					sm_state->deceased[ix] +=
					    p_res->res_stats[ix];
			}
		}
	}
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
          int terminated = 100;
          int _len_p_res0 = 1;
          struct sm_resource_t * p_res = (struct sm_resource_t *) malloc(_len_p_res0*sizeof(struct sm_resource_t));
          for(int _i0 = 0; _i0 < _len_p_res0; _i0++) {
              int _len_p_res__i0__res_stats0 = 1;
          p_res[_i0].res_stats = (long *) malloc(_len_p_res__i0__res_stats0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_p_res__i0__res_stats0; _j0++) {
            p_res[_i0].res_stats[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vc_sm_resource_deceased(p_res,terminated);
          for(int _aux = 0; _aux < _len_p_res0; _aux++) {
          free(p_res[_aux].res_stats);
          }
          free(p_res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
