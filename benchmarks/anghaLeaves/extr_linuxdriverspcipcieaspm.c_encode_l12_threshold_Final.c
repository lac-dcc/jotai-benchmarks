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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static void encode_l12_threshold(u32 threshold_us, u32 *scale, u32 *value)
{
	u32 threshold_ns = threshold_us * 1000;

	/* See PCIe r3.1, sec 7.33.3 and sec 6.18 */
	if (threshold_ns < 32) {
		*scale = 0;
		*value = threshold_ns;
	} else if (threshold_ns < 1024) {
		*scale = 1;
		*value = threshold_ns >> 5;
	} else if (threshold_ns < 32768) {
		*scale = 2;
		*value = threshold_ns >> 10;
	} else if (threshold_ns < 1048576) {
		*scale = 3;
		*value = threshold_ns >> 15;
	} else if (threshold_ns < 33554432) {
		*scale = 4;
		*value = threshold_ns >> 20;
	} else {
		*scale = 5;
		*value = threshold_ns >> 25;
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


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int threshold_us = 100;
        
          int _len_scale0 = 1;
          int * scale = (int *) malloc(_len_scale0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_scale0; _i0++) {
            scale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_value0 = 1;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          encode_l12_threshold(threshold_us,scale,value);
          free(scale);
          free(value);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 27
          // dynamic_instructions_O0 : 27
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 17
          // ------------------------------- 
          // static_instructions_O2 : 17
          // dynamic_instructions_O2 : 17
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 16
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 16
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 17
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int threshold_us = 255;
        
          int _len_scale0 = 65025;
          int * scale = (int *) malloc(_len_scale0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_scale0; _i0++) {
            scale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_value0 = 65025;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          encode_l12_threshold(threshold_us,scale,value);
          free(scale);
          free(value);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int threshold_us = 10;
        
          int _len_scale0 = 100;
          int * scale = (int *) malloc(_len_scale0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_scale0; _i0++) {
            scale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_value0 = 100;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          encode_l12_threshold(threshold_us,scale,value);
          free(scale);
          free(value);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 17
          // dynamic_instructions_O0 : 17
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int threshold_us = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_scale0 = 1;
          int * scale = (int *) malloc(_len_scale0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_scale0; _i0++) {
            scale[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_value0 = 1;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          encode_l12_threshold(threshold_us,scale,value);
          free(scale);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
