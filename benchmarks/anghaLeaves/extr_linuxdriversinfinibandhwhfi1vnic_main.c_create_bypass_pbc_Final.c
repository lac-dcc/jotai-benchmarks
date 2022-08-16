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
typedef  int u64 ;
typedef  int u32 ;

/* Variables and functions */
 int PBC_CREDIT_RETURN ; 
 scalar_t__ PBC_IHCRC_NONE ; 
 int PBC_INSERT_BYPASS_ICRC ; 
 int PBC_INSERT_HCRC_SHIFT ; 
 int PBC_LENGTH_DWS_MASK ; 
 int PBC_LENGTH_DWS_SHIFT ; 
 int PBC_PACKET_BYPASS ; 
 int PBC_VL_MASK ; 
 int PBC_VL_SHIFT ; 

__attribute__((used)) static u64 create_bypass_pbc(u32 vl, u32 dw_len)
{
	u64 pbc;

	pbc = ((u64)PBC_IHCRC_NONE << PBC_INSERT_HCRC_SHIFT)
		| PBC_INSERT_BYPASS_ICRC | PBC_CREDIT_RETURN
		| PBC_PACKET_BYPASS
		| ((vl & PBC_VL_MASK) << PBC_VL_SHIFT)
		| (dw_len & PBC_LENGTH_DWS_MASK) << PBC_LENGTH_DWS_SHIFT;

	return pbc;
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
          int vl = 100;
          int dw_len = 100;
          int benchRet = create_bypass_pbc(vl,dw_len);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int vl = 255;
          int dw_len = 255;
          int benchRet = create_bypass_pbc(vl,dw_len);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int vl = 10;
          int dw_len = 10;
          int benchRet = create_bypass_pbc(vl,dw_len);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
