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

int
computeSignal (int exceptionVector)
{
  int sigval;
  switch (exceptionVector)
	{
	case 0:
	  sigval = 8;
	  break;					/* divide by zero */
	case 1:
	  sigval = 5;
	  break;					/* debug exception */
	case 3:
	  sigval = 5;
	  break;					/* breakpoint */
	case 4:
	  sigval = 16;
	  break;					/* into instruction (overflow) */
	case 5:
	  sigval = 16;
	  break;					/* bound instruction */
	case 6:
	  sigval = 4;
	  break;					/* Invalid opcode */
	case 7:
	  sigval = 8;
	  break;					/* coprocessor not available */
	case 8:
	  sigval = 7;
	  break;					/* double fault */
	case 9:
	  sigval = 11;
	  break;					/* coprocessor segment overrun */
	case 10:
	  sigval = 11;
	  break;					/* Invalid TSS */
	case 11:
	  sigval = 11;
	  break;					/* Segment not present */
	case 12:
	  sigval = 11;
	  break;					/* stack exception */
	case 13:
	  sigval = 11;
	  break;					/* general protection */
	case 14:
	  sigval = 11;
	  break;					/* page fault */
	case 16:
	  sigval = 7;
	  break;					/* coprocessor error */
	default:
	  sigval = 7;				/* "software generated" */
	}
  return (sigval);
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
          int exceptionVector = 100;
          int benchRet = computeSignal(exceptionVector);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int exceptionVector = 255;
          int benchRet = computeSignal(exceptionVector);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int exceptionVector = 10;
          int benchRet = computeSignal(exceptionVector);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
