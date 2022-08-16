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
struct TYPE_2__ {scalar_t__ flags; scalar_t__ devtype; } ;
struct wiimote_data {TYPE_1__ state; } ;
typedef  scalar_t__ __u8 ;

/* Variables and functions */
 scalar_t__ WIIMOTE_DEV_BALANCE_BOARD ; 
 scalar_t__ WIIPROTO_FLAGS_IR ; 
 int WIIPROTO_FLAG_ACCEL ; 
 int WIIPROTO_FLAG_EXT_USED ; 
 scalar_t__ WIIPROTO_FLAG_IR_BASIC ; 
 scalar_t__ WIIPROTO_FLAG_IR_EXT ; 
 scalar_t__ WIIPROTO_FLAG_IR_FULL ; 
 int WIIPROTO_FLAG_MP_USED ; 
 scalar_t__ WIIPROTO_REQ_DRM_K ; 
 scalar_t__ WIIPROTO_REQ_DRM_KA ; 
 scalar_t__ WIIPROTO_REQ_DRM_KAE ; 
 scalar_t__ WIIPROTO_REQ_DRM_KAI ; 
 scalar_t__ WIIPROTO_REQ_DRM_KAIE ; 
 scalar_t__ WIIPROTO_REQ_DRM_KEE ; 
 scalar_t__ WIIPROTO_REQ_DRM_KIE ; 
 scalar_t__ WIIPROTO_REQ_DRM_SKAI1 ; 

__attribute__((used)) static __u8 select_drm(struct wiimote_data *wdata)
{
	__u8 ir = wdata->state.flags & WIIPROTO_FLAGS_IR;
	bool ext;

	ext = (wdata->state.flags & WIIPROTO_FLAG_EXT_USED) ||
	      (wdata->state.flags & WIIPROTO_FLAG_MP_USED);

	/* some 3rd-party balance-boards are hard-coded to KEE, *sigh* */
	if (wdata->state.devtype == WIIMOTE_DEV_BALANCE_BOARD) {
		if (ext)
			return WIIPROTO_REQ_DRM_KEE;
		else
			return WIIPROTO_REQ_DRM_K;
	}

	if (ir == WIIPROTO_FLAG_IR_BASIC) {
		if (wdata->state.flags & WIIPROTO_FLAG_ACCEL) {
			/* GEN10 and ealier devices bind IR formats to DRMs.
			 * Hence, we cannot use DRM_KAI here as it might be
			 * bound to IR_EXT. Use DRM_KAIE unconditionally so we
			 * work with all devices and our parsers can use the
			 * fixed formats, too. */
			return WIIPROTO_REQ_DRM_KAIE;
		} else {
			return WIIPROTO_REQ_DRM_KIE;
		}
	} else if (ir == WIIPROTO_FLAG_IR_EXT) {
		return WIIPROTO_REQ_DRM_KAI;
	} else if (ir == WIIPROTO_FLAG_IR_FULL) {
		return WIIPROTO_REQ_DRM_SKAI1;
	} else {
		if (wdata->state.flags & WIIPROTO_FLAG_ACCEL) {
			if (ext)
				return WIIPROTO_REQ_DRM_KAE;
			else
				return WIIPROTO_REQ_DRM_KA;
		} else {
			if (ext)
				return WIIPROTO_REQ_DRM_KEE;
			else
				return WIIPROTO_REQ_DRM_K;
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
          int _len_wdata0 = 1;
          struct wiimote_data * wdata = (struct wiimote_data *) malloc(_len_wdata0*sizeof(struct wiimote_data));
          for(int _i0 = 0; _i0 < _len_wdata0; _i0++) {
            wdata[_i0].state.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        wdata[_i0].state.devtype = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = select_drm(wdata);
          printf("%ld\n", benchRet); 
          free(wdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
