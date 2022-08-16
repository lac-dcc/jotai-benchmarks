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

/* Variables and functions */

__attribute__((used)) static long alchemy_calc_div(unsigned long rate, unsigned long prate,
			       int scale, int maxdiv, unsigned long *rv)
{
	long div1, div2;

	div1 = prate / rate;
	if ((prate / div1) > rate)
		div1++;

	if (scale == 2) {	/* only div-by-multiple-of-2 possible */
		if (div1 & 1)
			div1++;	/* stay <=prate */
	}

	div2 = (div1 / scale) - 1;	/* value to write to register */

	if (div2 > maxdiv)
		div2 = maxdiv;
	if (rv)
		*rv = div2;

	div1 = ((div2 + 1) * scale);
	return div1;
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
          unsigned long rate = 100;
          unsigned long prate = 100;
          int scale = 100;
          int maxdiv = 100;
          int _len_rv0 = 1;
          unsigned long * rv = (unsigned long *) malloc(_len_rv0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_rv0; _i0++) {
            rv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = alchemy_calc_div(rate,prate,scale,maxdiv,rv);
          printf("%ld\n", benchRet); 
          free(rv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long rate = 10;
          unsigned long prate = 10;
          int scale = 10;
          int maxdiv = 10;
          int _len_rv0 = 100;
          unsigned long * rv = (unsigned long *) malloc(_len_rv0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_rv0; _i0++) {
            rv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = alchemy_calc_div(rate,prate,scale,maxdiv,rv);
          printf("%ld\n", benchRet); 
          free(rv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
