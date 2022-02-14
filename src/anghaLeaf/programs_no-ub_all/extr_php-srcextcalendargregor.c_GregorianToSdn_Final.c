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
typedef  int zend_long ;

/* Variables and functions */
 int DAYS_PER_400_YEARS ; 
 int DAYS_PER_4_YEARS ; 
 int DAYS_PER_5_MONTHS ; 
 int GREGOR_SDN_OFFSET ; 

zend_long GregorianToSdn(
						   int inputYear,
						   int inputMonth,
						   int inputDay)
{
	zend_long year;
	int month;

	/* check for invalid dates */
	if (inputYear == 0 || inputYear < -4714 ||
		inputMonth <= 0 || inputMonth > 12 ||
		inputDay <= 0 || inputDay > 31) {
		return (0);
	}
	/* check for dates before SDN 1 (Nov 25, 4714 B.C.) */
	if (inputYear == -4714) {
		if (inputMonth < 11) {
			return (0);
		}
		if (inputMonth == 11 && inputDay < 25) {
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

	return (((year / 100) * DAYS_PER_400_YEARS) / 4
			+ ((year % 100) * DAYS_PER_4_YEARS) / 4
			+ (month * DAYS_PER_5_MONTHS + 2) / 5
			+ inputDay
			- GREGOR_SDN_OFFSET);
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
          int inputYear = 255;
          int inputMonth = 255;
          int inputDay = 255;
          int benchRet = GregorianToSdn(inputYear,inputMonth,inputDay);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
