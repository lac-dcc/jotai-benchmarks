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
typedef  int u32 ;
struct TYPE_2__ {int spd_dpx; } ;
struct velocity_info {int mii_status; TYPE_1__ options; } ;

/* Variables and functions */
#define  SPD_DPX_1000_FULL 133 
#define  SPD_DPX_100_FULL 132 
#define  SPD_DPX_100_HALF 131 
#define  SPD_DPX_10_FULL 130 
#define  SPD_DPX_10_HALF 129 
#define  SPD_DPX_AUTO 128 
 int VELOCITY_AUTONEG_ENABLE ; 
 int VELOCITY_DUPLEX_FULL ; 
 int VELOCITY_SPEED_10 ; 
 int VELOCITY_SPEED_100 ; 
 int VELOCITY_SPEED_1000 ; 

__attribute__((used)) static u32 velocity_get_opt_media_mode(struct velocity_info *vptr)
{
	u32 status = 0;

	switch (vptr->options.spd_dpx) {
	case SPD_DPX_AUTO:
		status = VELOCITY_AUTONEG_ENABLE;
		break;
	case SPD_DPX_100_FULL:
		status = VELOCITY_SPEED_100 | VELOCITY_DUPLEX_FULL;
		break;
	case SPD_DPX_10_FULL:
		status = VELOCITY_SPEED_10 | VELOCITY_DUPLEX_FULL;
		break;
	case SPD_DPX_100_HALF:
		status = VELOCITY_SPEED_100;
		break;
	case SPD_DPX_10_HALF:
		status = VELOCITY_SPEED_10;
		break;
	case SPD_DPX_1000_FULL:
		status = VELOCITY_SPEED_1000 | VELOCITY_DUPLEX_FULL;
		break;
	}
	vptr->mii_status = status;
	return status;
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
          int _len_vptr0 = 1;
          struct velocity_info * vptr = (struct velocity_info *) malloc(_len_vptr0*sizeof(struct velocity_info));
          for(int _i0 = 0; _i0 < _len_vptr0; _i0++) {
            vptr[_i0].mii_status = ((-2 * (next_i()%2)) + 1) * next_i();
        vptr[_i0].options.spd_dpx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = velocity_get_opt_media_mode(vptr);
          printf("%d\n", benchRet); 
          free(vptr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
