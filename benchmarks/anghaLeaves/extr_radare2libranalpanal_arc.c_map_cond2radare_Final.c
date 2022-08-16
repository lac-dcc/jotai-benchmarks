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
typedef  int ut8 ;

/* Variables and functions */
 int R_ANAL_COND_AL ; 
 int R_ANAL_COND_EQ ; 
 int R_ANAL_COND_GE ; 
 int R_ANAL_COND_GT ; 
 int R_ANAL_COND_HI ; 
 int R_ANAL_COND_LE ; 
 int R_ANAL_COND_LS ; 
 int R_ANAL_COND_LT ; 
 int R_ANAL_COND_MI ; 
 int R_ANAL_COND_NE ; 
 int R_ANAL_COND_PL ; 
 int R_ANAL_COND_VC ; 
 int R_ANAL_COND_VS ; 

__attribute__((used)) static int map_cond2radare(ut8 cond) {
	switch (cond) {
	case 0: return R_ANAL_COND_AL;
	case 1: return R_ANAL_COND_EQ;
	case 2: return R_ANAL_COND_NE;
	case 3: return R_ANAL_COND_PL;
	case 4: return R_ANAL_COND_MI;
	case 7: return R_ANAL_COND_VS;
	case 8: return R_ANAL_COND_VC;
	case 9: return R_ANAL_COND_GT;
	case 0xa: return R_ANAL_COND_GE;
	case 0xb: return R_ANAL_COND_LT;
	case 0xc: return R_ANAL_COND_LE;
	case 0xd: return R_ANAL_COND_HI;
	case 0xe: return R_ANAL_COND_LS;
#if 0
	/* TODO: */
	/* - radare defines R_ANAL_COND_LO as carry clear and _HS as carry set */
	/*   which appears different to the ARC definitions. */
	/*   Need to do some math and double check the details */
	case 5: return R_ANAL_COND_?? - CS,C,LO - Carry set & LO
	case 6: return R_ANAL_COND_?? - CC,NC,HS - Carry clear & HS
	/* - Positive non-zero doesnt map to any Radare cond code.  Perhaps just add it? */
	case 0xf: return R_ANAL_COND_?? - PNZ - Positive non-zero
#endif
	}
	return -1;
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
          int cond = 100;
          int benchRet = map_cond2radare(cond);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cond = 255;
          int benchRet = map_cond2radare(cond);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cond = 10;
          int benchRet = map_cond2radare(cond);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
