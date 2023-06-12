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
typedef  int u8 ;

/* Variables and functions */

__attribute__((used)) static void copy_codes(u8 *dst, u8 *src, unsigned int count)
{
	u8 c, last = 0xff;

	while (count--) {
		c = *src++;
		if ((c & 0xf0) == last) {
			*dst++ = 0x70 | (c & 0xf);
		} else {
			*dst++ = c;
			last = c & 0xf0;
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
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 6644
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 3326
          // ------------------------------- 
          // static_instructions_O2 : 105
          // dynamic_instructions_O2 : 1017
          // ------------------------------- 
          // static_instructions_O3 : 105
          // dynamic_instructions_O3 : 1017
          // ------------------------------- 
          // static_instructions_Ofast : 105
          // dynamic_instructions_Ofast : 1017
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 3324
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 3579
          // ------------------------------- 

          unsigned int count = 255;
        
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src0 = 65025;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          copy_codes(dst,src,count);
          free(dst);
          free(src);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 274
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 141
          // ------------------------------- 
          // static_instructions_O2 : 93
          // dynamic_instructions_O2 : 93
          // ------------------------------- 
          // static_instructions_O3 : 93
          // dynamic_instructions_O3 : 93
          // ------------------------------- 
          // static_instructions_Ofast : 93
          // dynamic_instructions_Ofast : 93
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 139
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 149
          // ------------------------------- 

          unsigned int count = 10;
        
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src0 = 100;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          copy_codes(dst,src,count);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
