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

void
bs_copy_memb(char * d, char * s, int n)
{
  d = (d + n) - 1;
  s = (s + n) - 1;
  while (n & (~7))
  {
    *(d--) = *(s--);
    *(d--) = *(s--);
    *(d--) = *(s--);
    *(d--) = *(s--);
    *(d--) = *(s--);
    *(d--) = *(s--);
    *(d--) = *(s--);
    *(d--) = *(s--);
    n = n - 8;
  }
  while (n > 0)
  {
    *(d--) = *(s--);
    n--;
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
          // static_instructions_O0 : 122
          // dynamic_instructions_O0 : 2864
          // ------------------------------- 
          // static_instructions_O1 : 44
          // dynamic_instructions_O1 : 710
          // ------------------------------- 
          // static_instructions_O2 : 91
          // dynamic_instructions_O2 : 733
          // ------------------------------- 
          // static_instructions_O3 : 91
          // dynamic_instructions_O3 : 733
          // ------------------------------- 
          // static_instructions_Ofast : 91
          // dynamic_instructions_Ofast : 733
          // ------------------------------- 
          // static_instructions_Os : 42
          // dynamic_instructions_Os : 708
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 696
          // ------------------------------- 

          int n = 255;
        
          int _len_d0 = 65025;
          char * d = (char *) malloc(_len_d0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s0 = 65025;
          char * s = (char *) malloc(_len_s0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          bs_copy_memb(d,s,n);
          free(d);
          free(s);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 122
          // dynamic_instructions_O0 : 144
          // ------------------------------- 
          // static_instructions_O1 : 44
          // dynamic_instructions_O1 : 50
          // ------------------------------- 
          // static_instructions_O2 : 58
          // dynamic_instructions_O2 : 64
          // ------------------------------- 
          // static_instructions_O3 : 58
          // dynamic_instructions_O3 : 64
          // ------------------------------- 
          // static_instructions_Ofast : 58
          // dynamic_instructions_Ofast : 64
          // ------------------------------- 
          // static_instructions_Os : 42
          // dynamic_instructions_Os : 48
          // ------------------------------- 
          // static_instructions_Oz : 38
          // dynamic_instructions_Oz : 51
          // ------------------------------- 

          int n = 10;
        
          int _len_d0 = 100;
          char * d = (char *) malloc(_len_d0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_s0 = 100;
          char * s = (char *) malloc(_len_s0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          bs_copy_memb(d,s,n);
          free(d);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
