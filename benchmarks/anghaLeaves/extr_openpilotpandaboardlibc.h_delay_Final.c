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
       3            empty\n\
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

void delay(int a) {
  volatile int i;
  for (i=0;i<a;i++);
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
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 809
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 509
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 509
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 410
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 410
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 508
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 508
          // ------------------------------- 

          int a = 100;
        
          delay(a);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 2049
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 1284
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 1284
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 1030
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 1030
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 1283
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 1283
          // ------------------------------- 

          int a = 255;
        
          delay(a);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 89
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 59
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 59
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 50
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 50
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 58
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 58
          // ------------------------------- 

          int a = 10;
        
          delay(a);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 9
          // dynamic_instructions_O2 : 9
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int a = ((-2 * (next_i()%2)) + 1) * next_i();
        
          delay(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
