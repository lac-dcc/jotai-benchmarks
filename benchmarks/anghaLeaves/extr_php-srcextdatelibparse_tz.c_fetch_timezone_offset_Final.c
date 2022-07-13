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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  size_t uint32_t ;
typedef  int /*<<< orphan*/  ttinfo ;
struct TYPE_4__ {size_t timecnt; int typecnt; } ;
struct TYPE_5__ {scalar_t__* trans; size_t* trans_idx; TYPE_1__ bit64; int /*<<< orphan*/ * type; } ;
typedef  TYPE_2__ timelib_tzinfo ;
typedef  scalar_t__ timelib_sll ;

/* Variables and functions */

__attribute__((used)) static ttinfo* fetch_timezone_offset(timelib_tzinfo *tz, timelib_sll ts, timelib_sll *transition_time)
{
	uint32_t i;

	/* If there is no transition time, we pick the first one, if that doesn't
	 * exist we return NULL */
	if (!tz->bit64.timecnt || !tz->trans) {
		*transition_time = 0;
		if (tz->bit64.typecnt == 1) {
			return &(tz->type[0]);
		}
		return NULL;
	}

	/* If the TS is lower than the first transition time, then we scan over
	 * all the transition times to find the first non-DST one, or the first
	 * one in case there are only DST entries. Not sure which smartass came up
	 * with this idea in the first though :) */
	if (ts < tz->trans[0]) {
		return &(tz->type[0]);
	}

	/* In all other cases we loop through the available transition times to find
	 * the correct entry */
	for (i = 0; i < tz->bit64.timecnt; i++) {
		if (ts < tz->trans[i]) {
			*transition_time = tz->trans[i - 1];
			return &(tz->type[tz->trans_idx[i - 1]]);
		}
	}
	*transition_time = tz->trans[tz->bit64.timecnt - 1];
	return &(tz->type[tz->trans_idx[tz->bit64.timecnt - 1]]);
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
          long ts = 100;
          int _len_tz0 = 1;
          struct TYPE_5__ * tz = (struct TYPE_5__ *) malloc(_len_tz0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              int _len_tz__i0__trans0 = 1;
          tz[_i0].trans = (long *) malloc(_len_tz__i0__trans0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tz__i0__trans0; _j0++) {
            tz[_i0].trans[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tz__i0__trans_idx0 = 1;
          tz[_i0].trans_idx = (unsigned long *) malloc(_len_tz__i0__trans_idx0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_tz__i0__trans_idx0; _j0++) {
            tz[_i0].trans_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tz[_i0].bit64.timecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0].bit64.typecnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tz__i0__type0 = 1;
          tz[_i0].type = (int *) malloc(_len_tz__i0__type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tz__i0__type0; _j0++) {
            tz[_i0].type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_transition_time0 = 1;
          long * transition_time = (long *) malloc(_len_transition_time0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_transition_time0; _i0++) {
            transition_time[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = fetch_timezone_offset(tz,ts,transition_time);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].trans);
          }
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].trans_idx);
          }
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].type);
          }
          free(tz);
          free(transition_time);
        
        break;
    }
    // big-arr
    case 1:
    {
          long ts = 255;
          int _len_tz0 = 65025;
          struct TYPE_5__ * tz = (struct TYPE_5__ *) malloc(_len_tz0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              int _len_tz__i0__trans0 = 1;
          tz[_i0].trans = (long *) malloc(_len_tz__i0__trans0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tz__i0__trans0; _j0++) {
            tz[_i0].trans[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tz__i0__trans_idx0 = 1;
          tz[_i0].trans_idx = (unsigned long *) malloc(_len_tz__i0__trans_idx0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_tz__i0__trans_idx0; _j0++) {
            tz[_i0].trans_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tz[_i0].bit64.timecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0].bit64.typecnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tz__i0__type0 = 1;
          tz[_i0].type = (int *) malloc(_len_tz__i0__type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tz__i0__type0; _j0++) {
            tz[_i0].type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_transition_time0 = 65025;
          long * transition_time = (long *) malloc(_len_transition_time0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_transition_time0; _i0++) {
            transition_time[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = fetch_timezone_offset(tz,ts,transition_time);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].trans);
          }
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].trans_idx);
          }
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].type);
          }
          free(tz);
          free(transition_time);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long ts = 10;
          int _len_tz0 = 100;
          struct TYPE_5__ * tz = (struct TYPE_5__ *) malloc(_len_tz0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_tz0; _i0++) {
              int _len_tz__i0__trans0 = 1;
          tz[_i0].trans = (long *) malloc(_len_tz__i0__trans0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_tz__i0__trans0; _j0++) {
            tz[_i0].trans[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tz__i0__trans_idx0 = 1;
          tz[_i0].trans_idx = (unsigned long *) malloc(_len_tz__i0__trans_idx0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_tz__i0__trans_idx0; _j0++) {
            tz[_i0].trans_idx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        tz[_i0].bit64.timecnt = ((-2 * (next_i()%2)) + 1) * next_i();
        tz[_i0].bit64.typecnt = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_tz__i0__type0 = 1;
          tz[_i0].type = (int *) malloc(_len_tz__i0__type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_tz__i0__type0; _j0++) {
            tz[_i0].type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_transition_time0 = 100;
          long * transition_time = (long *) malloc(_len_transition_time0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_transition_time0; _i0++) {
            transition_time[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = fetch_timezone_offset(tz,ts,transition_time);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].trans);
          }
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].trans_idx);
          }
          for(int _aux = 0; _aux < _len_tz0; _aux++) {
          free(tz[_aux].type);
          }
          free(tz);
          free(transition_time);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
