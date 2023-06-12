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

/* Variables and functions */
 long BASE_FREQ ; 
 long HALF_BASE_FREQ ; 

__attribute__((used)) static int common_calc_clock(long freq, int min_m, int min_n1, int max_n1,
			     int min_n2, int max_n2, long freq_min,
			     long freq_max, unsigned char *mdiv,
			     unsigned char *ndiv)
{
	long diff, best_diff;
	unsigned int m;
	unsigned char n1, n2;
	unsigned char best_n1 = 16+2, best_n2 = 2, best_m = 125+2;

	best_diff = freq;

	for (n2 = min_n2; n2 <= max_n2; n2++) {
		for (n1 = min_n1+2; n1 <= max_n1+2; n1++) {
			m = (freq * n1 * (1 << n2) + HALF_BASE_FREQ) /
				BASE_FREQ;
			if (m < min_m + 2 || m > 127+2)
				continue;
			if ((m * BASE_FREQ >= freq_min * n1) &&
			    (m * BASE_FREQ <= freq_max * n1)) {
				diff = freq * (1 << n2) * n1 - BASE_FREQ * m;
				if (diff < 0)
					diff = -diff;
				if (diff < best_diff) {
					best_diff = diff;
					best_m = m;
					best_n1 = n1;
					best_n2 = n2;
				}
			}
		}
	}

	if (max_n1 == 63)
		*ndiv = (best_n1 - 2) | (best_n2 << 6);
	else
		*ndiv = (best_n1 - 2) | (best_n2 << 5);

	*mdiv = best_m - 2;

	return 0;
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
          long freq = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int min_m = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int min_n1 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int max_n1 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int min_n2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int max_n2 = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long freq_min = ((-2 * (next_i()%2)) + 1) * next_i();
        
          long freq_max = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mdiv0 = 1;
          unsigned char * mdiv = (unsigned char *) malloc(_len_mdiv0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_mdiv0; _i0++) {
            mdiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_ndiv0 = 1;
          unsigned char * ndiv = (unsigned char *) malloc(_len_ndiv0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_ndiv0; _i0++) {
            ndiv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = common_calc_clock(freq,min_m,min_n1,max_n1,min_n2,max_n2,freq_min,freq_max,mdiv,ndiv);
          printf("%d\n", benchRet); 
          free(mdiv);
          free(ndiv);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
