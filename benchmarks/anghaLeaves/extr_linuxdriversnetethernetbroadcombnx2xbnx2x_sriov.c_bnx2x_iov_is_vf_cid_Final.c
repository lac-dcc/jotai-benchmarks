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
       3            empty\n\
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
typedef  scalar_t__ u16 ;
struct bnx2x {int dummy; } ;

/* Variables and functions */
 scalar_t__ BNX2X_FIRST_VF_CID ; 
 scalar_t__ BNX2X_VF_CIDS ; 

__attribute__((used)) static u8 bnx2x_iov_is_vf_cid(struct bnx2x *bp, u16 cid)
{
	return ((cid >= BNX2X_FIRST_VF_CID) &&
		((cid - BNX2X_FIRST_VF_CID) < BNX2X_VF_CIDS));
}

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
          long cid = 100;
        
          int _len_bp0 = 1;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
              bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bnx2x_iov_is_vf_cid(bp,cid);
          printf("%d\n", benchRet); 
          free(bp);
        
        break;
    }
    // big-arr
    case 1:
    {
          long cid = 255;
        
          int _len_bp0 = 65025;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
              bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bnx2x_iov_is_vf_cid(bp,cid);
          printf("%d\n", benchRet); 
          free(bp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long cid = 10;
        
          int _len_bp0 = 100;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
              bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bnx2x_iov_is_vf_cid(bp,cid);
          printf("%d\n", benchRet); 
          free(bp);
        
        break;
    }
    // empty
    case 3:
    {
          long cid = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_bp0 = 1;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
              bp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bnx2x_iov_is_vf_cid(bp,cid);
          printf("%d\n", benchRet); 
          free(bp);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
