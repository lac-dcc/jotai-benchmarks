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
typedef  int byte ;

/* Variables and functions */

__attribute__((used)) static void R_BlendOverTexture( byte *data, int pixelCount, byte blend[4] ) {
	int		i;
	int		inverseAlpha;
	int		premult[3];

	inverseAlpha = 255 - blend[3];
	premult[0] = blend[0] * blend[3];
	premult[1] = blend[1] * blend[3];
	premult[2] = blend[2] * blend[3];

	for ( i = 0 ; i < pixelCount ; i++, data+=4 ) {
		data[0] = ( data[0] * inverseAlpha + premult[0] ) >> 9;
		data[1] = ( data[1] * inverseAlpha + premult[1] ) >> 9;
		data[2] = ( data[2] * inverseAlpha + premult[2] ) >> 9;
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
          // static_instructions_O0 : 58
          // dynamic_instructions_O0 : 7935
          // ------------------------------- 
          // static_instructions_O1 : 33
          // dynamic_instructions_O1 : 4605
          // ------------------------------- 
          // static_instructions_O2 : 33
          // dynamic_instructions_O2 : 4605
          // ------------------------------- 
          // static_instructions_O3 : 33
          // dynamic_instructions_O3 : 4605
          // ------------------------------- 
          // static_instructions_Ofast : 33
          // dynamic_instructions_Ofast : 4605
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 4604
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 5117
          // ------------------------------- 

          int pixelCount = 255;
        
          int _len_data0 = 65025;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_blend0 = 65025;
          int * blend = (int *) malloc(_len_blend0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blend0; _i0++) {
            blend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          R_BlendOverTexture(data,pixelCount,blend);
          free(data);
          free(blend);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 58
          // dynamic_instructions_O0 : 340
          // ------------------------------- 
          // static_instructions_O1 : 33
          // dynamic_instructions_O1 : 195
          // ------------------------------- 
          // static_instructions_O2 : 33
          // dynamic_instructions_O2 : 195
          // ------------------------------- 
          // static_instructions_O3 : 33
          // dynamic_instructions_O3 : 195
          // ------------------------------- 
          // static_instructions_Ofast : 33
          // dynamic_instructions_Ofast : 195
          // ------------------------------- 
          // static_instructions_Os : 32
          // dynamic_instructions_Os : 194
          // ------------------------------- 
          // static_instructions_Oz : 35
          // dynamic_instructions_Oz : 217
          // ------------------------------- 

          int pixelCount = 10;
        
          int _len_data0 = 100;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_blend0 = 100;
          int * blend = (int *) malloc(_len_blend0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blend0; _i0++) {
            blend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          R_BlendOverTexture(data,pixelCount,blend);
          free(data);
          free(blend);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 30
          // dynamic_instructions_O0 : 30
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
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 17
          // ------------------------------- 

          int pixelCount = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_data0 = 1;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_blend0 = 4;
          int * blend = (int *) malloc(_len_blend0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_blend0; _i0++) {
            blend[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          R_BlendOverTexture(data,pixelCount,blend);
          free(data);
          free(blend);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
