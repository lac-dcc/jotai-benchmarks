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
       0            empty\n\
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
typedef  int int64_t ;
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static int
dtrace_aggregate_llquantize_bucket(int16_t factor, int16_t low, int16_t high,
                                   int16_t nsteps, int64_t value)
{
	int64_t this = 1, last, next;
	int base = 1, order;

	for (order = 0; order < low; ++order)
		this *= factor;

	/*
	 * If our value is less than our factor taken to the power of the
	 * low order of magnitude, it goes into the zeroth bucket.
	 */
	if (value < this)
		return 0;
	else
		last = this;

	for (this *= factor; order <= high; ++order) {
		int nbuckets = this > nsteps ? nsteps : this;

		/*
		 * We should not generally get log/linear quantizations
		 * with a high magnitude that allows 64-bits to
		 * overflow, but we nonetheless protect against this
		 * by explicitly checking for overflow, and clamping
		 * our value accordingly.
		 */
		next = this * factor;
		if (next < this) {
			value = this - 1;
		}

		/*
		 * If our value lies within this order of magnitude,
		 * determine its position by taking the offset within
		 * the order of magnitude, dividing by the bucket
		 * width, and adding to our (accumulated) base.
		 */
		if (value < this) {
			return (base + (value - last) / (this / nbuckets));
		}

		base += nbuckets - (nbuckets / factor);
		last = this;
		this = next;
	}

	/*
	 * Our value is greater than or equal to our factor taken to the
	 * power of one plus the high magnitude -- return the top bucket.
	 */
	return base;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // empty
    case 0:
    {
          int factor = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int low = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int high = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int nsteps = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int value = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = dtrace_aggregate_llquantize_bucket(factor,low,high,nsteps,value);
          printf("%d\n", benchRet); 
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
