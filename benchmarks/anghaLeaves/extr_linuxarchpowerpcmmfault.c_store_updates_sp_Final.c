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
#define  OP_31 140 
#define  OP_31_XOP_STBUX 139 
#define  OP_31_XOP_STDUX 138 
#define  OP_31_XOP_STFDUX 137 
#define  OP_31_XOP_STFSUX 136 
#define  OP_31_XOP_STHUX 135 
#define  OP_31_XOP_STWUX 134 
#define  OP_STBU 133 
#define  OP_STD 132 
#define  OP_STFDU 131 
#define  OP_STFSU 130 
#define  OP_STHU 129 
#define  OP_STWU 128 

__attribute__((used)) static bool store_updates_sp(unsigned int inst)
{
	/* check for 1 in the rA field */
	if (((inst >> 16) & 0x1f) != 1)
		return false;
	/* check major opcode */
	switch (inst >> 26) {
	case OP_STWU:
	case OP_STBU:
	case OP_STHU:
	case OP_STFSU:
	case OP_STFDU:
		return true;
	case OP_STD:	/* std or stdu */
		return (inst & 3) == 1;
	case OP_31:
		/* check minor opcode */
		switch ((inst >> 1) & 0x3ff) {
		case OP_31_XOP_STDUX:
		case OP_31_XOP_STWUX:
		case OP_31_XOP_STBUX:
		case OP_31_XOP_STHUX:
		case OP_31_XOP_STFSUX:
		case OP_31_XOP_STFDUX:
			return true;
		}
	}
	return false;
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
          unsigned int inst = 100;
          int benchRet = store_updates_sp(inst);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int inst = 255;
          int benchRet = store_updates_sp(inst);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int inst = 10;
          int benchRet = store_updates_sp(inst);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
