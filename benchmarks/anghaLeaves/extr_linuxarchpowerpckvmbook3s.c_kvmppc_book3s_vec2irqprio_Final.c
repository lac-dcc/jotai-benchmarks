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
 unsigned int BOOK3S_IRQPRIO_ALIGNMENT ; 
 unsigned int BOOK3S_IRQPRIO_ALTIVEC ; 
 unsigned int BOOK3S_IRQPRIO_DATA_SEGMENT ; 
 unsigned int BOOK3S_IRQPRIO_DATA_STORAGE ; 
 unsigned int BOOK3S_IRQPRIO_DEBUG ; 
 unsigned int BOOK3S_IRQPRIO_DECREMENTER ; 
 unsigned int BOOK3S_IRQPRIO_EXTERNAL ; 
 unsigned int BOOK3S_IRQPRIO_EXTERNAL_LEVEL ; 
 unsigned int BOOK3S_IRQPRIO_FAC_UNAVAIL ; 
 unsigned int BOOK3S_IRQPRIO_FP_UNAVAIL ; 
 unsigned int BOOK3S_IRQPRIO_INST_SEGMENT ; 
 unsigned int BOOK3S_IRQPRIO_INST_STORAGE ; 
 unsigned int BOOK3S_IRQPRIO_MACHINE_CHECK ; 
 unsigned int BOOK3S_IRQPRIO_MAX ; 
 unsigned int BOOK3S_IRQPRIO_PROGRAM ; 
 unsigned int BOOK3S_IRQPRIO_SYSCALL ; 
 unsigned int BOOK3S_IRQPRIO_SYSTEM_RESET ; 
 unsigned int BOOK3S_IRQPRIO_VSX ; 

__attribute__((used)) static int kvmppc_book3s_vec2irqprio(unsigned int vec)
{
	unsigned int prio;

	switch (vec) {
	case 0x100: prio = BOOK3S_IRQPRIO_SYSTEM_RESET;		break;
	case 0x200: prio = BOOK3S_IRQPRIO_MACHINE_CHECK;	break;
	case 0x300: prio = BOOK3S_IRQPRIO_DATA_STORAGE;		break;
	case 0x380: prio = BOOK3S_IRQPRIO_DATA_SEGMENT;		break;
	case 0x400: prio = BOOK3S_IRQPRIO_INST_STORAGE;		break;
	case 0x480: prio = BOOK3S_IRQPRIO_INST_SEGMENT;		break;
	case 0x500: prio = BOOK3S_IRQPRIO_EXTERNAL;		break;
	case 0x501: prio = BOOK3S_IRQPRIO_EXTERNAL_LEVEL;	break;
	case 0x600: prio = BOOK3S_IRQPRIO_ALIGNMENT;		break;
	case 0x700: prio = BOOK3S_IRQPRIO_PROGRAM;		break;
	case 0x800: prio = BOOK3S_IRQPRIO_FP_UNAVAIL;		break;
	case 0x900: prio = BOOK3S_IRQPRIO_DECREMENTER;		break;
	case 0xc00: prio = BOOK3S_IRQPRIO_SYSCALL;		break;
	case 0xd00: prio = BOOK3S_IRQPRIO_DEBUG;		break;
	case 0xf20: prio = BOOK3S_IRQPRIO_ALTIVEC;		break;
	case 0xf40: prio = BOOK3S_IRQPRIO_VSX;			break;
	case 0xf60: prio = BOOK3S_IRQPRIO_FAC_UNAVAIL;		break;
	default:    prio = BOOK3S_IRQPRIO_MAX;			break;
	}

	return prio;
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
          unsigned int vec = 100;
          int benchRet = kvmppc_book3s_vec2irqprio(vec);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int vec = 255;
          int benchRet = kvmppc_book3s_vec2irqprio(vec);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int vec = 10;
          int benchRet = kvmppc_book3s_vec2irqprio(vec);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
