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
       0            big-arr\n\
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
typedef  scalar_t__ u16 ;
struct fm10k_vf_info {scalar_t__ pf_vid; scalar_t__ sw_vid; } ;
typedef  scalar_t__ s32 ;

/* Variables and functions */
 scalar_t__ FM10K_ERR_PARAM ; 

s32 fm10k_iov_select_vid(struct fm10k_vf_info *vf_info, u16 vid)
{
	if (!vid)
		return vf_info->pf_vid ? vf_info->pf_vid : vf_info->sw_vid;
	else if (vf_info->pf_vid && vid != vf_info->pf_vid)
		return FM10K_ERR_PARAM;
	else
		return vid;
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

    // big-arr
    case 0:
    {
          long vid = 255;
          int _len_vf_info0 = 1;
          struct fm10k_vf_info * vf_info = (struct fm10k_vf_info *) malloc(_len_vf_info0*sizeof(struct fm10k_vf_info));
          for(int _i0 = 0; _i0 < _len_vf_info0; _i0++) {
            vf_info->pf_vid = ((-2 * (next_i()%2)) + 1) * next_i();
        vf_info->sw_vid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = fm10k_iov_select_vid(vf_info,vid);
          printf("%ld\n", benchRet); 
          free(vf_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
