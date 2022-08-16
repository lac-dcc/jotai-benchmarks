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
typedef  int /*<<< orphan*/  u64 ;

/* Variables and functions */
 int /*<<< orphan*/  I40E_FLEX_50_MASK ; 
 int /*<<< orphan*/  I40E_FLEX_51_MASK ; 
 int /*<<< orphan*/  I40E_FLEX_52_MASK ; 
 int /*<<< orphan*/  I40E_FLEX_53_MASK ; 
 int /*<<< orphan*/  I40E_FLEX_54_MASK ; 
 int /*<<< orphan*/  I40E_FLEX_55_MASK ; 
 int /*<<< orphan*/  I40E_FLEX_56_MASK ; 
 int /*<<< orphan*/  I40E_FLEX_57_MASK ; 

__attribute__((used)) static u64 i40e_pit_index_to_mask(int pit_index)
{
	switch (pit_index) {
	case 0:
		return I40E_FLEX_50_MASK;
	case 1:
		return I40E_FLEX_51_MASK;
	case 2:
		return I40E_FLEX_52_MASK;
	case 3:
		return I40E_FLEX_53_MASK;
	case 4:
		return I40E_FLEX_54_MASK;
	case 5:
		return I40E_FLEX_55_MASK;
	case 6:
		return I40E_FLEX_56_MASK;
	case 7:
		return I40E_FLEX_57_MASK;
	default:
		return 0;
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
          int pit_index = 100;
          int benchRet = i40e_pit_index_to_mask(pit_index);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int pit_index = 255;
          int benchRet = i40e_pit_index_to_mask(pit_index);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int pit_index = 10;
          int benchRet = i40e_pit_index_to_mask(pit_index);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
