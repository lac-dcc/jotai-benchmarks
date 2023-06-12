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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
 int PM3_REF_CLOCK ; 

__attribute__((used)) static void pm3fb_calculate_clock(unsigned long reqclock,
				unsigned char *prescale,
				unsigned char *feedback,
				unsigned char *postscale)
{
	int f, pre, post;
	unsigned long freq;
	long freqerr = 1000;
	long currerr;

	for (f = 1; f < 256; f++) {
		for (pre = 1; pre < 256; pre++) {
			for (post = 0; post < 5; post++) {
				freq = ((2*PM3_REF_CLOCK * f) >> post) / pre;
				currerr = (reqclock > freq)
					? reqclock - freq
					: freq - reqclock;
				if (currerr < freqerr) {
					freqerr = currerr;
					*feedback = f;
					*prescale = pre;
					*postscale = post;
				}
			}
		}
	}
}

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
          unsigned long reqclock = 100;
        
          int _len_prescale0 = 1;
          unsigned char * prescale = (unsigned char *) malloc(_len_prescale0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_prescale0; _i0++) {
            prescale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_feedback0 = 1;
          unsigned char * feedback = (unsigned char *) malloc(_len_feedback0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_feedback0; _i0++) {
            feedback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_postscale0 = 1;
          unsigned char * postscale = (unsigned char *) malloc(_len_postscale0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_postscale0; _i0++) {
            postscale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          pm3fb_calculate_clock(reqclock,prescale,feedback,postscale);
          free(prescale);
          free(feedback);
          free(postscale);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long reqclock = 255;
        
          int _len_prescale0 = 65025;
          unsigned char * prescale = (unsigned char *) malloc(_len_prescale0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_prescale0; _i0++) {
            prescale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_feedback0 = 65025;
          unsigned char * feedback = (unsigned char *) malloc(_len_feedback0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_feedback0; _i0++) {
            feedback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_postscale0 = 65025;
          unsigned char * postscale = (unsigned char *) malloc(_len_postscale0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_postscale0; _i0++) {
            postscale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          pm3fb_calculate_clock(reqclock,prescale,feedback,postscale);
          free(prescale);
          free(feedback);
          free(postscale);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long reqclock = 10;
        
          int _len_prescale0 = 100;
          unsigned char * prescale = (unsigned char *) malloc(_len_prescale0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_prescale0; _i0++) {
            prescale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_feedback0 = 100;
          unsigned char * feedback = (unsigned char *) malloc(_len_feedback0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_feedback0; _i0++) {
            feedback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_postscale0 = 100;
          unsigned char * postscale = (unsigned char *) malloc(_len_postscale0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_postscale0; _i0++) {
            postscale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          pm3fb_calculate_clock(reqclock,prescale,feedback,postscale);
          free(prescale);
          free(feedback);
          free(postscale);
        
        break;
    }
    // empty
    case 3:
    {
          unsigned long reqclock = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_prescale0 = 1;
          unsigned char * prescale = (unsigned char *) malloc(_len_prescale0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_prescale0; _i0++) {
            prescale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_feedback0 = 1;
          unsigned char * feedback = (unsigned char *) malloc(_len_feedback0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_feedback0; _i0++) {
            feedback[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_postscale0 = 1;
          unsigned char * postscale = (unsigned char *) malloc(_len_postscale0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_postscale0; _i0++) {
            postscale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          pm3fb_calculate_clock(reqclock,prescale,feedback,postscale);
          free(prescale);
          free(feedback);
          free(postscale);
        
        break;
    }
    default:
        usage();
        break;

    }

    return 0;
}
