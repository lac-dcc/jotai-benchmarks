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

__attribute__((used)) static size_t strip_cr_from_buf(char *start, size_t len)
{
	char *scan, *trail, *end = start + len;

	for (scan = trail = start; scan < end; trail++, scan++) {
		while (*scan == '\r')
			scan++; /* skip '\r' */

		if (trail != scan)
			*trail = *scan;
	}

	*trail = '\0';

	return (trail - start);
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
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 4865
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 2818
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 2818
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 2818
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 2818
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 2562
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 2816
          // ------------------------------- 

          unsigned long len = 255;
        
          int _len_start0 = 65025;
          char * start = (char *) malloc(_len_start0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = strip_cr_from_buf(start,len);
          printf("%lu\n", benchRet); 
          free(start);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 210
          // ------------------------------- 
          // static_instructions_O1 : 24
          // dynamic_instructions_O1 : 123
          // ------------------------------- 
          // static_instructions_O2 : 24
          // dynamic_instructions_O2 : 123
          // ------------------------------- 
          // static_instructions_O3 : 24
          // dynamic_instructions_O3 : 123
          // ------------------------------- 
          // static_instructions_Ofast : 24
          // dynamic_instructions_Ofast : 123
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 112
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 121
          // ------------------------------- 

          unsigned long len = 10;
        
          int _len_start0 = 100;
          char * start = (char *) malloc(_len_start0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_start0; _i0++) {
            start[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          unsigned long benchRet = strip_cr_from_buf(start,len);
          printf("%lu\n", benchRet); 
          free(start);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
