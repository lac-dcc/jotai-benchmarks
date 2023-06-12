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
typedef  int /*<<< orphan*/  u32 ;

/* Variables and functions */

__attribute__((used)) static inline u32 *fill16_col(u32 *dst, int rows, u32 m[])
{
	while (rows) {
		*dst++ = m[0];
#if BPL > 2
		*dst++ = m[1];
#endif
#if BPL > 4
		*dst++ = m[2];
		*dst++ = m[3];
#endif
		rows--;
	}
	return dst;
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 3325
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 1283
          // ------------------------------- 
          // static_instructions_O2 : 66
          // dynamic_instructions_O2 : 200
          // ------------------------------- 
          // static_instructions_O3 : 66
          // dynamic_instructions_O3 : 200
          // ------------------------------- 
          // static_instructions_Ofast : 66
          // dynamic_instructions_Ofast : 200
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 1282
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 1792
          // ------------------------------- 

          int rows = 255;
        
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_m0 = 65025;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int * benchRet = fill16_col(dst,rows,m);
          printf("%d\n", (*benchRet)); 
          free(dst);
          free(m);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 140
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 58
          // ------------------------------- 
          // static_instructions_O2 : 53
          // dynamic_instructions_O2 : 59
          // ------------------------------- 
          // static_instructions_O3 : 53
          // dynamic_instructions_O3 : 59
          // ------------------------------- 
          // static_instructions_Ofast : 53
          // dynamic_instructions_Ofast : 59
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 57
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 77
          // ------------------------------- 

          int rows = 10;
        
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_m0 = 100;
          int * m = (int *) malloc(_len_m0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_m0; _i0++) {
            m[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int * benchRet = fill16_col(dst,rows,m);
          printf("%d\n", (*benchRet)); 
          free(dst);
          free(m);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
