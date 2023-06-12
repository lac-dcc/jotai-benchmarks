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

__attribute__((used)) static void
bn_reverse (unsigned char *s, int len)
{
  int     ix, iy;
  unsigned char t;

  ix = 0;
  iy = len - 1;
  while (ix < iy) {
    t     = s[ix];
    s[ix] = s[iy];
    s[iy] = t;
    ++ix;
    --iy;
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
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 3061
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 1154
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 1154
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 1154
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 1154
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 1152
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 1152
          // ------------------------------- 

          int len = 255;
        
          int _len_s0 = 65025;
          unsigned char * s = (unsigned char *) malloc(_len_s0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          bn_reverse(s,len);
          free(s);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 34
          // dynamic_instructions_O0 : 133
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 56
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 56
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 56
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 56
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 54
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 54
          // ------------------------------- 

          int len = 10;
        
          int _len_s0 = 100;
          unsigned char * s = (unsigned char *) malloc(_len_s0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          bn_reverse(s,len);
          free(s);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 6
          // dynamic_instructions_O2 : 6
          // ------------------------------- 
          // static_instructions_O3 : 6
          // dynamic_instructions_O3 : 6
          // ------------------------------- 
          // static_instructions_Ofast : 6
          // dynamic_instructions_Ofast : 6
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 9
          // dynamic_instructions_Oz : 9
          // ------------------------------- 

          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_s0 = 1;
          unsigned char * s = (unsigned char *) malloc(_len_s0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          bn_reverse(s,len);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
