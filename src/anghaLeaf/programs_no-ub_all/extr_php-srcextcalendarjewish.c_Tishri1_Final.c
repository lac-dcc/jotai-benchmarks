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
 int AM3_11_20 ; 
 int AM9_32_43 ; 
 int FRIDAY ; 
 int MONDAY ; 
 int NOON ; 
 int SUNDAY ; 
 int TUESDAY ; 
 int WEDNESDAY ; 

__attribute__((used)) static zend_long Tishri1(
						   int metonicYear,
						   zend_long moladDay,
						   zend_long moladHalakim)
{
	zend_long tishri1;
	int dow;
	int leapYear;
	int lastWasLeapYear;

	tishri1 = moladDay;
	dow = tishri1 % 7;
	leapYear = metonicYear == 2 || metonicYear == 5 || metonicYear == 7
		|| metonicYear == 10 || metonicYear == 13 || metonicYear == 16
		|| metonicYear == 18;
	lastWasLeapYear = metonicYear == 3 || metonicYear == 6
		|| metonicYear == 8 || metonicYear == 11 || metonicYear == 14
		|| metonicYear == 17 || metonicYear == 0;

	/* Apply rules 2, 3 and 4. */
	if ((moladHalakim >= NOON) ||
		((!leapYear) && dow == TUESDAY && moladHalakim >= AM3_11_20) ||
		(lastWasLeapYear && dow == MONDAY && moladHalakim >= AM9_32_43)) {
		tishri1++;
		dow++;
		if (dow == 7) {
			dow = 0;
		}
	}
	/* Apply rule 1 after the others because it can cause an additional
	 * delay of one day. */
	if (dow == WEDNESDAY || dow == FRIDAY || dow == SUNDAY) {
		tishri1++;
	}
	return (tishri1);
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
          int metonicYear = 255;
          int moladDay = 255;
          int moladHalakim = 255;
          int benchRet = Tishri1(metonicYear,moladDay,moladHalakim);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
