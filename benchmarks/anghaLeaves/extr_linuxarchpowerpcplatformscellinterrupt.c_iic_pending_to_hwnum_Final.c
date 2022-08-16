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
struct cbe_iic_pending_bits {int source; int class; int flags; int prio; } ;
typedef  int irq_hw_number_t ;

/* Variables and functions */
 int CBE_IIC_IRQ_IPI ; 
 unsigned char IIC_IRQ_NODE_SHIFT ; 
 int IIC_IRQ_TYPE_IPI ; 

__attribute__((used)) static irq_hw_number_t iic_pending_to_hwnum(struct cbe_iic_pending_bits bits)
{
	unsigned char unit = bits.source & 0xf;
	unsigned char node = bits.source >> 4;
	unsigned char class = bits.class & 3;

	/* Decode IPIs */
	if (bits.flags & CBE_IIC_IRQ_IPI)
		return IIC_IRQ_TYPE_IPI | (bits.prio >> 4);
	else
		return (node << IIC_IRQ_NODE_SHIFT) | (class << 4) | unit;
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
          struct cbe_iic_pending_bits bits;
        bits.source = ((-2 * (next_i()%2)) + 1) * next_i();
        bits.class = ((-2 * (next_i()%2)) + 1) * next_i();
        bits.flags = ((-2 * (next_i()%2)) + 1) * next_i();
        bits.prio = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = iic_pending_to_hwnum(bits);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
