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
typedef  scalar_t__ zend_long ;

/* Variables and functions */
 scalar_t__ DAYS_PER_4_YEARS ; 
 int DAYS_PER_MONTH ; 
 scalar_t__ FIRST_VALID ; 
 scalar_t__ FRENCH_SDN_OFFSET ; 
 scalar_t__ LAST_VALID ; 

void SdnToFrench(
					zend_long sdn,
					int *pYear,
					int *pMonth,
					int *pDay)
{
	zend_long temp;
	int dayOfYear;

	if (sdn < FIRST_VALID || sdn > LAST_VALID) {
		*pYear = 0;
		*pMonth = 0;
		*pDay = 0;
		return;
	}
	temp = (sdn - FRENCH_SDN_OFFSET) * 4 - 1;
	*pYear = temp / DAYS_PER_4_YEARS;
	dayOfYear = (temp % DAYS_PER_4_YEARS) / 4;
	*pMonth = dayOfYear / DAYS_PER_MONTH + 1;
	*pDay = dayOfYear % DAYS_PER_MONTH + 1;
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
          long sdn = 100;
          int _len_pYear0 = 1;
          int * pYear = (int *) malloc(_len_pYear0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pYear0; _i0++) {
            pYear[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pMonth0 = 1;
          int * pMonth = (int *) malloc(_len_pMonth0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pMonth0; _i0++) {
            pMonth[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDay0 = 1;
          int * pDay = (int *) malloc(_len_pDay0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pDay0; _i0++) {
            pDay[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SdnToFrench(sdn,pYear,pMonth,pDay);
          free(pYear);
          free(pMonth);
          free(pDay);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
