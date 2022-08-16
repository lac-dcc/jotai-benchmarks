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
typedef  enum ib_access_flags { ____Placeholder_ib_access_flags } ib_access_flags ;

/* Variables and functions */
 int BNXT_QPLIB_ACCESS_LOCAL_WRITE ; 
 int BNXT_QPLIB_ACCESS_MW_BIND ; 
 int BNXT_QPLIB_ACCESS_ON_DEMAND ; 
 int BNXT_QPLIB_ACCESS_REMOTE_ATOMIC ; 
 int BNXT_QPLIB_ACCESS_REMOTE_READ ; 
 int BNXT_QPLIB_ACCESS_REMOTE_WRITE ; 
 int BNXT_QPLIB_ACCESS_ZERO_BASED ; 
 int IB_ACCESS_LOCAL_WRITE ; 
 int IB_ACCESS_MW_BIND ; 
 int IB_ACCESS_ON_DEMAND ; 
 int IB_ACCESS_REMOTE_ATOMIC ; 
 int IB_ACCESS_REMOTE_READ ; 
 int IB_ACCESS_REMOTE_WRITE ; 
 int IB_ZERO_BASED ; 

__attribute__((used)) static enum ib_access_flags __to_ib_access_flags(int qflags)
{
	enum ib_access_flags iflags = 0;

	if (qflags & BNXT_QPLIB_ACCESS_LOCAL_WRITE)
		iflags |= IB_ACCESS_LOCAL_WRITE;
	if (qflags & BNXT_QPLIB_ACCESS_REMOTE_WRITE)
		iflags |= IB_ACCESS_REMOTE_WRITE;
	if (qflags & BNXT_QPLIB_ACCESS_REMOTE_READ)
		iflags |= IB_ACCESS_REMOTE_READ;
	if (qflags & BNXT_QPLIB_ACCESS_REMOTE_ATOMIC)
		iflags |= IB_ACCESS_REMOTE_ATOMIC;
	if (qflags & BNXT_QPLIB_ACCESS_MW_BIND)
		iflags |= IB_ACCESS_MW_BIND;
	if (qflags & BNXT_QPLIB_ACCESS_ZERO_BASED)
		iflags |= IB_ZERO_BASED;
	if (qflags & BNXT_QPLIB_ACCESS_ON_DEMAND)
		iflags |= IB_ACCESS_ON_DEMAND;
	return iflags;
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
          int qflags = 100;
          enum ib_access_flags benchRet = __to_ib_access_flags(qflags);
        
        break;
    }
    // big-arr
    case 1:
    {
          int qflags = 255;
          enum ib_access_flags benchRet = __to_ib_access_flags(qflags);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int qflags = 10;
          enum ib_access_flags benchRet = __to_ib_access_flags(qflags);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
