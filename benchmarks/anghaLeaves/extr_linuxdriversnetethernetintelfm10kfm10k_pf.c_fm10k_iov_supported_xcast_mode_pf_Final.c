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
       1            big-arr-10x\n\
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
typedef  int u8 ;
struct fm10k_vf_info {int vf_flags; } ;

/* Variables and functions */
 int FM10K_VF_FLAG_ALLMULTI_CAPABLE ; 
 int FM10K_VF_FLAG_MULTI_CAPABLE ; 
 int FM10K_VF_FLAG_NONE_CAPABLE ; 
 int FM10K_VF_FLAG_PROMISC_CAPABLE ; 
#define  FM10K_XCAST_MODE_ALLMULTI 131 
 int FM10K_XCAST_MODE_DISABLE ; 
#define  FM10K_XCAST_MODE_MULTI 130 
#define  FM10K_XCAST_MODE_NONE 129 
#define  FM10K_XCAST_MODE_PROMISC 128 

__attribute__((used)) static u8 fm10k_iov_supported_xcast_mode_pf(struct fm10k_vf_info *vf_info,
					    u8 mode)
{
	u8 vf_flags = vf_info->vf_flags;

	/* match up mode to capabilities as best as possible */
	switch (mode) {
	case FM10K_XCAST_MODE_PROMISC:
		if (vf_flags & FM10K_VF_FLAG_PROMISC_CAPABLE)
			return FM10K_XCAST_MODE_PROMISC;
		/* fall through */
	case FM10K_XCAST_MODE_ALLMULTI:
		if (vf_flags & FM10K_VF_FLAG_ALLMULTI_CAPABLE)
			return FM10K_XCAST_MODE_ALLMULTI;
		/* fall through */
	case FM10K_XCAST_MODE_MULTI:
		if (vf_flags & FM10K_VF_FLAG_MULTI_CAPABLE)
			return FM10K_XCAST_MODE_MULTI;
		/* fall through */
	case FM10K_XCAST_MODE_NONE:
		if (vf_flags & FM10K_VF_FLAG_NONE_CAPABLE)
			return FM10K_XCAST_MODE_NONE;
		/* fall through */
	default:
		break;
	}

	/* disable interface as it should not be able to request any */
	return FM10K_XCAST_MODE_DISABLE;
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
          int mode = 100;
          int _len_vf_info0 = 1;
          struct fm10k_vf_info * vf_info = (struct fm10k_vf_info *) malloc(_len_vf_info0*sizeof(struct fm10k_vf_info));
          for(int _i0 = 0; _i0 < _len_vf_info0; _i0++) {
            vf_info[_i0].vf_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fm10k_iov_supported_xcast_mode_pf(vf_info,mode);
          printf("%d\n", benchRet); 
          free(vf_info);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int mode = 10;
          int _len_vf_info0 = 100;
          struct fm10k_vf_info * vf_info = (struct fm10k_vf_info *) malloc(_len_vf_info0*sizeof(struct fm10k_vf_info));
          for(int _i0 = 0; _i0 < _len_vf_info0; _i0++) {
            vf_info[_i0].vf_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fm10k_iov_supported_xcast_mode_pf(vf_info,mode);
          printf("%d\n", benchRet); 
          free(vf_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
