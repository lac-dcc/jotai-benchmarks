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
typedef  int u8 ;

/* Variables and functions */

__attribute__((used)) static inline u8 swap_bits_in_byte(u8 b)
{
#define R_SHIFT_4_MASK  0xc0 /* Bits 6 and 7, right shift 4 */
#define R_SHIFT_2_MASK  0x28 /* (After right shift 4) Bits 3 and 5,
				  right shift 2 */
#define R_SHIFT_1_MASK  0x1e /* (After right shift 2) Bits 1-4,
				  right shift 1 */
#define L_SHIFT_4_MASK  0x03 /* Bits 0 and 1, left shift 4 */
#define L_SHIFT_2_MASK  0x14 /* (After left shift 4) Bits 2 and 4,
				  left shift 2 */
#define L_SHIFT_1_MASK  0x78 /* (After left shift 1) Bits 3-6,
				  left shift 1 */

	u8 n1;
	u8 n2;

	/* Swap most significant nibble */
	/* Right shift 4, bits 6 and 7 */
	n1 = ((b  & R_SHIFT_4_MASK) >> 4) | (b  & ~(R_SHIFT_4_MASK >> 4));
	/* Right shift 2, bits 3 and 5 */
	n1 = ((n1 & R_SHIFT_2_MASK) >> 2) | (n1 & ~(R_SHIFT_2_MASK >> 2));
	/* Right shift 1, bits 1-4 */
	n1 = (n1  & R_SHIFT_1_MASK) >> 1;

	/* Swap least significant nibble */
	/* Left shift 4, bits 0 and 1 */
	n2 = ((b  & L_SHIFT_4_MASK) << 4) | (b  & ~(L_SHIFT_4_MASK << 4));
	/* Left shift 2, bits 2 and 4 */
	n2 = ((n2 & L_SHIFT_2_MASK) << 2) | (n2 & ~(L_SHIFT_2_MASK << 2));
	/* Left shift 1, bits 3-6 */
	n2 = (n2  & L_SHIFT_1_MASK) << 1;

	return n1 | n2;
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
          int b = 100;
          int benchRet = swap_bits_in_byte(b);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int b = 255;
          int benchRet = swap_bits_in_byte(b);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int b = 10;
          int benchRet = swap_bits_in_byte(b);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
