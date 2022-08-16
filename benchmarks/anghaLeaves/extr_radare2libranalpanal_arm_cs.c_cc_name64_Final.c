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
typedef  int arm64_cc ;

/* Variables and functions */
#define  ARM64_CC_EQ 141 
#define  ARM64_CC_GE 140 
#define  ARM64_CC_GT 139 
#define  ARM64_CC_HI 138 
#define  ARM64_CC_HS 137 
#define  ARM64_CC_LE 136 
#define  ARM64_CC_LO 135 
#define  ARM64_CC_LS 134 
#define  ARM64_CC_LT 133 
#define  ARM64_CC_MI 132 
#define  ARM64_CC_NE 131 
#define  ARM64_CC_PL 130 
#define  ARM64_CC_VC 129 
#define  ARM64_CC_VS 128 

__attribute__((used)) static const char *cc_name64(arm64_cc cc) {
	switch (cc) {
	case ARM64_CC_EQ: // Equal
		return "eq";
	case ARM64_CC_NE: // Not equal:                 Not equal, or unordered
		return "ne";
	case ARM64_CC_HS: // Unsigned higher or same:   >, ==, or unordered
		return "hs";
	case ARM64_CC_LO: // Unsigned lower or same:    Less than
		return "lo";
	case ARM64_CC_MI: // Minus, negative:           Less than
		return "mi";
	case ARM64_CC_PL: // Plus, positive or zero:    >, ==, or unordered
		return "pl";
	case ARM64_CC_VS: // Overflow:                  Unordered
		return "vs";
	case ARM64_CC_VC: // No overflow:               Ordered
		return "vc";
	case ARM64_CC_HI: // Unsigned higher:           Greater than, or unordered
		return "hi";
	case ARM64_CC_LS: // Unsigned lower or same:    Less than or equal
		return "ls";
	case ARM64_CC_GE: // Greater than or equal:     Greater than or equal
		return "ge";
	case ARM64_CC_LT: // Less than:                 Less than, or unordered
		return "lt";
	case ARM64_CC_GT: // Signed greater than:       Greater than
		return "gt";
	case ARM64_CC_LE: // Signed less than or equal: <, ==, or unordered
		return "le";
	default:
		return "";
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
          int cc = 100;
          const char * benchRet = cc_name64(cc);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int cc = 255;
          const char * benchRet = cc_name64(cc);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cc = 10;
          const char * benchRet = cc_name64(cc);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
