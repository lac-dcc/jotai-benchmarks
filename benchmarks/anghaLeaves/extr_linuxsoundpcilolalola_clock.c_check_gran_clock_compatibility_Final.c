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
struct lola {int /*<<< orphan*/  granularity; } ;

/* Variables and functions */
 unsigned int LOLA_GRANULARITY_MAX ; 
 unsigned int LOLA_GRANULARITY_MIN ; 
 unsigned int LOLA_GRANULARITY_STEP ; 
 unsigned int LOLA_MAXFREQ_AT_GRANULARITY_BELOW_MAX ; 
 unsigned int LOLA_MAXFREQ_AT_GRANULARITY_MIN ; 

__attribute__((used)) static bool check_gran_clock_compatibility(struct lola *chip,
					   unsigned int val,
					   unsigned int freq)
{
	if (!chip->granularity)
		return true;

	if (val < LOLA_GRANULARITY_MIN || val > LOLA_GRANULARITY_MAX ||
	    (val % LOLA_GRANULARITY_STEP) != 0)
		return false;

	if (val == LOLA_GRANULARITY_MIN) {
		if (freq > LOLA_MAXFREQ_AT_GRANULARITY_MIN)
			return false;
	} else if (val < LOLA_GRANULARITY_MAX) {
		if (freq > LOLA_MAXFREQ_AT_GRANULARITY_BELOW_MAX)
			return false;
	}
	return true;
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
          unsigned int val = 100;
          unsigned int freq = 100;
          int _len_chip0 = 1;
          struct lola * chip = (struct lola *) malloc(_len_chip0*sizeof(struct lola));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].granularity = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = check_gran_clock_compatibility(chip,val,freq);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
