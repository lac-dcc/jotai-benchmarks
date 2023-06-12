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
mymemmove (unsigned char *dest, unsigned char *src, size_t n)
{
  if ((src <= dest && src + n <= dest)
      || src >= dest)
    while (n-- > 0)
      *dest++ = *src++;
  else
    {
      dest += n;
      src += n;
      while (n-- > 0)
	*--dest = *--src;
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
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 4356
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 1285
          // ------------------------------- 
          // static_instructions_O2 : 106
          // dynamic_instructions_O2 : 160
          // ------------------------------- 
          // static_instructions_O3 : 106
          // dynamic_instructions_O3 : 160
          // ------------------------------- 
          // static_instructions_Ofast : 106
          // dynamic_instructions_Ofast : 160
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 1284
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 1539
          // ------------------------------- 

          unsigned long n = 255;
        
          int _len_dest0 = 65025;
          unsigned char * dest = (unsigned char *) malloc(_len_dest0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src0 = 65025;
          unsigned char * src = (unsigned char *) malloc(_len_src0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mymemmove(dest,src,n);
          free(dest);
          free(src);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 32
          // dynamic_instructions_O0 : 191
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 60
          // ------------------------------- 
          // static_instructions_O2 : 54
          // dynamic_instructions_O2 : 59
          // ------------------------------- 
          // static_instructions_O3 : 54
          // dynamic_instructions_O3 : 59
          // ------------------------------- 
          // static_instructions_Ofast : 54
          // dynamic_instructions_Ofast : 59
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 59
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 69
          // ------------------------------- 

          unsigned long n = 10;
        
          int _len_dest0 = 100;
          unsigned char * dest = (unsigned char *) malloc(_len_dest0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src0 = 100;
          unsigned char * src = (unsigned char *) malloc(_len_src0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          mymemmove(dest,src,n);
          free(dest);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
