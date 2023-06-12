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
typedef  int GLuint ;

/* Variables and functions */

__attribute__((used)) static int nearestPower(GLuint value)
{
    int i;

    i = 1;

    /* Error! */
    if (value == 0) return -1;

    for (;;) {
	if (value == 1) {
	    return i;
	} else if (value == 3) {
	    return i*4;
	}
	value = value >> 1;
	i *= 2;
    }
}

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
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 78
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 44
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 44
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 44
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 44
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 47
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 47
          // ------------------------------- 

          int value = 100;
        
          int benchRet = nearestPower(value);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 90
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 50
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 50
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 50
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 50
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 54
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 54
          // ------------------------------- 

          int value = 255;
        
          int benchRet = nearestPower(value);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 51
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 29
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 29
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 29
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 30
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

          int value = 10;
        
          int benchRet = nearestPower(value);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
