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

/* Variables and functions */
#define  ICC_A 143 
#define  ICC_CC 142 
#define  ICC_CS 141 
#define  ICC_E 140 
#define  ICC_G 139 
#define  ICC_GE 138 
#define  ICC_GU 137 
#define  ICC_L 136 
#define  ICC_LE 135 
#define  ICC_LEU 134 
#define  ICC_N 133 
#define  ICC_NE 132 
#define  ICC_NEG 131 
#define  ICC_POS 130 
#define  ICC_VC 129 
#define  ICC_VS 128 
 int R_ANAL_COND_ALWAYS ; 
 int R_ANAL_COND_EQ ; 
 int R_ANAL_COND_GE ; 
 int R_ANAL_COND_GT ; 
 int R_ANAL_COND_LE ; 
 int R_ANAL_COND_LT ; 
 int R_ANAL_COND_NE ; 
 int R_ANAL_COND_NEVER ; 
 int R_ANAL_COND_UNKNOWN ; 

__attribute__((used)) static int icc_to_r_cond(const int cond) {
	/* we treat signed and unsigned the same here */
	switch(cond) {
	case ICC_A: return R_ANAL_COND_ALWAYS;
	case ICC_CC: return R_ANAL_COND_GE;
	case ICC_CS: return R_ANAL_COND_LT;
	case ICC_E: return R_ANAL_COND_EQ;
	case ICC_G: return R_ANAL_COND_GT;
	case ICC_GE: return R_ANAL_COND_GE;
	case ICC_GU: return R_ANAL_COND_GT;
	case ICC_L: return R_ANAL_COND_LT;
	case ICC_LE: return R_ANAL_COND_LE;
	case ICC_LEU: return R_ANAL_COND_LE;
	case ICC_N: return R_ANAL_COND_NEVER;
	case ICC_NE: return R_ANAL_COND_NE;
	case ICC_NEG:
	case ICC_POS:
	case ICC_VC:
	case ICC_VS:
	default: return R_ANAL_COND_UNKNOWN;
	}
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
          const int cond = 100;
        
          int benchRet = icc_to_r_cond(cond);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const int cond = 255;
        
          int benchRet = icc_to_r_cond(cond);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int cond = 10;
        
          int benchRet = icc_to_r_cond(cond);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 3:
    {
          const int cond = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = icc_to_r_cond(cond);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
