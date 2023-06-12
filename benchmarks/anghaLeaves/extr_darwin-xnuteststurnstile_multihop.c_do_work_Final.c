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

__attribute__((used)) static void do_work(int num)
{
	volatile int i = 3, count, c;

	for(count = 2; count <= num; ) {
		for(c = 2; c <= i; c++) {
			if(i%c == 0) {
				break;
			}
		}
		if(c == i) {
			count++;
		}
		i++;
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
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 380864
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 255350
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 255350
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 230267
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 230267
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 254711
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 254711
          // ------------------------------- 

          int num = 100;
        
          do_work(num);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 2922205
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 1952436
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 1952436
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 1758533
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 1758533
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 1950570
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 1950570
          // ------------------------------- 

          int num = 255;
        
          do_work(num);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 38
          // dynamic_instructions_O0 : 2398
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 1674
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 1674
          // ------------------------------- 
          // static_instructions_O3 : 30
          // dynamic_instructions_O3 : 1531
          // ------------------------------- 
          // static_instructions_Ofast : 30
          // dynamic_instructions_Ofast : 1531
          // ------------------------------- 
          // static_instructions_Os : 26
          // dynamic_instructions_Os : 1637
          // ------------------------------- 
          // static_instructions_Oz : 26
          // dynamic_instructions_Oz : 1637
          // ------------------------------- 

          int num = 10;
        
          do_work(num);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 10
          // dynamic_instructions_O0 : 10
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int num = ((-2 * (next_i()%2)) + 1) * next_i();
        
          do_work(num);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
