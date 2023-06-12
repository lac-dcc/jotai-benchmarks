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
 int LFG_SCALE ; 

__attribute__((used)) static void dither_int_to_float_triangular_c(float *dst, int *src0, int len)
{
    int i;
    int *src1  = src0 + len;

    for (i = 0; i < len; i++) {
        float r = src0[i] * LFG_SCALE;
        r      += src1[i] * LFG_SCALE;
        dst[i]  = r;
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
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 6136
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 3327
          // ------------------------------- 
          // static_instructions_O2 : 114
          // dynamic_instructions_O2 : 1370
          // ------------------------------- 
          // static_instructions_O3 : 114
          // dynamic_instructions_O3 : 1370
          // ------------------------------- 
          // static_instructions_Ofast : 114
          // dynamic_instructions_Ofast : 1370
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 3326
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 3072
          // ------------------------------- 

          int len = 255;
        
          int _len_dst0 = 65025;
          float * dst = (float *) malloc(_len_dst0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_src00 = 65025;
          int * src0 = (int *) malloc(_len_src00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src00; _i0++) {
            src0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          dither_int_to_float_triangular_c(dst,src0,len);
          free(dst);
          free(src0);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 37
          // dynamic_instructions_O0 : 256
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 142
          // ------------------------------- 
          // static_instructions_O2 : 95
          // dynamic_instructions_O2 : 108
          // ------------------------------- 
          // static_instructions_O3 : 95
          // dynamic_instructions_O3 : 108
          // ------------------------------- 
          // static_instructions_Ofast : 95
          // dynamic_instructions_Ofast : 108
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 141
          // ------------------------------- 
          // static_instructions_Oz : 22
          // dynamic_instructions_Oz : 132
          // ------------------------------- 

          int len = 10;
        
          int _len_dst0 = 100;
          float * dst = (float *) malloc(_len_dst0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_src00 = 100;
          int * src0 = (int *) malloc(_len_src00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src00; _i0++) {
            src0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          dither_int_to_float_triangular_c(dst,src0,len);
          free(dst);
          free(src0);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 16
          // dynamic_instructions_O0 : 16
          // ------------------------------- 
          // static_instructions_O1 : 6
          // dynamic_instructions_O1 : 6
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 6
          // dynamic_instructions_Os : 6
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 12
          // ------------------------------- 

          int len = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_dst0 = 1;
          float * dst = (float *) malloc(_len_dst0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        
          int _len_src00 = 1;
          int * src0 = (int *) malloc(_len_src00*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src00; _i0++) {
            src0[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          dither_int_to_float_triangular_c(dst,src0,len);
          free(dst);
          free(src0);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
