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
typedef  size_t GLuint ;
typedef  scalar_t__ GLubyte ;

/* Variables and functions */

void gl_flip_bytes( GLubyte *p, GLuint n )
{
   register GLuint i, a, b;

   for (i=0;i<n;i++) {
      b = (GLuint) p[i];
      a = ((b & 0x01) << 7) |
	  ((b & 0x02) << 5) |
	  ((b & 0x04) << 3) |
	  ((b & 0x08) << 1) |
	  ((b & 0x10) >> 1) |
	  ((b & 0x20) >> 3) |
	  ((b & 0x40) >> 5) |
	  ((b & 0x80) >> 7);
      p[i] = (GLubyte) a;
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
          // static_instructions_O0 : 54
          // dynamic_instructions_O0 : 11995
          // ------------------------------- 
          // static_instructions_O1 : 41
          // dynamic_instructions_O1 : 8423
          // ------------------------------- 
          // static_instructions_O2 : 91
          // dynamic_instructions_O2 : 4501
          // ------------------------------- 
          // static_instructions_O3 : 91
          // dynamic_instructions_O3 : 4501
          // ------------------------------- 
          // static_instructions_Ofast : 91
          // dynamic_instructions_Ofast : 4501
          // ------------------------------- 
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 8422
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 8677
          // ------------------------------- 

          unsigned long n = 255;
        
          int _len_p0 = 65025;
          long * p = (long *) malloc(_len_p0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          gl_flip_bytes(p,n);
          free(p);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 54
          // dynamic_instructions_O0 : 480
          // ------------------------------- 
          // static_instructions_O1 : 41
          // dynamic_instructions_O1 : 338
          // ------------------------------- 
          // static_instructions_O2 : 57
          // dynamic_instructions_O2 : 197
          // ------------------------------- 
          // static_instructions_O3 : 57
          // dynamic_instructions_O3 : 197
          // ------------------------------- 
          // static_instructions_Ofast : 57
          // dynamic_instructions_Ofast : 197
          // ------------------------------- 
          // static_instructions_Os : 40
          // dynamic_instructions_Os : 337
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 347
          // ------------------------------- 

          unsigned long n = 10;
        
          int _len_p0 = 100;
          long * p = (long *) malloc(_len_p0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_p0; _i0++) {
            p[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          gl_flip_bytes(p,n);
          free(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
