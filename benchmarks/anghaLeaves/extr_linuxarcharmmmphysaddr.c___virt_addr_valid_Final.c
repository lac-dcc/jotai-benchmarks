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
 unsigned long MAX_DMA_ADDRESS ; 
 unsigned long PAGE_OFFSET ; 
 scalar_t__ high_memory ; 

__attribute__((used)) static inline bool __virt_addr_valid(unsigned long x)
{
	/*
	 * high_memory does not get immediately defined, and there
	 * are early callers of __pa() against PAGE_OFFSET
	 */
	if (!high_memory && x >= PAGE_OFFSET)
		return true;

	if (high_memory && x >= PAGE_OFFSET && x < (unsigned long)high_memory)
		return true;

	/*
	 * MAX_DMA_ADDRESS is a virtual address that may not correspond to an
	 * actual physical address. Enough code relies on __pa(MAX_DMA_ADDRESS)
	 * that we just need to work around it and always return true.
	 */
	if (x == MAX_DMA_ADDRESS)
		return true;

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
          unsigned long x = 100;
          int benchRet = __virt_addr_valid(x);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long x = 255;
          int benchRet = __virt_addr_valid(x);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long x = 10;
          int benchRet = __virt_addr_valid(x);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
