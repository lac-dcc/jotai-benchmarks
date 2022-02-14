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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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

bool is_offset_in_branch_range(long offset)
{
	/*
	 * Powerpc branch instruction is :
	 *
	 *  0         6                 30   31
	 *  +---------+----------------+---+---+
	 *  | opcode  |     LI         |AA |LK |
	 *  +---------+----------------+---+---+
	 *  Where AA = 0 and LK = 0
	 *
	 * LI is a signed 24 bits integer. The real branch offset is computed
	 * by: imm32 = SignExtend(LI:'0b00', 32);
	 *
	 * So the maximum forward branch should be:
	 *   (0x007fffff << 2) = 0x01fffffc =  0x1fffffc
	 * The maximum backward branch should be:
	 *   (0xff800000 << 2) = 0xfe000000 = -0x2000000
	 */
	return (offset >= -0x2000000 && offset <= 0x1fffffc && !(offset & 0x3));
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

    // big-arr
    case 0:
    {
          long offset = 255;
          int benchRet = is_offset_in_branch_range(offset);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
