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
typedef  int /*<<< orphan*/  int8 ;

/* Variables and functions */
 unsigned int const MASK_ROUNDING_MODE ; 
#define  ROUND_TO_MINUS_INFINITY 131 
#define  ROUND_TO_NEAREST 130 
#define  ROUND_TO_PLUS_INFINITY 129 
#define  ROUND_TO_ZERO 128 
 int /*<<< orphan*/  float_round_down ; 
 int /*<<< orphan*/  float_round_nearest_even ; 
 int /*<<< orphan*/  float_round_to_zero ; 
 int /*<<< orphan*/  float_round_up ; 

int8 SetRoundingMode(const unsigned int opcode)
{
	switch (opcode & MASK_ROUNDING_MODE) {
	default:
	case ROUND_TO_NEAREST:
		return float_round_nearest_even;

	case ROUND_TO_PLUS_INFINITY:
		return float_round_up;

	case ROUND_TO_MINUS_INFINITY:
		return float_round_down;

	case ROUND_TO_ZERO:
		return float_round_to_zero;
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

    // big-arr
    case 0:
    {
          const unsigned int opcode = 255;
          int benchRet = SetRoundingMode(opcode);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
