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
 int /*<<< orphan*/  DLE ; 

__attribute__((used)) static inline void
insert_dle(unsigned char *dest, unsigned char *src, int count) {
	/* <DLE> in input stream have to be flagged as <DLE><DLE> */
	while (count--) {
		*dest++ = *src;
		if (*src++ == DLE)
			*dest++ = DLE;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 5368
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 2814
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 2053
          // ------------------------------- 
          // static_instructions_O3 : 36
          // dynamic_instructions_O3 : 1926
          // ------------------------------- 
          // static_instructions_Ofast : 36
          // dynamic_instructions_Ofast : 1926
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 2303
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 2558
          // ------------------------------- 

          int count = 255;
        
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
        
          insert_dle(dest,src,count);
          free(dest);
          free(src);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 223
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 119
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 95
          // ------------------------------- 
          // static_instructions_O3 : 29
          // dynamic_instructions_O3 : 89
          // ------------------------------- 
          // static_instructions_Ofast : 29
          // dynamic_instructions_Ofast : 89
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 98
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 108
          // ------------------------------- 

          int count = 10;
        
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
        
          insert_dle(dest,src,count);
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
