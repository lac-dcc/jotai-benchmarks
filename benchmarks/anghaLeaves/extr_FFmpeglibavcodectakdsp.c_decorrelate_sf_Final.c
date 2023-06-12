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
       0            big-arr-10x\n\
       1            empty\n\
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
typedef  int int32_t ;

/* Variables and functions */

__attribute__((used)) static void decorrelate_sf(int32_t *p1, int32_t *p2, int length, int dshift, int dfactor)
{
    int i;

    for (i = 0; i < length; i++) {
        int32_t a = p1[i];
        int32_t b = p2[i];
        b         = dfactor * (b >> dshift) + 128 >> 8 << dshift;
        p1[i]     = b - a;
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


    // big-arr-10x
    case 0:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 323
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 119
          // ------------------------------- 
          // static_instructions_O2 : 86
          // dynamic_instructions_O2 : 86
          // ------------------------------- 
          // static_instructions_O3 : 86
          // dynamic_instructions_O3 : 86
          // ------------------------------- 
          // static_instructions_Ofast : 86
          // dynamic_instructions_Ofast : 86
          // ------------------------------- 
          // static_instructions_Os : 19
          // dynamic_instructions_Os : 118
          // ------------------------------- 
          // static_instructions_Oz : 19
          // dynamic_instructions_Oz : 129
          // ------------------------------- 

          int length = 10;
        
          int dshift = 10;
        
          int dfactor = 10;
        
          int _len_p10 = 100;
          int * p1 = (int *) malloc(_len_p10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p20 = 100;
          int * p2 = (int *) malloc(_len_p20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p20; _i0++) {
            p2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          decorrelate_sf(p1,p2,length,dshift,dfactor);
          free(p1);
          free(p2);
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 13
          // dynamic_instructions_O0 : 13
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

          int length = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int dshift = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int dfactor = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_p10 = 1;
          int * p1 = (int *) malloc(_len_p10*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p10; _i0++) {
            p1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_p20 = 1;
          int * p2 = (int *) malloc(_len_p20*sizeof(int));
          for(int _i0 = 0; _i0 < _len_p20; _i0++) {
            p2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          decorrelate_sf(p1,p2,length,dshift,dfactor);
          free(p1);
          free(p2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
