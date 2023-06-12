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
typedef  int time64_t ;

/* Variables and functions */

time64_t mktime64(const unsigned int year0, const unsigned int mon0,
		const unsigned int day, const unsigned int hour,
		const unsigned int min, const unsigned int sec)
{
	unsigned int mon = mon0, year = year0;

	/* 1..12 -> 11,12,1..10 */
	if (0 >= (int) (mon -= 2)) {
		mon += 12;	/* Puts Feb last since it has leap day */
		year -= 1;
	}

	return ((((time64_t)
		  (year/4 - year/100 + year/400 + 367*mon/12 + day) +
		  year*365 - 719499
	    )*24 + hour /* now have hours - midnight tomorrow handled here */
	  )*60 + min /* now have minutes */
	)*60 + sec; /* finally seconds */
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
          // static_instructions_O0 : 56
          // dynamic_instructions_O0 : 56
          // ------------------------------- 
          // static_instructions_O1 : 35
          // dynamic_instructions_O1 : 35
          // ------------------------------- 
          // static_instructions_O2 : 35
          // dynamic_instructions_O2 : 35
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 35
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 35
          // ------------------------------- 
          // static_instructions_Os : 35
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 47
          // dynamic_instructions_Oz : 47
          // ------------------------------- 

          const unsigned int year0 = 100;
        
          const unsigned int mon0 = 100;
        
          const unsigned int day = 100;
        
          const unsigned int hour = 100;
        
          const unsigned int min = 100;
        
          const unsigned int sec = 100;
        
          int benchRet = mktime64(year0,mon0,day,hour,min,sec);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 56
          // dynamic_instructions_O0 : 56
          // ------------------------------- 
          // static_instructions_O1 : 35
          // dynamic_instructions_O1 : 35
          // ------------------------------- 
          // static_instructions_O2 : 35
          // dynamic_instructions_O2 : 35
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 35
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 35
          // ------------------------------- 
          // static_instructions_Os : 35
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 47
          // dynamic_instructions_Oz : 47
          // ------------------------------- 

          const unsigned int year0 = 255;
        
          const unsigned int mon0 = 255;
        
          const unsigned int day = 255;
        
          const unsigned int hour = 255;
        
          const unsigned int min = 255;
        
          const unsigned int sec = 255;
        
          int benchRet = mktime64(year0,mon0,day,hour,min,sec);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 56
          // dynamic_instructions_O0 : 56
          // ------------------------------- 
          // static_instructions_O1 : 35
          // dynamic_instructions_O1 : 35
          // ------------------------------- 
          // static_instructions_O2 : 35
          // dynamic_instructions_O2 : 35
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 35
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 35
          // ------------------------------- 
          // static_instructions_Os : 35
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 47
          // dynamic_instructions_Oz : 47
          // ------------------------------- 

          const unsigned int year0 = 10;
        
          const unsigned int mon0 = 10;
        
          const unsigned int day = 10;
        
          const unsigned int hour = 10;
        
          const unsigned int min = 10;
        
          const unsigned int sec = 10;
        
          int benchRet = mktime64(year0,mon0,day,hour,min,sec);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 62
          // dynamic_instructions_O0 : 62
          // ------------------------------- 
          // static_instructions_O1 : 35
          // dynamic_instructions_O1 : 35
          // ------------------------------- 
          // static_instructions_O2 : 35
          // dynamic_instructions_O2 : 35
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 35
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 35
          // ------------------------------- 
          // static_instructions_Os : 35
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 47
          // dynamic_instructions_Oz : 47
          // ------------------------------- 

          const unsigned int year0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          const unsigned int mon0 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          const unsigned int day = ((-2 * (next_i()%2)) + 1) * next_i();
        
          const unsigned int hour = ((-2 * (next_i()%2)) + 1) * next_i();
        
          const unsigned int min = ((-2 * (next_i()%2)) + 1) * next_i();
        
          const unsigned int sec = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = mktime64(year0,mon0,day,hour,min,sec);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
