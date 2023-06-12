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
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {float x; float y; } ;
struct TYPE_7__ {float value; float fract; } ;
struct TYPE_8__ {float value; float fract; } ;
struct TYPE_9__ {TYPE_1__ y; TYPE_2__ x; } ;
typedef  TYPE_3__ POINTFX ;
typedef  TYPE_4__ D3DXVECTOR2 ;

/* Variables and functions */

__attribute__((used)) static inline D3DXVECTOR2 *convert_fixed_to_float(POINTFX *pt, int count, unsigned int emsquare)
{
    D3DXVECTOR2 *ret = (D3DXVECTOR2*)pt;
    while (count--) {
        D3DXVECTOR2 *pt_flt = (D3DXVECTOR2*)pt;
        pt_flt->x = (pt->x.value + pt->x.fract / (float)0x10000) / emsquare;
        pt_flt->y = (pt->y.value + pt->y.fract / (float)0x10000) / emsquare;
        pt++;
    }
    return ret;
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
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 8431
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 3327
          // ------------------------------- 
          // static_instructions_O2 : 90
          // dynamic_instructions_O2 : 2844
          // ------------------------------- 
          // static_instructions_O3 : 90
          // dynamic_instructions_O3 : 2844
          // ------------------------------- 
          // static_instructions_Ofast : 93
          // dynamic_instructions_Ofast : 2847
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 3326
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 3836
          // ------------------------------- 

          int count = 255;
        
          unsigned int emsquare = 255;
        
          int _len_pt0 = 65025;
          struct TYPE_9__ * pt = (struct TYPE_9__ *) malloc(_len_pt0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
              pt[_i0].y.value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          pt[_i0].y.fract = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          pt[_i0].x.value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          pt[_i0].x.fract = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
        
          }
        
          struct TYPE_10__ * benchRet = convert_fixed_to_float(pt,count,emsquare);
          printf("%f\n", (*benchRet).x);
          printf("%f\n", (*benchRet).y);
          free(pt);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 346
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 142
          // ------------------------------- 
          // static_instructions_O2 : 90
          // dynamic_instructions_O2 : 147
          // ------------------------------- 
          // static_instructions_O3 : 90
          // dynamic_instructions_O3 : 147
          // ------------------------------- 
          // static_instructions_Ofast : 93
          // dynamic_instructions_Ofast : 150
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 141
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 161
          // ------------------------------- 

          int count = 10;
        
          unsigned int emsquare = 10;
        
          int _len_pt0 = 100;
          struct TYPE_9__ * pt = (struct TYPE_9__ *) malloc(_len_pt0*sizeof(struct TYPE_9__));
          for(int _i0 = 0; _i0 < _len_pt0; _i0++) {
              pt[_i0].y.value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          pt[_i0].y.fract = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
          pt[_i0].x.value = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          pt[_i0].x.fract = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        
        
          }
        
          struct TYPE_10__ * benchRet = convert_fixed_to_float(pt,count,emsquare);
          printf("%f\n", (*benchRet).x);
          printf("%f\n", (*benchRet).y);
          free(pt);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
