// ========================================================================= //

// includes
#include <math.h>
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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
typedef  unsigned int u8 ;

/* Variables and functions */
 unsigned int max_duration ; 
 unsigned int stock_freq ; 

__attribute__((used)) static unsigned int gx_validate_speed(unsigned int khz, u8 *on_duration,
		u8 *off_duration)
{
	unsigned int i;
	u8 tmp_on, tmp_off;
	int old_tmp_freq = stock_freq;
	int tmp_freq;

	*off_duration = 1;
	*on_duration = 0;

	for (i = max_duration; i > 0; i--) {
		tmp_off = ((khz * i) / stock_freq) & 0xff;
		tmp_on = i - tmp_off;
		tmp_freq = (stock_freq * tmp_off) / i;
		/* if this relation is closer to khz, use this. If it's equal,
		 * prefer it, too - lower latency */
		if (abs(tmp_freq - khz) <= abs(old_tmp_freq - khz)) {
			*on_duration = tmp_on;
			*off_duration = tmp_off;
			old_tmp_freq = tmp_freq;
		}
	}

	return old_tmp_freq;
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
          unsigned int khz = 100;
          int _len_on_duration0 = 1;
          unsigned int * on_duration = (unsigned int *) malloc(_len_on_duration0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_on_duration0; _i0++) {
            on_duration[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_off_duration0 = 1;
          unsigned int * off_duration = (unsigned int *) malloc(_len_off_duration0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_off_duration0; _i0++) {
            off_duration[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = gx_validate_speed(khz,on_duration,off_duration);
          printf("%u\n", benchRet); 
          free(on_duration);
          free(off_duration);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int khz = 255;
          int _len_on_duration0 = 65025;
          unsigned int * on_duration = (unsigned int *) malloc(_len_on_duration0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_on_duration0; _i0++) {
            on_duration[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_off_duration0 = 65025;
          unsigned int * off_duration = (unsigned int *) malloc(_len_off_duration0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_off_duration0; _i0++) {
            off_duration[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = gx_validate_speed(khz,on_duration,off_duration);
          printf("%u\n", benchRet); 
          free(on_duration);
          free(off_duration);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int khz = 10;
          int _len_on_duration0 = 100;
          unsigned int * on_duration = (unsigned int *) malloc(_len_on_duration0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_on_duration0; _i0++) {
            on_duration[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_off_duration0 = 100;
          unsigned int * off_duration = (unsigned int *) malloc(_len_off_duration0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_off_duration0; _i0++) {
            off_duration[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = gx_validate_speed(khz,on_duration,off_duration);
          printf("%u\n", benchRet); 
          free(on_duration);
          free(off_duration);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
