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
typedef  scalar_t__ stb_bitset ;

/* Variables and functions */

int stb_bitset_eq(stb_bitset *p0, stb_bitset *p1, int len)
{
   int i;
   for (i=0; i < len; ++i)
      if (p0[i] != p1[i]) return 0;
   return 1;
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
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 3838
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 1541
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 1541
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 1541
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 1541
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 1540
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 1795
          // ------------------------------- 

          int len = 255;
        
          int _len_p00 = 65025;
          long * p0 = (long *) malloc(_len_p00*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p00; _i0++) {
            p0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p10 = 65025;
          long * p1 = (long *) malloc(_len_p10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = stb_bitset_eq(p0,p1,len);
          printf("%d\n", benchRet); 
          free(p0);
          free(p1);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 25
          // dynamic_instructions_O0 : 163
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 71
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 71
          // ------------------------------- 
          // static_instructions_O3 : 17
          // dynamic_instructions_O3 : 71
          // ------------------------------- 
          // static_instructions_Ofast : 17
          // dynamic_instructions_Ofast : 71
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 70
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 80
          // ------------------------------- 

          int len = 10;
        
          int _len_p00 = 100;
          long * p0 = (long *) malloc(_len_p00*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p00; _i0++) {
            p0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p10 = 100;
          long * p1 = (long *) malloc(_len_p10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = stb_bitset_eq(p0,p1,len);
          printf("%d\n", benchRet); 
          free(p0);
          free(p1);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_p00 = 1;
          long * p0 = (long *) malloc(_len_p00*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p00; _i0++) {
            p0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p10 = 1;
          long * p1 = (long *) malloc(_len_p10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = stb_bitset_eq(p0,p1,len);
          printf("%d\n", benchRet); 
          free(p0);
          free(p1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
