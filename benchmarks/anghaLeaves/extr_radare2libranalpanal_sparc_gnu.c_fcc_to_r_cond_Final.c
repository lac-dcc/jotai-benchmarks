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
#define  FCC_A 143 
#define  FCC_E 142 
#define  FCC_G 141 
#define  FCC_GE 140 
#define  FCC_L 139 
#define  FCC_LE 138 
#define  FCC_LG 137 
#define  FCC_N 136 
#define  FCC_NE 135 
#define  FCC_O 134 
#define  FCC_U 133 
#define  FCC_UE 132 
#define  FCC_UG 131 
#define  FCC_UGE 130 
#define  FCC_UL 129 
#define  FCC_ULE 128 
 int R_ANAL_COND_ALWAYS ; 
 int R_ANAL_COND_EQ ; 
 int R_ANAL_COND_GE ; 
 int R_ANAL_COND_GT ; 
 int R_ANAL_COND_LE ; 
 int R_ANAL_COND_LT ; 
 int R_ANAL_COND_NE ; 
 int R_ANAL_COND_NEVER ; 
 int R_ANAL_COND_UNKNOWN ; 

__attribute__((used)) static int fcc_to_r_cond(const int cond) {
	switch (cond) {
	case FCC_A: return R_ANAL_COND_ALWAYS;
	case FCC_E: return R_ANAL_COND_EQ;
	case FCC_G: return R_ANAL_COND_GT;
	case FCC_GE: return R_ANAL_COND_GE;
	case FCC_L: return R_ANAL_COND_LT;
	case FCC_LE: return R_ANAL_COND_LE;
	case FCC_LG: return R_ANAL_COND_NE;
	case FCC_N: return R_ANAL_COND_NEVER;
	case FCC_NE: return R_ANAL_COND_NE;
	case FCC_O:
	case FCC_U:
	case FCC_UE:
	case FCC_UG:
	case FCC_UGE:
	case FCC_UL:
	case FCC_ULE:
	default:
		return R_ANAL_COND_UNKNOWN;
	}
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
          const int cond = 100;
          int benchRet = fcc_to_r_cond(cond);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const int cond = 255;
          int benchRet = fcc_to_r_cond(cond);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int cond = 10;
          int benchRet = fcc_to_r_cond(cond);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
