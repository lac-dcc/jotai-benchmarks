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

void _swab (char *  src,  char *  dst,  int  sizeToCopy)

{
 if (sizeToCopy > 1)
  {
    sizeToCopy = (unsigned)sizeToCopy >> 1;

    while (sizeToCopy--) {
      char s0 = src[0];
      char s1 = src[1];
      *dst++ = s1;
      *dst++ = s0;
      src = src + 2;
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
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 3575
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 775
          // ------------------------------- 
          // static_instructions_O2 : 46
          // dynamic_instructions_O2 : 512
          // ------------------------------- 
          // static_instructions_O3 : 46
          // dynamic_instructions_O3 : 512
          // ------------------------------- 
          // static_instructions_Ofast : 46
          // dynamic_instructions_Ofast : 512
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 774
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 900
          // ------------------------------- 

          int sizeToCopy = 255;
        
          int _len_src0 = 65025;
          char * src = (char *) malloc(_len_src0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dst0 = 65025;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          _swab(src,dst,sizeToCopy);
          free(src);
          free(dst);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 159
          // ------------------------------- 
          // static_instructions_O1 : 19
          // dynamic_instructions_O1 : 43
          // ------------------------------- 
          // static_instructions_O2 : 46
          // dynamic_instructions_O2 : 46
          // ------------------------------- 
          // static_instructions_O3 : 46
          // dynamic_instructions_O3 : 46
          // ------------------------------- 
          // static_instructions_Ofast : 46
          // dynamic_instructions_Ofast : 46
          // ------------------------------- 
          // static_instructions_Os : 18
          // dynamic_instructions_Os : 42
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 46
          // ------------------------------- 

          int sizeToCopy = 10;
        
          int _len_src0 = 100;
          char * src = (char *) malloc(_len_src0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dst0 = 100;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          _swab(src,dst,sizeToCopy);
          free(src);
          free(dst);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 9
          // dynamic_instructions_O0 : 9
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
          // static_instructions_Oz : 6
          // dynamic_instructions_Oz : 6
          // ------------------------------- 

          int sizeToCopy = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_src0 = 1;
          char * src = (char *) malloc(_len_src0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dst0 = 1;
          char * dst = (char *) malloc(_len_dst0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          _swab(src,dst,sizeToCopy);
          free(src);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
