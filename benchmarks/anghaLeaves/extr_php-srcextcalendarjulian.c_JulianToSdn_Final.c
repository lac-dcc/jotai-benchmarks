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
typedef  int zend_long ;

/* Variables and functions */
 int DAYS_PER_4_YEARS ; 
 int DAYS_PER_5_MONTHS ; 
 int JULIAN_SDN_OFFSET ; 

zend_long JulianToSdn(
						int inputYear,
						int inputMonth,
						int inputDay)
{
	zend_long year;
	int month;

	/* check for invalid dates */
	if (inputYear == 0 || inputYear < -4713 ||
		inputMonth <= 0 || inputMonth > 12 ||
		inputDay <= 0 || inputDay > 31) {
		return (0);
	}
	/* check for dates before SDN 1 (Jan 2, 4713 B.C.) */
	if (inputYear == -4713) {
		if (inputMonth == 1 && inputDay == 1) {
			return (0);
		}
	}
	/* Make year always a positive number. */
	if (inputYear < 0) {
		year = inputYear + 4801;
	} else {
		year = inputYear + 4800;
	}

	/* Adjust the start of the year. */
	if (inputMonth > 2) {
		month = inputMonth - 3;
	} else {
		month = inputMonth + 9;
		year--;
	}

	return ((year * DAYS_PER_4_YEARS) / 4
			+ (month * DAYS_PER_5_MONTHS + 2) / 5
			+ inputDay
			- JULIAN_SDN_OFFSET);
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
          int inputYear = 100;
          int inputMonth = 100;
          int inputDay = 100;
          int benchRet = JulianToSdn(inputYear,inputMonth,inputDay);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int inputYear = 255;
          int inputMonth = 255;
          int inputDay = 255;
          int benchRet = JulianToSdn(inputYear,inputMonth,inputDay);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int inputYear = 10;
          int inputMonth = 10;
          int inputDay = 10;
          int benchRet = JulianToSdn(inputYear,inputMonth,inputDay);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
