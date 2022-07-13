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
typedef  struct TYPE_18__   TYPE_9__ ;
typedef  struct TYPE_17__   TYPE_8__ ;
typedef  struct TYPE_16__   TYPE_7__ ;
typedef  struct TYPE_15__   TYPE_6__ ;
typedef  struct TYPE_14__   TYPE_5__ ;
typedef  struct TYPE_13__   TYPE_4__ ;
typedef  struct TYPE_12__   TYPE_3__ ;
typedef  struct TYPE_11__   TYPE_2__ ;
typedef  struct TYPE_10__   TYPE_1__ ;

/* Type definitions */
struct TYPE_18__ {int /*<<< orphan*/  link_error_type; int /*<<< orphan*/  ra_error_type; int /*<<< orphan*/  user_error_type; int /*<<< orphan*/  tlb_error_type; int /*<<< orphan*/  erat_error_type; int /*<<< orphan*/  slb_error_type; int /*<<< orphan*/  ue_error_type; } ;
struct mce_error_info {int error_type; TYPE_9__ u; } ;
struct TYPE_16__ {int /*<<< orphan*/  link_error_type; } ;
struct TYPE_15__ {int /*<<< orphan*/  ra_error_type; } ;
struct TYPE_14__ {int /*<<< orphan*/  user_error_type; } ;
struct TYPE_13__ {int /*<<< orphan*/  tlb_error_type; } ;
struct TYPE_12__ {int /*<<< orphan*/  erat_error_type; } ;
struct TYPE_11__ {int /*<<< orphan*/  slb_error_type; } ;
struct TYPE_10__ {int /*<<< orphan*/  ue_error_type; } ;
struct TYPE_17__ {TYPE_7__ link_error; TYPE_6__ ra_error; TYPE_5__ user_error; TYPE_4__ tlb_error; TYPE_3__ erat_error; TYPE_2__ slb_error; TYPE_1__ ue_error; } ;
struct machine_check_event {int error_type; TYPE_8__ u; } ;

/* Variables and functions */
#define  MCE_ERROR_TYPE_ERAT 135 
#define  MCE_ERROR_TYPE_LINK 134 
#define  MCE_ERROR_TYPE_RA 133 
#define  MCE_ERROR_TYPE_SLB 132 
#define  MCE_ERROR_TYPE_TLB 131 
#define  MCE_ERROR_TYPE_UE 130 
#define  MCE_ERROR_TYPE_UNKNOWN 129 
#define  MCE_ERROR_TYPE_USER 128 

__attribute__((used)) static void mce_set_error_info(struct machine_check_event *mce,
			       struct mce_error_info *mce_err)
{
	mce->error_type = mce_err->error_type;
	switch (mce_err->error_type) {
	case MCE_ERROR_TYPE_UE:
		mce->u.ue_error.ue_error_type = mce_err->u.ue_error_type;
		break;
	case MCE_ERROR_TYPE_SLB:
		mce->u.slb_error.slb_error_type = mce_err->u.slb_error_type;
		break;
	case MCE_ERROR_TYPE_ERAT:
		mce->u.erat_error.erat_error_type = mce_err->u.erat_error_type;
		break;
	case MCE_ERROR_TYPE_TLB:
		mce->u.tlb_error.tlb_error_type = mce_err->u.tlb_error_type;
		break;
	case MCE_ERROR_TYPE_USER:
		mce->u.user_error.user_error_type = mce_err->u.user_error_type;
		break;
	case MCE_ERROR_TYPE_RA:
		mce->u.ra_error.ra_error_type = mce_err->u.ra_error_type;
		break;
	case MCE_ERROR_TYPE_LINK:
		mce->u.link_error.link_error_type = mce_err->u.link_error_type;
		break;
	case MCE_ERROR_TYPE_UNKNOWN:
	default:
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
          int _len_mce0 = 1;
          struct machine_check_event * mce = (struct machine_check_event *) malloc(_len_mce0*sizeof(struct machine_check_event));
          for(int _i0 = 0; _i0 < _len_mce0; _i0++) {
            mce[_i0].error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.link_error.link_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.ra_error.ra_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.user_error.user_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.tlb_error.tlb_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.erat_error.erat_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.slb_error.slb_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.ue_error.ue_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mce_err0 = 1;
          struct mce_error_info * mce_err = (struct mce_error_info *) malloc(_len_mce_err0*sizeof(struct mce_error_info));
          for(int _i0 = 0; _i0 < _len_mce_err0; _i0++) {
            mce_err[_i0].error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.link_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.ra_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.user_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.tlb_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.erat_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.slb_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.ue_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mce_set_error_info(mce,mce_err);
          free(mce);
          free(mce_err);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mce0 = 65025;
          struct machine_check_event * mce = (struct machine_check_event *) malloc(_len_mce0*sizeof(struct machine_check_event));
          for(int _i0 = 0; _i0 < _len_mce0; _i0++) {
            mce[_i0].error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.link_error.link_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.ra_error.ra_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.user_error.user_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.tlb_error.tlb_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.erat_error.erat_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.slb_error.slb_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.ue_error.ue_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mce_err0 = 65025;
          struct mce_error_info * mce_err = (struct mce_error_info *) malloc(_len_mce_err0*sizeof(struct mce_error_info));
          for(int _i0 = 0; _i0 < _len_mce_err0; _i0++) {
            mce_err[_i0].error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.link_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.ra_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.user_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.tlb_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.erat_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.slb_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.ue_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mce_set_error_info(mce,mce_err);
          free(mce);
          free(mce_err);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mce0 = 100;
          struct machine_check_event * mce = (struct machine_check_event *) malloc(_len_mce0*sizeof(struct machine_check_event));
          for(int _i0 = 0; _i0 < _len_mce0; _i0++) {
            mce[_i0].error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.link_error.link_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.ra_error.ra_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.user_error.user_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.tlb_error.tlb_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.erat_error.erat_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.slb_error.slb_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce[_i0].u.ue_error.ue_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mce_err0 = 100;
          struct mce_error_info * mce_err = (struct mce_error_info *) malloc(_len_mce_err0*sizeof(struct mce_error_info));
          for(int _i0 = 0; _i0 < _len_mce_err0; _i0++) {
            mce_err[_i0].error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.link_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.ra_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.user_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.tlb_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.erat_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.slb_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
        mce_err[_i0].u.ue_error_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mce_set_error_info(mce,mce_err);
          free(mce);
          free(mce_err);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
