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
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  enum smi_forward_action { ____Placeholder_smi_forward_action } smi_forward_action ;

/* Variables and functions */
 int IB_SMI_FORWARD ; 
 int IB_SMI_LOCAL ; 
 int IB_SMI_SEND ; 

__attribute__((used)) static enum smi_forward_action __smi_check_forward_dr_smp(u8 hop_ptr, u8 hop_cnt,
							  u8 direction,
							  bool dr_dlid_is_permissive,
							  bool dr_slid_is_permissive)
{
	if (!direction) {
		/* C14-9:2 -- intermediate hop */
		if (hop_ptr && hop_ptr < hop_cnt)
			return IB_SMI_FORWARD;

		/* C14-9:3 -- at the end of the DR segment of path */
		if (hop_ptr == hop_cnt)
			return (dr_dlid_is_permissive ?
				IB_SMI_SEND : IB_SMI_LOCAL);

		/* C14-9:4 -- hop_ptr = hop_cnt + 1 -> give to SMA/SM */
		if (hop_ptr == hop_cnt + 1)
			return IB_SMI_SEND;
	} else {
		/* C14-13:2  -- intermediate hop */
		if (2 <= hop_ptr && hop_ptr <= hop_cnt)
			return IB_SMI_FORWARD;

		/* C14-13:3 -- at the end of the DR segment of path */
		if (hop_ptr == 1)
			return (!dr_slid_is_permissive ?
				IB_SMI_SEND : IB_SMI_LOCAL);
	}
	return IB_SMI_LOCAL;

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
          int hop_ptr = 100;
          int hop_cnt = 100;
          int direction = 100;
          int dr_dlid_is_permissive = 100;
          int dr_slid_is_permissive = 100;
          enum smi_forward_action benchRet = __smi_check_forward_dr_smp(hop_ptr,hop_cnt,direction,dr_dlid_is_permissive,dr_slid_is_permissive);
        
        break;
    }
    // big-arr
    case 1:
    {
          int hop_ptr = 255;
          int hop_cnt = 255;
          int direction = 255;
          int dr_dlid_is_permissive = 255;
          int dr_slid_is_permissive = 255;
          enum smi_forward_action benchRet = __smi_check_forward_dr_smp(hop_ptr,hop_cnt,direction,dr_dlid_is_permissive,dr_slid_is_permissive);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hop_ptr = 10;
          int hop_cnt = 10;
          int direction = 10;
          int dr_dlid_is_permissive = 10;
          int dr_slid_is_permissive = 10;
          enum smi_forward_action benchRet = __smi_check_forward_dr_smp(hop_ptr,hop_cnt,direction,dr_dlid_is_permissive,dr_slid_is_permissive);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
