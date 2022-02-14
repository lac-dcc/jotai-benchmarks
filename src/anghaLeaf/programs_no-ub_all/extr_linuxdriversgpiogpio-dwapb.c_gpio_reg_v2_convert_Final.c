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
typedef  unsigned int u32 ;

/* Variables and functions */
#define  GPIO_INTMASK 132 
 unsigned int GPIO_INTMASK_V2 ; 
#define  GPIO_INTSTATUS 131 
 unsigned int GPIO_INTSTATUS_V2 ; 
#define  GPIO_INTTYPE_LEVEL 130 
 unsigned int GPIO_INTTYPE_LEVEL_V2 ; 
#define  GPIO_INT_POLARITY 129 
 unsigned int GPIO_INT_POLARITY_V2 ; 
#define  GPIO_PORTA_EOI 128 
 unsigned int GPIO_PORTA_EOI_V2 ; 

__attribute__((used)) static inline u32 gpio_reg_v2_convert(unsigned int offset)
{
	switch (offset) {
	case GPIO_INTMASK:
		return GPIO_INTMASK_V2;
	case GPIO_INTTYPE_LEVEL:
		return GPIO_INTTYPE_LEVEL_V2;
	case GPIO_INT_POLARITY:
		return GPIO_INT_POLARITY_V2;
	case GPIO_INTSTATUS:
		return GPIO_INTSTATUS_V2;
	case GPIO_PORTA_EOI:
		return GPIO_PORTA_EOI_V2;
	}

	return offset;
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
          unsigned int offset = 255;
          unsigned int benchRet = gpio_reg_v2_convert(offset);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
