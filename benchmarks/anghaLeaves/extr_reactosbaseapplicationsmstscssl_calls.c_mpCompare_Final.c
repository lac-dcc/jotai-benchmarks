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
typedef  scalar_t__ DIGIT_T ;

/* Variables and functions */

__attribute__((used)) static int
mpCompare(DIGIT_T* a, DIGIT_T* b, unsigned int ndigits)
{
  /* Returns sign of (a - b) */
  if (ndigits == 0)
  {
    return 0;
  }
  while (ndigits--)
  {
    if (a[ndigits] > b[ndigits])
    {
      return 1; /* GT */
    }
    if (a[ndigits] < b[ndigits])
    {
      return -1; /* LT */
    }
  }
  return 0; /* EQ */
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
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 5373
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 2561
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 2561
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 2561
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 2561
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 2560
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 2562
          // ------------------------------- 

          unsigned int ndigits = 255;
        
          int _len_a0 = 65025;
          long * a = (long *) malloc(_len_a0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_b0 = 65025;
          long * b = (long *) malloc(_len_b0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mpCompare(a,b,ndigits);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 228
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 111
          // ------------------------------- 
          // static_instructions_O2 : 19
          // dynamic_instructions_O2 : 111
          // ------------------------------- 
          // static_instructions_O3 : 19
          // dynamic_instructions_O3 : 111
          // ------------------------------- 
          // static_instructions_Ofast : 19
          // dynamic_instructions_Ofast : 111
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 110
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 112
          // ------------------------------- 

          unsigned int ndigits = 10;
        
          int _len_a0 = 100;
          long * a = (long *) malloc(_len_a0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_b0 = 100;
          long * b = (long *) malloc(_len_b0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = mpCompare(a,b,ndigits);
          printf("%d\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
