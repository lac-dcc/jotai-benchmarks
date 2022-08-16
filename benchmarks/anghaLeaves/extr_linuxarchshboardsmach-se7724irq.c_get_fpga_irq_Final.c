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
struct fpga_irq {int /*<<< orphan*/  base; int /*<<< orphan*/  mask; int /*<<< orphan*/  mraddr; int /*<<< orphan*/  sraddr; } ;

/* Variables and functions */
 int /*<<< orphan*/  IRQ0_BASE ; 
#define  IRQ0_IRQ 129 
 int /*<<< orphan*/  IRQ0_MASK ; 
 int /*<<< orphan*/  IRQ0_MR ; 
 int /*<<< orphan*/  IRQ0_SR ; 
 int /*<<< orphan*/  IRQ1_BASE ; 
#define  IRQ1_IRQ 128 
 int /*<<< orphan*/  IRQ1_MASK ; 
 int /*<<< orphan*/  IRQ1_MR ; 
 int /*<<< orphan*/  IRQ1_SR ; 
 int /*<<< orphan*/  IRQ2_BASE ; 
 int /*<<< orphan*/  IRQ2_MASK ; 
 int /*<<< orphan*/  IRQ2_MR ; 
 int /*<<< orphan*/  IRQ2_SR ; 

__attribute__((used)) static struct fpga_irq get_fpga_irq(unsigned int irq)
{
	struct fpga_irq set;

	switch (irq) {
	case IRQ0_IRQ:
		set.sraddr = IRQ0_SR;
		set.mraddr = IRQ0_MR;
		set.mask   = IRQ0_MASK;
		set.base   = IRQ0_BASE;
		break;
	case IRQ1_IRQ:
		set.sraddr = IRQ1_SR;
		set.mraddr = IRQ1_MR;
		set.mask   = IRQ1_MASK;
		set.base   = IRQ1_BASE;
		break;
	default:
		set.sraddr = IRQ2_SR;
		set.mraddr = IRQ2_MR;
		set.mask   = IRQ2_MASK;
		set.base   = IRQ2_BASE;
		break;
	}

	return set;
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
          unsigned int irq = 100;
          struct fpga_irq benchRet = get_fpga_irq(irq);
          printf("%d\n", benchRet.base);
          printf("%d\n", benchRet.mask);
          printf("%d\n", benchRet.mraddr);
          printf("%d\n", benchRet.sraddr);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int irq = 255;
          struct fpga_irq benchRet = get_fpga_irq(irq);
          printf("%d\n", benchRet.base);
          printf("%d\n", benchRet.mask);
          printf("%d\n", benchRet.mraddr);
          printf("%d\n", benchRet.sraddr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int irq = 10;
          struct fpga_irq benchRet = get_fpga_irq(irq);
          printf("%d\n", benchRet.base);
          printf("%d\n", benchRet.mask);
          printf("%d\n", benchRet.mraddr);
          printf("%d\n", benchRet.sraddr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
