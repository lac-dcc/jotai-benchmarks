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
typedef  int u32 ;
typedef  enum rc_proto { ____Placeholder_rc_proto } rc_proto ;

/* Variables and functions */
#define  RC_PROTO_NEC32 131 
#define  RC_PROTO_NECX 130 
#define  RC_PROTO_RC6_6A_32 129 
#define  RC_PROTO_RC6_MCE 128 

bool rc_validate_scancode(enum rc_proto proto, u32 scancode)
{
	switch (proto) {
	/*
	 * NECX has a 16-bit address; if the lower 8 bits match the upper
	 * 8 bits inverted, then the address would match regular nec.
	 */
	case RC_PROTO_NECX:
		if ((((scancode >> 16) ^ ~(scancode >> 8)) & 0xff) == 0)
			return false;
		break;
	/*
	 * NEC32 has a 16 bit address and 16 bit command. If the lower 8 bits
	 * of the command match the upper 8 bits inverted, then it would
	 * be either NEC or NECX.
	 */
	case RC_PROTO_NEC32:
		if ((((scancode >> 8) ^ ~scancode) & 0xff) == 0)
			return false;
		break;
	/*
	 * If the customer code (top 32-bit) is 0x800f, it is MCE else it
	 * is regular mode-6a 32 bit
	 */
	case RC_PROTO_RC6_MCE:
		if ((scancode & 0xffff0000) != 0x800f0000)
			return false;
		break;
	case RC_PROTO_RC6_6A_32:
		if ((scancode & 0xffff0000) == 0x800f0000)
			return false;
		break;
	default:
		break;
	}

	return true;
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
          enum rc_proto proto = 0;
          int scancode = 100;
          int benchRet = rc_validate_scancode(proto,scancode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum rc_proto proto = 0;
          int scancode = 255;
          int benchRet = rc_validate_scancode(proto,scancode);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum rc_proto proto = 0;
          int scancode = 10;
          int benchRet = rc_validate_scancode(proto,scancode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
