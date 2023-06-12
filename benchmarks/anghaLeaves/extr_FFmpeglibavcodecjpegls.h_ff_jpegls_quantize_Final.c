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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int T3; int T2; int T1; int near; } ;
typedef  TYPE_1__ JLSState ;

/* Variables and functions */

__attribute__((used)) static inline int ff_jpegls_quantize(JLSState *s, int v)
{
    if (v == 0)
        return 0;
    if (v < 0) {
        if (v <= -s->T3)
            return -4;
        if (v <= -s->T2)
            return -3;
        if (v <= -s->T1)
            return -2;
        if (v < -s->near)
            return -1;
        return 0;
    } else {
        if (v <= s->near)
            return 0;
        if (v < s->T1)
            return 1;
        if (v < s->T2)
            return 2;
        if (v < s->T3)
            return 3;
        return 4;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
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
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int v = 100;
        
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].T3 = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].T2 = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].T1 = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].near = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ff_jpegls_quantize(s,v);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
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
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int v = 255;
        
          int _len_s0 = 65025;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].T3 = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].T2 = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].T1 = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].near = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ff_jpegls_quantize(s,v);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 28
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 21
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
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int v = 10;
        
          int _len_s0 = 100;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].T3 = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].T2 = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].T1 = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].near = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ff_jpegls_quantize(s,v);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 14
          // dynamic_instructions_O1 : 14
          // ------------------------------- 
          // static_instructions_O2 : 14
          // dynamic_instructions_O2 : 14
          // ------------------------------- 
          // static_instructions_O3 : 14
          // dynamic_instructions_O3 : 14
          // ------------------------------- 
          // static_instructions_Ofast : 14
          // dynamic_instructions_Ofast : 14
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 14
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int v = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_s0 = 1;
          struct TYPE_3__ * s = (struct TYPE_3__ *) malloc(_len_s0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              s[_i0].T3 = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].T2 = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].T1 = ((-2 * (next_i()%2)) + 1) * next_i();
          s[_i0].near = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ff_jpegls_quantize(s,v);
          printf("%d\n", benchRet); 
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
