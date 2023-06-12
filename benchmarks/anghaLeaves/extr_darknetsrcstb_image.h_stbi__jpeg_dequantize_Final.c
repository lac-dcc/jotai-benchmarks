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
typedef  short stbi__uint16 ;

/* Variables and functions */

__attribute__((used)) static void stbi__jpeg_dequantize(short *data, stbi__uint16 *dequant)
{
   int i;
   for (i=0; i < 64; ++i)
      data[i] *= dequant[i];
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
          // dynamic_instructions_O0 : 905
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 390
          // ------------------------------- 
          // static_instructions_O2 : 42
          // dynamic_instructions_O2 : 42
          // ------------------------------- 
          // static_instructions_O3 : 42
          // dynamic_instructions_O3 : 42
          // ------------------------------- 
          // static_instructions_Ofast : 42
          // dynamic_instructions_Ofast : 42
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 389
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 455
          // ------------------------------- 

          int _len_data0 = 65025;
          short * data = (short *) malloc(_len_data0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dequant0 = 65025;
          short * dequant = (short *) malloc(_len_dequant0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_dequant0; _i0++) {
            dequant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          stbi__jpeg_dequantize(data,dequant);
          free(data);
          free(dequant);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 905
          // ------------------------------- 
          // static_instructions_O1 : 12
          // dynamic_instructions_O1 : 390
          // ------------------------------- 
          // static_instructions_O2 : 42
          // dynamic_instructions_O2 : 42
          // ------------------------------- 
          // static_instructions_O3 : 42
          // dynamic_instructions_O3 : 42
          // ------------------------------- 
          // static_instructions_Ofast : 42
          // dynamic_instructions_Ofast : 42
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 389
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 455
          // ------------------------------- 

          int _len_data0 = 100;
          short * data = (short *) malloc(_len_data0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_dequant0 = 100;
          short * dequant = (short *) malloc(_len_dequant0*sizeof(short));
          for(int _i0 = 0; _i0 < _len_dequant0; _i0++) {
            dequant[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          stbi__jpeg_dequantize(data,dequant);
          free(data);
          free(dequant);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
