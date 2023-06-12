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
typedef  scalar_t__ uint8_t ;

/* Variables and functions */
 long pb_7f ; 
 long pb_80 ; 

__attribute__((used)) static void add_bytes_l2_c(uint8_t *dst, uint8_t *src1, uint8_t *src2, int w)
{
    long i;
    for (i = 0; i <= w - (int) sizeof(long); i += sizeof(long)) {
        long a = *(long *)(src1 + i);
        long b = *(long *)(src2 + i);
        *(long *)(dst + i) = ((a & pb_7f) + (b & pb_7f)) ^ ((a ^ b) & pb_80);
    }
    for (; i < w; i++)
        dst[i] = src1[i] + src2[i];
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
          // static_instructions_O0 : 57
          // dynamic_instructions_O0 : 1069
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 492
          // ------------------------------- 
          // static_instructions_O2 : 97
          // dynamic_instructions_O2 : 529
          // ------------------------------- 
          // static_instructions_O3 : 97
          // dynamic_instructions_O3 : 529
          // ------------------------------- 
          // static_instructions_Ofast : 97
          // dynamic_instructions_Ofast : 529
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 490
          // ------------------------------- 
          // static_instructions_Oz : 32
          // dynamic_instructions_Oz : 528
          // ------------------------------- 

          int w = 255;
        
          int _len_dst0 = 65025;
          long * dst = (long *) malloc(_len_dst0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src10 = 65025;
          long * src1 = (long *) malloc(_len_src10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src20 = 65025;
          long * src2 = (long *) malloc(_len_src20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_src20; _i0++) {
            src2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          add_bytes_l2_c(dst,src1,src2,w);
          free(dst);
          free(src1);
          free(src2);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 57
          // dynamic_instructions_O0 : 84
          // ------------------------------- 
          // static_instructions_O1 : 36
          // dynamic_instructions_O1 : 42
          // ------------------------------- 
          // static_instructions_O2 : 55
          // dynamic_instructions_O2 : 61
          // ------------------------------- 
          // static_instructions_O3 : 55
          // dynamic_instructions_O3 : 61
          // ------------------------------- 
          // static_instructions_Ofast : 55
          // dynamic_instructions_Ofast : 61
          // ------------------------------- 
          // static_instructions_Os : 34
          // dynamic_instructions_Os : 40
          // ------------------------------- 
          // static_instructions_Oz : 32
          // dynamic_instructions_Oz : 43
          // ------------------------------- 

          int w = 10;
        
          int _len_dst0 = 100;
          long * dst = (long *) malloc(_len_dst0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src10 = 100;
          long * src1 = (long *) malloc(_len_src10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src20 = 100;
          long * src2 = (long *) malloc(_len_src20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_src20; _i0++) {
            src2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          add_bytes_l2_c(dst,src1,src2,w);
          free(dst);
          free(src1);
          free(src2);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 21
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 21
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 21
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 14
          // dynamic_instructions_Oz : 14
          // ------------------------------- 

          int w = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dst0 = 1;
          long * dst = (long *) malloc(_len_dst0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src10 = 1;
          long * src1 = (long *) malloc(_len_src10*sizeof(long));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_src20 = 1;
          long * src2 = (long *) malloc(_len_src20*sizeof(long));
          for(int _i0 = 0; _i0 < _len_src20; _i0++) {
            src2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          add_bytes_l2_c(dst,src1,src2,w);
          free(dst);
          free(src1);
          free(src2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
