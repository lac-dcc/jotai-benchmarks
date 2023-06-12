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
       0            big-arr\n\
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

void AverageWeakBins (double* hist, int binCount)  
{  
	// TODO: make some tests what number of passes is the best. (its clear  
	// one is not enough, as we may have something like  
	// ( 0.4, 0.4, 0.3, 0.4, 0.4 ))  
	for (int sn = 0 ; sn < 2 ; ++sn)   
	{  
		double firstE = hist[0];  
		double last = hist[binCount-1];  
		for (int sw = 0 ; sw < binCount ; ++sw)   
		{  
			double cur = hist[sw];  
			double next = (sw == (binCount - 1)) ? firstE : hist[(sw + 1) % binCount];  
			hist[sw] = (last + cur + next) / 3.0;  
			last = cur;  
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


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 65
          // dynamic_instructions_O0 : 19415
          // ------------------------------- 
          // static_instructions_O1 : 43
          // dynamic_instructions_O1 : 10730
          // ------------------------------- 
          // static_instructions_O2 : 62
          // dynamic_instructions_O2 : 9698
          // ------------------------------- 
          // static_instructions_O3 : 62
          // dynamic_instructions_O3 : 9698
          // ------------------------------- 
          // static_instructions_Ofast : 62
          // dynamic_instructions_Ofast : 9698
          // ------------------------------- 
          // static_instructions_Os : 39
          // dynamic_instructions_Os : 9703
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 8693
          // ------------------------------- 

          int binCount = 255;
        
          int _len_hist0 = 65025;
          double * hist = (double *) malloc(_len_hist0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_hist0; _i0++) {
            hist[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          AverageWeakBins(hist,binCount);
          free(hist);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 65
          // dynamic_instructions_O0 : 795
          // ------------------------------- 
          // static_instructions_O1 : 43
          // dynamic_instructions_O1 : 440
          // ------------------------------- 
          // static_instructions_O2 : 62
          // dynamic_instructions_O2 : 388
          // ------------------------------- 
          // static_instructions_O3 : 62
          // dynamic_instructions_O3 : 388
          // ------------------------------- 
          // static_instructions_Ofast : 62
          // dynamic_instructions_Ofast : 388
          // ------------------------------- 
          // static_instructions_Os : 39
          // dynamic_instructions_Os : 393
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 363
          // ------------------------------- 

          int binCount = 10;
        
          int _len_hist0 = 100;
          double * hist = (double *) malloc(_len_hist0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_hist0; _i0++) {
            hist[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          AverageWeakBins(hist,binCount);
          free(hist);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
