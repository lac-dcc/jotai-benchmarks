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
typedef  scalar_t__ u8 ;

/* Variables and functions */
 scalar_t__ SLIM_MSG_MC_REQUEST_CLEAR_INFORMATION ; 
 scalar_t__ SLIM_MSG_MC_REQUEST_INFORMATION ; 
 scalar_t__ SLIM_MSG_MC_REQUEST_VALUE ; 
 scalar_t__ SLIM_MSG_MT_CORE ; 

__attribute__((used)) static inline bool slim_tid_txn(u8 mt, u8 mc)
{
	return (mt == SLIM_MSG_MT_CORE &&
		(mc == SLIM_MSG_MC_REQUEST_INFORMATION ||
		 mc == SLIM_MSG_MC_REQUEST_CLEAR_INFORMATION ||
		 mc == SLIM_MSG_MC_REQUEST_VALUE ||
		 mc == SLIM_MSG_MC_REQUEST_CLEAR_INFORMATION));
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
          long mt = 100;
          long mc = 100;
          int benchRet = slim_tid_txn(mt,mc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long mt = 255;
          long mc = 255;
          int benchRet = slim_tid_txn(mt,mc);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long mt = 10;
          long mc = 10;
          int benchRet = slim_tid_txn(mt,mc);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
