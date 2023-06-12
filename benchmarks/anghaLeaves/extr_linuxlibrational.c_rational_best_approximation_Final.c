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

void rational_best_approximation(
	unsigned long given_numerator, unsigned long given_denominator,
	unsigned long max_numerator, unsigned long max_denominator,
	unsigned long *best_numerator, unsigned long *best_denominator)
{
	unsigned long n, d, n0, d0, n1, d1;
	n = given_numerator;
	d = given_denominator;
	n0 = d1 = 0;
	n1 = d0 = 1;
	for (;;) {
		unsigned long t, a;
		if ((n1 > max_numerator) || (d1 > max_denominator)) {
			n1 = n0;
			d1 = d0;
			break;
		}
		if (d == 0)
			break;
		t = d;
		a = n / d;
		d = n % d;
		n = t;
		t = n0 + a * n1;
		n0 = n1;
		n1 = t;
		t = d0 + a * d1;
		d0 = d1;
		d1 = t;
	}
	*best_numerator = n1;
	*best_denominator = d1;
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
          // static_instructions_O0 : 66
          // dynamic_instructions_O0 : 74
          // ------------------------------- 
          // static_instructions_O1 : 48
          // dynamic_instructions_O1 : 58
          // ------------------------------- 
          // static_instructions_O2 : 47
          // dynamic_instructions_O2 : 51
          // ------------------------------- 
          // static_instructions_O3 : 47
          // dynamic_instructions_O3 : 51
          // ------------------------------- 
          // static_instructions_Ofast : 47
          // dynamic_instructions_Ofast : 51
          // ------------------------------- 
          // static_instructions_Os : 42
          // dynamic_instructions_Os : 46
          // ------------------------------- 
          // static_instructions_Oz : 41
          // dynamic_instructions_Oz : 48
          // ------------------------------- 

          unsigned long given_numerator = 100;
        
          unsigned long given_denominator = 100;
        
          unsigned long max_numerator = 100;
        
          unsigned long max_denominator = 100;
        
          int _len_best_numerator0 = 1;
          unsigned long * best_numerator = (unsigned long *) malloc(_len_best_numerator0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_best_numerator0; _i0++) {
            best_numerator[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_best_denominator0 = 1;
          unsigned long * best_denominator = (unsigned long *) malloc(_len_best_denominator0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_best_denominator0; _i0++) {
            best_denominator[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          rational_best_approximation(given_numerator,given_denominator,max_numerator,max_denominator,best_numerator,best_denominator);
          free(best_numerator);
          free(best_denominator);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 66
          // dynamic_instructions_O0 : 74
          // ------------------------------- 
          // static_instructions_O1 : 48
          // dynamic_instructions_O1 : 58
          // ------------------------------- 
          // static_instructions_O2 : 47
          // dynamic_instructions_O2 : 51
          // ------------------------------- 
          // static_instructions_O3 : 47
          // dynamic_instructions_O3 : 51
          // ------------------------------- 
          // static_instructions_Ofast : 47
          // dynamic_instructions_Ofast : 51
          // ------------------------------- 
          // static_instructions_Os : 42
          // dynamic_instructions_Os : 46
          // ------------------------------- 
          // static_instructions_Oz : 41
          // dynamic_instructions_Oz : 48
          // ------------------------------- 

          unsigned long given_numerator = 255;
        
          unsigned long given_denominator = 255;
        
          unsigned long max_numerator = 255;
        
          unsigned long max_denominator = 255;
        
          int _len_best_numerator0 = 65025;
          unsigned long * best_numerator = (unsigned long *) malloc(_len_best_numerator0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_best_numerator0; _i0++) {
            best_numerator[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_best_denominator0 = 65025;
          unsigned long * best_denominator = (unsigned long *) malloc(_len_best_denominator0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_best_denominator0; _i0++) {
            best_denominator[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          rational_best_approximation(given_numerator,given_denominator,max_numerator,max_denominator,best_numerator,best_denominator);
          free(best_numerator);
          free(best_denominator);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 66
          // dynamic_instructions_O0 : 74
          // ------------------------------- 
          // static_instructions_O1 : 48
          // dynamic_instructions_O1 : 58
          // ------------------------------- 
          // static_instructions_O2 : 47
          // dynamic_instructions_O2 : 51
          // ------------------------------- 
          // static_instructions_O3 : 47
          // dynamic_instructions_O3 : 51
          // ------------------------------- 
          // static_instructions_Ofast : 47
          // dynamic_instructions_Ofast : 51
          // ------------------------------- 
          // static_instructions_Os : 42
          // dynamic_instructions_Os : 46
          // ------------------------------- 
          // static_instructions_Oz : 41
          // dynamic_instructions_Oz : 48
          // ------------------------------- 

          unsigned long given_numerator = 10;
        
          unsigned long given_denominator = 10;
        
          unsigned long max_numerator = 10;
        
          unsigned long max_denominator = 10;
        
          int _len_best_numerator0 = 100;
          unsigned long * best_numerator = (unsigned long *) malloc(_len_best_numerator0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_best_numerator0; _i0++) {
            best_numerator[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_best_denominator0 = 100;
          unsigned long * best_denominator = (unsigned long *) malloc(_len_best_denominator0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_best_denominator0; _i0++) {
            best_denominator[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          rational_best_approximation(given_numerator,given_denominator,max_numerator,max_denominator,best_numerator,best_denominator);
          free(best_numerator);
          free(best_denominator);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 66
          // dynamic_instructions_O0 : 74
          // ------------------------------- 
          // static_instructions_O1 : 48
          // dynamic_instructions_O1 : 58
          // ------------------------------- 
          // static_instructions_O2 : 48
          // dynamic_instructions_O2 : 52
          // ------------------------------- 
          // static_instructions_O3 : 48
          // dynamic_instructions_O3 : 52
          // ------------------------------- 
          // static_instructions_Ofast : 48
          // dynamic_instructions_Ofast : 52
          // ------------------------------- 
          // static_instructions_Os : 42
          // dynamic_instructions_Os : 46
          // ------------------------------- 
          // static_instructions_Oz : 41
          // dynamic_instructions_Oz : 48
          // ------------------------------- 

          unsigned long given_numerator = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long given_denominator = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long max_numerator = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned long max_denominator = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_best_numerator0 = 1;
          unsigned long * best_numerator = (unsigned long *) malloc(_len_best_numerator0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_best_numerator0; _i0++) {
            best_numerator[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_best_denominator0 = 1;
          unsigned long * best_denominator = (unsigned long *) malloc(_len_best_denominator0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_best_denominator0; _i0++) {
            best_denominator[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          rational_best_approximation(given_numerator,given_denominator,max_numerator,max_denominator,best_numerator,best_denominator);
          free(best_numerator);
          free(best_denominator);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
