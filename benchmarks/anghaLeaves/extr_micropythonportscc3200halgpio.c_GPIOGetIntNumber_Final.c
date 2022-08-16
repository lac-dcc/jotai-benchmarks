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
#define  GPIOA0_BASE 131 
#define  GPIOA1_BASE 130 
#define  GPIOA2_BASE 129 
#define  GPIOA3_BASE 128 
 unsigned int INT_GPIOA0 ; 
 unsigned int INT_GPIOA1 ; 
 unsigned int INT_GPIOA2 ; 
 unsigned int INT_GPIOA3 ; 

__attribute__((used)) static long
GPIOGetIntNumber(unsigned long ulPort)
{
    unsigned int ulInt;

    //
    // Determine the GPIO interrupt number for the given module.
    //
    switch(ulPort)
    {
        case GPIOA0_BASE:
        {
            ulInt = INT_GPIOA0;
            break;
        }

        case GPIOA1_BASE:
        {
            ulInt = INT_GPIOA1;
            break;
        }

        case GPIOA2_BASE:
        {
            ulInt = INT_GPIOA2;
            break;
        }

        case GPIOA3_BASE:
        {
            ulInt = INT_GPIOA3;
            break;
        }

        default:
        {
            return(-1);
        }
    }

    //
    // Return GPIO interrupt number.
    //
    return(ulInt);
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
          unsigned long ulPort = 100;
          long benchRet = GPIOGetIntNumber(ulPort);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long ulPort = 255;
          long benchRet = GPIOGetIntNumber(ulPort);
          printf("%ld\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long ulPort = 10;
          long benchRet = GPIOGetIntNumber(ulPort);
          printf("%ld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
