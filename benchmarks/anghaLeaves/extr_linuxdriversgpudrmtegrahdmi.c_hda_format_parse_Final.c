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

/* Variables and functions */
 unsigned int AC_FMT_BASE_44K ; 
 unsigned int AC_FMT_CHAN_MASK ; 
 unsigned int AC_FMT_CHAN_SHIFT ; 
 unsigned int AC_FMT_DIV_MASK ; 
 unsigned int AC_FMT_DIV_SHIFT ; 
 unsigned int AC_FMT_MULT_MASK ; 
 unsigned int AC_FMT_MULT_SHIFT ; 

__attribute__((used)) static void hda_format_parse(unsigned int format, unsigned int *rate,
			     unsigned int *channels)
{
	unsigned int mul, div;

	if (format & AC_FMT_BASE_44K)
		*rate = 44100;
	else
		*rate = 48000;

	mul = (format & AC_FMT_MULT_MASK) >> AC_FMT_MULT_SHIFT;
	div = (format & AC_FMT_DIV_MASK) >> AC_FMT_DIV_SHIFT;

	*rate = *rate * (mul + 1) / (div + 1);

	*channels = (format & AC_FMT_CHAN_MASK) >> AC_FMT_CHAN_SHIFT;
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
          unsigned int format = 100;
          int _len_rate0 = 1;
          unsigned int * rate = (unsigned int *) malloc(_len_rate0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_rate0; _i0++) {
            rate[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_channels0 = 1;
          unsigned int * channels = (unsigned int *) malloc(_len_channels0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_channels0; _i0++) {
            channels[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hda_format_parse(format,rate,channels);
          free(rate);
          free(channels);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
