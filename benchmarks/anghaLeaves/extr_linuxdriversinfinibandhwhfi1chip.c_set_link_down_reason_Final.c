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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  void* u8 ;
struct TYPE_4__ {scalar_t__ latest; } ;
struct TYPE_3__ {scalar_t__ latest; } ;
struct hfi1_pportdata {void* remote_link_down_reason; TYPE_2__ neigh_link_down_reason; TYPE_1__ local_link_down_reason; } ;

/* Variables and functions */

void set_link_down_reason(struct hfi1_pportdata *ppd, u8 lcl_reason,
			  u8 neigh_reason, u8 rem_reason)
{
	if (ppd->local_link_down_reason.latest == 0 &&
	    ppd->neigh_link_down_reason.latest == 0) {
		ppd->local_link_down_reason.latest = lcl_reason;
		ppd->neigh_link_down_reason.latest = neigh_reason;
		ppd->remote_link_down_reason = rem_reason;
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
          int _len_ppd0 = 1;
          struct hfi1_pportdata * ppd = (struct hfi1_pportdata *) malloc(_len_ppd0*sizeof(struct hfi1_pportdata));
          for(int _i0 = 0; _i0 < _len_ppd0; _i0++) {
            ppd[_i0].neigh_link_down_reason.latest = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].local_link_down_reason.latest = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * lcl_reason;
          void * neigh_reason;
          void * rem_reason;
          set_link_down_reason(ppd,lcl_reason,neigh_reason,rem_reason);
          free(ppd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ppd0 = 65025;
          struct hfi1_pportdata * ppd = (struct hfi1_pportdata *) malloc(_len_ppd0*sizeof(struct hfi1_pportdata));
          for(int _i0 = 0; _i0 < _len_ppd0; _i0++) {
            ppd[_i0].neigh_link_down_reason.latest = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].local_link_down_reason.latest = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * lcl_reason;
          void * neigh_reason;
          void * rem_reason;
          set_link_down_reason(ppd,lcl_reason,neigh_reason,rem_reason);
          free(ppd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ppd0 = 100;
          struct hfi1_pportdata * ppd = (struct hfi1_pportdata *) malloc(_len_ppd0*sizeof(struct hfi1_pportdata));
          for(int _i0 = 0; _i0 < _len_ppd0; _i0++) {
            ppd[_i0].neigh_link_down_reason.latest = ((-2 * (next_i()%2)) + 1) * next_i();
        ppd[_i0].local_link_down_reason.latest = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * lcl_reason;
          void * neigh_reason;
          void * rem_reason;
          set_link_down_reason(ppd,lcl_reason,neigh_reason,rem_reason);
          free(ppd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
