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
#define  HEX_SUB_REGPAIR_R17_R16 135 
#define  HEX_SUB_REGPAIR_R19_R18 134 
#define  HEX_SUB_REGPAIR_R1_R0 133 
#define  HEX_SUB_REGPAIR_R21_R20 132 
#define  HEX_SUB_REGPAIR_R23_R22 131 
#define  HEX_SUB_REGPAIR_R3_R2 130 
#define  HEX_SUB_REGPAIR_R5_R4 129 
#define  HEX_SUB_REGPAIR_R7_R6 128 

char* hex_get_sub_regpair(int opreg)
{
	switch (opreg) {
		case HEX_SUB_REGPAIR_R1_R0:
			return "R1:R0";
		case HEX_SUB_REGPAIR_R3_R2:
			return "R3:R2";
		case HEX_SUB_REGPAIR_R5_R4:
			return "R5:R4";
		case HEX_SUB_REGPAIR_R7_R6:
			return "R7:R6";
		case HEX_SUB_REGPAIR_R17_R16:
			return "R17:R16";
		case HEX_SUB_REGPAIR_R19_R18:
			return "R19:R18";
		case HEX_SUB_REGPAIR_R21_R20:
			return "R21:R20";
		case HEX_SUB_REGPAIR_R23_R22:
			return "R23:R22";
		default:
			return "<err>";
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
          int opreg = 100;
          char * benchRet = hex_get_sub_regpair(opreg);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int opreg = 255;
          char * benchRet = hex_get_sub_regpair(opreg);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int opreg = 10;
          char * benchRet = hex_get_sub_regpair(opreg);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
