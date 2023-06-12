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
typedef  int u32 ;
struct illinois {int rtt_above; scalar_t__ rtt_low; int alpha; } ;

/* Variables and functions */
 int ALPHA_MAX ; 
 int ALPHA_MIN ; 
 scalar_t__ theta ; 

__attribute__((used)) static u32 alpha(struct illinois *ca, u32 da, u32 dm)
{
	u32 d1 = dm / 100;	/* Low threshold */

	if (da <= d1) {
		/* If never got out of low delay zone, then use max */
		if (!ca->rtt_above)
			return ALPHA_MAX;

		/* Wait for 5 good RTT's before allowing alpha to go alpha max.
		 * This prevents one good RTT from causing sudden window increase.
		 */
		if (++ca->rtt_low < theta)
			return ca->alpha;

		ca->rtt_low = 0;
		ca->rtt_above = 0;
		return ALPHA_MAX;
	}

	ca->rtt_above = 1;

	/*
	 * Based on:
	 *
	 *      (dm - d1) amin amax
	 * k1 = -------------------
	 *         amax - amin
	 *
	 *       (dm - d1) amin
	 * k2 = ----------------  - d1
	 *        amax - amin
	 *
	 *             k1
	 * alpha = ----------
	 *          k2 + da
	 */

	dm -= d1;
	da -= d1;
	return (dm * ALPHA_MAX) /
		(dm + (da  * (ALPHA_MAX - ALPHA_MIN)) / ALPHA_MIN);
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
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int da = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int dm = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_ca0 = 1;
          struct illinois * ca = (struct illinois *) malloc(_len_ca0*sizeof(struct illinois));
          for(int _i0 = 0; _i0 < _len_ca0; _i0++) {
              ca[_i0].rtt_above = ((-2 * (next_i()%2)) + 1) * next_i();
          ca[_i0].rtt_low = ((-2 * (next_i()%2)) + 1) * next_i();
          ca[_i0].alpha = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = alpha(ca,da,dm);
          printf("%d\n", benchRet); 
          free(ca);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
