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

__attribute__((used)) static ut8 z80_fddd_branch_index_res (ut8 hex) {
	switch (hex) {
		case 0x9:
			return 0x0;
		case 0x19:
			return 0x1;
		case 0x21:
		case 0x22:
		case 0x23:
		case 0x24:
		case 0x25:
		case 0x26:
			return hex-0x1f;
		case 0x29:
		case 0x2a:
		case 0x2b:
		case 0x2c:
		case 0x2d:
		case 0x2e:
			return hex-0x21;
		case 0x34:
		case 0x35:
		case 0x36:
			return hex-0x26;
		case 0x39:
			return 0x11;
		case 0x44:
		case 0x45:
		case 0x46:
			return hex-0x32;
		case 0x4c:
		case 0x4d:
		case 0x4e:
			return hex-0x37;
		case 0x54:			//0x18
		case 0x55:
		case 0x56:
			return hex-0x3c;
		case 0x5c:
		case 0x5d:
		case 0x5e:			//0x1d
			return hex-0x41;
		case 0x60:
		case 0x61:
		case 0x62:
		case 0x63:
		case 0x64:
		case 0x65:
		case 0x66:
		case 0x67:
		case 0x68:
		case 0x69:
		case 0x6a:
		case 0x6b:
		case 0x6c:
		case 0x6d:
		case 0x6e:
		case 0x6f:
		case 0x70:
		case 0x71:
		case 0x72:
		case 0x73:
		case 0x74:
		case 0x75:
			return hex-0x42;
		case 0x77:
			return 0x34;
		case 0x7c:
		case 0x7d:
		case 0x7e:
			return hex-0x47;
		case 0x84:
		case 0x85:
		case 0x86:
			return hex-0x4c;
		case 0x8c:
		case 0x8d:
		case 0x8e:
			return hex-0x51;
		case 0x94:
		case 0x95:
		case 0x96:
			return hex-0x56;
		case 0x9c:
		case 0x9d:
		case 0x9e:
			return hex-0x5b;
		case 0xa4:
		case 0xa5:
		case 0xa6:
			return hex-0x60;
		case 0xac:
		case 0xad:
		case 0xae:
			return hex-0x65;
		case 0xb4:
		case 0xb5:
		case 0xb6:
			return hex-0x6a;
		case 0xbc:
		case 0xbd:
		case 0xbe:
			return hex-0x6f;
		case 0xcb:
			return 0x50;
		case 0xe1:
			return 0x51;
		case 0xe3:
			return 0x52;
		case 0xe5:
			return 0x53;
		case 0xe9:
			return 0x54;
		case 0xf9:
			return 0x55;
	}
	return 0x56;
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
          int hex = 100;
          int benchRet = z80_fddd_branch_index_res(hex);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int hex = 255;
          int benchRet = z80_fddd_branch_index_res(hex);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hex = 10;
          int benchRet = z80_fddd_branch_index_res(hex);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
