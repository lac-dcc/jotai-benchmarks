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
typedef  int uint16_t ;

/* Variables and functions */

__attribute__((used)) static inline void memset_bpc(uint16_t *dst, int val, int len) {
    int n;
    for (n = 0; n < len; n++) {
        dst[n] = val;
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
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 2816
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 1029
          // ------------------------------- 
          // static_instructions_O2 : 63
          // dynamic_instructions_O2 : 155
          // ------------------------------- 
          // static_instructions_O3 : 63
          // dynamic_instructions_O3 : 155
          // ------------------------------- 
          // static_instructions_Ofast : 63
          // dynamic_instructions_Ofast : 155
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 1028
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 1284
          // ------------------------------- 

          int val = 255;
        
          int len = 255;
        
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          memset_bpc(dst,val,len);
          free(dst);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 121
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 49
          // ------------------------------- 
          // static_instructions_O2 : 42
          // dynamic_instructions_O2 : 46
          // ------------------------------- 
          // static_instructions_O3 : 42
          // dynamic_instructions_O3 : 46
          // ------------------------------- 
          // static_instructions_Ofast : 42
          // dynamic_instructions_Ofast : 46
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 48
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 59
          // ------------------------------- 

          int val = 10;
        
          int len = 10;
        
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          memset_bpc(dst,val,len);
          free(dst);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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

          int val = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          memset_bpc(dst,val,len);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
