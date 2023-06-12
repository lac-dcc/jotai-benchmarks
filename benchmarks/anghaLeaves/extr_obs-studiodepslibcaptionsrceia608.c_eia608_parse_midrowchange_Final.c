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
typedef  int uint16_t ;
typedef  int eia608_style_t ;

/* Variables and functions */

int eia608_parse_midrowchange(uint16_t cc_data, int* chan, eia608_style_t* style, int* underline)
{
    (*chan) = !!(0x0800 & cc_data);

    if (0x1120 == (0x7770 & cc_data)) {
        (*style) = (0x000E & cc_data) >> 1;
        (*underline) = 0x0001 & cc_data;
    }

    return 1;
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
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int cc_data = 100;
        
          int _len_chan0 = 1;
          int * chan = (int *) malloc(_len_chan0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_style0 = 1;
          int * style = (int *) malloc(_len_style0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_style0; _i0++) {
            style[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_underline0 = 1;
          int * underline = (int *) malloc(_len_underline0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_underline0; _i0++) {
            underline[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = eia608_parse_midrowchange(cc_data,chan,style,underline);
          printf("%d\n", benchRet); 
          free(chan);
          free(style);
          free(underline);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int cc_data = 255;
        
          int _len_chan0 = 65025;
          int * chan = (int *) malloc(_len_chan0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_style0 = 65025;
          int * style = (int *) malloc(_len_style0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_style0; _i0++) {
            style[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_underline0 = 65025;
          int * underline = (int *) malloc(_len_underline0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_underline0; _i0++) {
            underline[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = eia608_parse_midrowchange(cc_data,chan,style,underline);
          printf("%d\n", benchRet); 
          free(chan);
          free(style);
          free(underline);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int cc_data = 10;
        
          int _len_chan0 = 100;
          int * chan = (int *) malloc(_len_chan0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_style0 = 100;
          int * style = (int *) malloc(_len_style0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_style0; _i0++) {
            style[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_underline0 = 100;
          int * underline = (int *) malloc(_len_underline0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_underline0; _i0++) {
            underline[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = eia608_parse_midrowchange(cc_data,chan,style,underline);
          printf("%d\n", benchRet); 
          free(chan);
          free(style);
          free(underline);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int cc_data = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_chan0 = 1;
          int * chan = (int *) malloc(_len_chan0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_chan0; _i0++) {
            chan[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_style0 = 1;
          int * style = (int *) malloc(_len_style0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_style0; _i0++) {
            style[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_underline0 = 1;
          int * underline = (int *) malloc(_len_underline0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_underline0; _i0++) {
            underline[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = eia608_parse_midrowchange(cc_data,chan,style,underline);
          printf("%d\n", benchRet); 
          free(chan);
          free(style);
          free(underline);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
