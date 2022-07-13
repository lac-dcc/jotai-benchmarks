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
typedef  int u16 ;
typedef  enum dsaf_mode { ____Placeholder_dsaf_mode } dsaf_mode ;

/* Variables and functions */
#define  DSAF_MODE_DISABLE_2PORT_64VM 132 
#define  DSAF_MODE_DISABLE_6PORT_0VM 131 
#define  DSAF_MODE_DISABLE_6PORT_16VM 130 
#define  DSAF_MODE_DISABLE_FIX 129 
#define  DSAF_MODE_DISABLE_SP 128 

void hns_rcb_get_queue_mode(enum dsaf_mode dsaf_mode, u16 *max_vfn,
			    u16 *max_q_per_vf)
{
	switch (dsaf_mode) {
	case DSAF_MODE_DISABLE_6PORT_0VM:
		*max_vfn = 1;
		*max_q_per_vf = 16;
		break;
	case DSAF_MODE_DISABLE_FIX:
	case DSAF_MODE_DISABLE_SP:
		*max_vfn = 1;
		*max_q_per_vf = 1;
		break;
	case DSAF_MODE_DISABLE_2PORT_64VM:
		*max_vfn = 64;
		*max_q_per_vf = 1;
		break;
	case DSAF_MODE_DISABLE_6PORT_16VM:
		*max_vfn = 16;
		*max_q_per_vf = 1;
		break;
	default:
		*max_vfn = 1;
		*max_q_per_vf = 16;
		break;
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
          enum dsaf_mode dsaf_mode = 0;
          int _len_max_vfn0 = 1;
          int * max_vfn = (int *) malloc(_len_max_vfn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_vfn0; _i0++) {
            max_vfn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_q_per_vf0 = 1;
          int * max_q_per_vf = (int *) malloc(_len_max_q_per_vf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_q_per_vf0; _i0++) {
            max_q_per_vf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hns_rcb_get_queue_mode(dsaf_mode,max_vfn,max_q_per_vf);
          free(max_vfn);
          free(max_q_per_vf);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum dsaf_mode dsaf_mode = 0;
          int _len_max_vfn0 = 65025;
          int * max_vfn = (int *) malloc(_len_max_vfn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_vfn0; _i0++) {
            max_vfn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_q_per_vf0 = 65025;
          int * max_q_per_vf = (int *) malloc(_len_max_q_per_vf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_q_per_vf0; _i0++) {
            max_q_per_vf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hns_rcb_get_queue_mode(dsaf_mode,max_vfn,max_q_per_vf);
          free(max_vfn);
          free(max_q_per_vf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum dsaf_mode dsaf_mode = 0;
          int _len_max_vfn0 = 100;
          int * max_vfn = (int *) malloc(_len_max_vfn0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_vfn0; _i0++) {
            max_vfn[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_max_q_per_vf0 = 100;
          int * max_q_per_vf = (int *) malloc(_len_max_q_per_vf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_max_q_per_vf0; _i0++) {
            max_q_per_vf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hns_rcb_get_queue_mode(dsaf_mode,max_vfn,max_q_per_vf);
          free(max_vfn);
          free(max_q_per_vf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
