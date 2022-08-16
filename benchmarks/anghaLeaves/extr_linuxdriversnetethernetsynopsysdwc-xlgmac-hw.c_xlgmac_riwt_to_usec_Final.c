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
       1            big-arr-10x\n\
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
struct xlgmac_pdata {unsigned long sysclk_rate; } ;

/* Variables and functions */

__attribute__((used)) static unsigned int xlgmac_riwt_to_usec(struct xlgmac_pdata *pdata,
					unsigned int riwt)
{
	unsigned long rate;
	unsigned int ret;

	rate = pdata->sysclk_rate;

	/* Convert the input watchdog timer value to the usec value. Each
	 * watchdog timer value is equivalent to 256 clock cycles.
	 * Calculate the required value as:
	 *   ( riwt * 256 ) / ( system_clock_mhz / 10^6 )
	 */
	ret = (riwt * 256) / (rate / 1000000);

	return ret;
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
          unsigned int riwt = 100;
          int _len_pdata0 = 1;
          struct xlgmac_pdata * pdata = (struct xlgmac_pdata *) malloc(_len_pdata0*sizeof(struct xlgmac_pdata));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].sysclk_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = xlgmac_riwt_to_usec(pdata,riwt);
          printf("%u\n", benchRet); 
          free(pdata);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int riwt = 10;
          int _len_pdata0 = 100;
          struct xlgmac_pdata * pdata = (struct xlgmac_pdata *) malloc(_len_pdata0*sizeof(struct xlgmac_pdata));
          for(int _i0 = 0; _i0 < _len_pdata0; _i0++) {
            pdata[_i0].sysclk_rate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = xlgmac_riwt_to_usec(pdata,riwt);
          printf("%u\n", benchRet); 
          free(pdata);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
