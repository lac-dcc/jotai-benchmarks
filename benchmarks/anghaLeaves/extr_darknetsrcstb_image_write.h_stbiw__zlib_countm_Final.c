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
       2            empty\n\
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

__attribute__((used)) static unsigned int stbiw__zlib_countm(unsigned char *a, unsigned char *b, int limit)
{
   int i;
   for (i=0; i < limit && i < 258; ++i)
      if (a[i] != b[i]) break;
   return i;
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
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 6138
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 1542
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 1542
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 1542
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 1542
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 1542
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 2303
          // ------------------------------- 

          int limit = 255;
        
          int _len_a0 = 65025;
          unsigned char * a = (unsigned char *) malloc(_len_a0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_b0 = 65025;
          unsigned char * b = (unsigned char *) malloc(_len_b0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned int benchRet = stbiw__zlib_countm(a,b,limit);
          printf("%u\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 258
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 72
          // ------------------------------- 
          // static_instructions_O2 : 18
          // dynamic_instructions_O2 : 72
          // ------------------------------- 
          // static_instructions_O3 : 18
          // dynamic_instructions_O3 : 72
          // ------------------------------- 
          // static_instructions_Ofast : 18
          // dynamic_instructions_Ofast : 72
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 72
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 98
          // ------------------------------- 

          int limit = 10;
        
          int _len_a0 = 100;
          unsigned char * a = (unsigned char *) malloc(_len_a0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_b0 = 100;
          unsigned char * b = (unsigned char *) malloc(_len_b0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned int benchRet = stbiw__zlib_countm(a,b,limit);
          printf("%u\n", benchRet); 
          free(a);
          free(b);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 18
          // dynamic_instructions_O0 : 18
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int limit = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_a0 = 1;
          unsigned char * a = (unsigned char *) malloc(_len_a0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_b0 = 1;
          unsigned char * b = (unsigned char *) malloc(_len_b0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned int benchRet = stbiw__zlib_countm(a,b,limit);
          printf("%u\n", benchRet); 
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
