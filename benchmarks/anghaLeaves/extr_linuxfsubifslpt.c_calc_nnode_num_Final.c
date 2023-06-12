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

/* Variables and functions */
 int UBIFS_LPT_FANOUT ; 
 int UBIFS_LPT_FANOUT_SHIFT ; 

__attribute__((used)) static int calc_nnode_num(int row, int col)
{
	int num, bits;

	num = 1;
	while (row--) {
		bits = (col & (UBIFS_LPT_FANOUT - 1));
		col >>= UBIFS_LPT_FANOUT_SHIFT;
		num <<= UBIFS_LPT_FANOUT_SHIFT;
		num |= bits;
	}
	return num;
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
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 2314
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 711
          // ------------------------------- 
          // static_instructions_O2 : 41
          // dynamic_instructions_O2 : 569
          // ------------------------------- 
          // static_instructions_O3 : 41
          // dynamic_instructions_O3 : 569
          // ------------------------------- 
          // static_instructions_Ofast : 41
          // dynamic_instructions_Ofast : 569
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 710
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 910
          // ------------------------------- 

          int row = 100;
        
          int col = 100;
        
          int benchRet = calc_nnode_num(row,col);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 5879
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 1796
          // ------------------------------- 
          // static_instructions_O2 : 49
          // dynamic_instructions_O2 : 1427
          // ------------------------------- 
          // static_instructions_O3 : 49
          // dynamic_instructions_O3 : 1427
          // ------------------------------- 
          // static_instructions_Ofast : 49
          // dynamic_instructions_Ofast : 1427
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 1795
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 2305
          // ------------------------------- 

          int row = 255;
        
          int col = 255;
        
          int benchRet = calc_nnode_num(row,col);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 244
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 81
          // ------------------------------- 
          // static_instructions_O2 : 49
          // dynamic_instructions_O2 : 78
          // ------------------------------- 
          // static_instructions_O3 : 49
          // dynamic_instructions_O3 : 78
          // ------------------------------- 
          // static_instructions_Ofast : 49
          // dynamic_instructions_Ofast : 78
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 80
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 100
          // ------------------------------- 

          int row = 10;
        
          int col = 10;
        
          int benchRet = calc_nnode_num(row,col);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
