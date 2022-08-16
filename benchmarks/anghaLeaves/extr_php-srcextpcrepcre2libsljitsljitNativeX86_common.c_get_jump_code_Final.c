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
typedef  int sljit_u8 ;
typedef  int sljit_s32 ;

/* Variables and functions */
#define  SLJIT_EQUAL 149 
#define  SLJIT_EQUAL_F64 148 
#define  SLJIT_GREATER 147 
#define  SLJIT_GREATER_EQUAL 146 
#define  SLJIT_GREATER_EQUAL_F64 145 
#define  SLJIT_GREATER_F64 144 
#define  SLJIT_LESS 143 
#define  SLJIT_LESS_EQUAL 142 
#define  SLJIT_LESS_EQUAL_F64 141 
#define  SLJIT_LESS_F64 140 
#define  SLJIT_MUL_NOT_OVERFLOW 139 
#define  SLJIT_MUL_OVERFLOW 138 
#define  SLJIT_NOT_EQUAL 137 
#define  SLJIT_NOT_EQUAL_F64 136 
#define  SLJIT_NOT_OVERFLOW 135 
#define  SLJIT_ORDERED_F64 134 
#define  SLJIT_OVERFLOW 133 
#define  SLJIT_SIG_GREATER 132 
#define  SLJIT_SIG_GREATER_EQUAL 131 
#define  SLJIT_SIG_LESS 130 
#define  SLJIT_SIG_LESS_EQUAL 129 
#define  SLJIT_UNORDERED_F64 128 

__attribute__((used)) static sljit_u8 get_jump_code(sljit_s32 type)
{
	switch (type) {
	case SLJIT_EQUAL:
	case SLJIT_EQUAL_F64:
		return 0x84 /* je */;

	case SLJIT_NOT_EQUAL:
	case SLJIT_NOT_EQUAL_F64:
		return 0x85 /* jne */;

	case SLJIT_LESS:
	case SLJIT_LESS_F64:
		return 0x82 /* jc */;

	case SLJIT_GREATER_EQUAL:
	case SLJIT_GREATER_EQUAL_F64:
		return 0x83 /* jae */;

	case SLJIT_GREATER:
	case SLJIT_GREATER_F64:
		return 0x87 /* jnbe */;

	case SLJIT_LESS_EQUAL:
	case SLJIT_LESS_EQUAL_F64:
		return 0x86 /* jbe */;

	case SLJIT_SIG_LESS:
		return 0x8c /* jl */;

	case SLJIT_SIG_GREATER_EQUAL:
		return 0x8d /* jnl */;

	case SLJIT_SIG_GREATER:
		return 0x8f /* jnle */;

	case SLJIT_SIG_LESS_EQUAL:
		return 0x8e /* jle */;

	case SLJIT_OVERFLOW:
	case SLJIT_MUL_OVERFLOW:
		return 0x80 /* jo */;

	case SLJIT_NOT_OVERFLOW:
	case SLJIT_MUL_NOT_OVERFLOW:
		return 0x81 /* jno */;

	case SLJIT_UNORDERED_F64:
		return 0x8a /* jp */;

	case SLJIT_ORDERED_F64:
		return 0x8b /* jpo */;
	}
	return 0;
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
          int type = 100;
          int benchRet = get_jump_code(type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int benchRet = get_jump_code(type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int benchRet = get_jump_code(type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
