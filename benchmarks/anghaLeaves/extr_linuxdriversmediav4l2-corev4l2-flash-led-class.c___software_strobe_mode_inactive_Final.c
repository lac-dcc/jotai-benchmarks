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

/* Type definitions */
struct v4l2_ctrl {scalar_t__ val; } ;

/* Variables and functions */
 size_t LED_MODE ; 
 size_t STROBE_SOURCE ; 
 scalar_t__ V4L2_FLASH_LED_MODE_FLASH ; 
 scalar_t__ V4L2_FLASH_STROBE_SOURCE_SOFTWARE ; 

__attribute__((used)) static bool __software_strobe_mode_inactive(struct v4l2_ctrl **ctrls)
{
	return ((ctrls[LED_MODE]->val != V4L2_FLASH_LED_MODE_FLASH) ||
		(ctrls[STROBE_SOURCE] && (ctrls[STROBE_SOURCE]->val !=
				V4L2_FLASH_STROBE_SOURCE_SOFTWARE)));
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
          int _len_ctrls0 = 1;
          struct v4l2_ctrl ** ctrls = (struct v4l2_ctrl **) malloc(_len_ctrls0*sizeof(struct v4l2_ctrl *));
          for(int _i0 = 0; _i0 < _len_ctrls0; _i0++) {
            int _len_ctrls1 = 1;
            ctrls[_i0] = (struct v4l2_ctrl *) malloc(_len_ctrls1*sizeof(struct v4l2_ctrl));
            for(int _i1 = 0; _i1 < _len_ctrls1; _i1++) {
              ctrls[_i0][_i1].val = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = __software_strobe_mode_inactive(ctrls);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_ctrls0; i1++) {
            int _len_ctrls1 = 1;
              free(ctrls[i1]);
          }
          free(ctrls);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
