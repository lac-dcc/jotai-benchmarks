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
typedef  int ut8 ;

/* Variables and functions */

__attribute__((used)) static ut8 z80_ed_branch_index_res (ut8 hex) {
	if (hex > 0x3f && 0x4c > hex)
		return hex-0x40;
	if (hex == 0x4d)
		return 0xc;
	if (hex > 0x4d && 0x54 > hex)
		return hex-0x42;
	if (hex > 0x55 && 0x5c > hex)
		return hex-0x44;
	if (hex > 0x5d && 0x63 > hex)
		return hex-0x46;
	if (hex > 0x66 && 0x6b > hex)
		return hex-0x4a;
	if (hex > 0x6e && 0x74 > hex)
		return hex-0x4e;
	if (hex > 0x77 && 0x7c > hex)
		return hex-0x52;
	if (hex > 0x9f && 0xa4 > hex)
		return hex-0x76;
	if (hex > 0xa7 && 0xac > hex)
		return hex-0x7a;
	if (hex > 0xaf && 0xb4 > hex)
		return hex-0x7e;
	if (hex > 0xb7 && 0xbc > hex)
		return hex-0x82;
	return 0x3b;
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
          int hex = 100;
        
          int benchRet = z80_ed_branch_index_res(hex);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int hex = 255;
        
          int benchRet = z80_ed_branch_index_res(hex);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int hex = 10;
        
          int benchRet = z80_ed_branch_index_res(hex);
          printf("%d\n", benchRet); 
        
        break;
    }
    // empty
    case 3:
    {
          int hex = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = z80_ed_branch_index_res(hex);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
