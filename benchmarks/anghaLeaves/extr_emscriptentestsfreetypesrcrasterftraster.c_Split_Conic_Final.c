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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int x; int y; } ;
typedef  TYPE_1__ TPoint ;
typedef  int Long ;

/* Variables and functions */

__attribute__((used)) static void
  Split_Conic( TPoint*  base )
  {
    Long  a, b;


    base[4].x = base[2].x;
    b = base[1].x;
    a = base[3].x = ( base[2].x + b ) / 2;
    b = base[1].x = ( base[0].x + b ) / 2;
    base[2].x = ( a + b ) / 2;

    base[4].y = base[2].y;
    b = base[1].y;
    a = base[3].y = ( base[2].y + b ) / 2;
    b = base[1].y = ( base[0].y + b ) / 2;
    base[2].y = ( a + b ) / 2;

    /* hand optimized.  gcc doesn't seem to be too good at common      */
    /* expression substitution and instruction scheduling ;-)          */
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
          // static_instructions_O0 : 71
          // dynamic_instructions_O0 : 71
          // ------------------------------- 
          // static_instructions_O1 : 46
          // dynamic_instructions_O1 : 46
          // ------------------------------- 
          // static_instructions_O2 : 46
          // dynamic_instructions_O2 : 46
          // ------------------------------- 
          // static_instructions_O3 : 46
          // dynamic_instructions_O3 : 46
          // ------------------------------- 
          // static_instructions_Ofast : 46
          // dynamic_instructions_Ofast : 46
          // ------------------------------- 
          // static_instructions_Os : 46
          // dynamic_instructions_Os : 46
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 39
          // ------------------------------- 

          int _len_base0 = 65025;
          struct TYPE_3__ * base = (struct TYPE_3__ *) malloc(_len_base0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
              base[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          base[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          Split_Conic(base);
          free(base);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 71
          // dynamic_instructions_O0 : 71
          // ------------------------------- 
          // static_instructions_O1 : 46
          // dynamic_instructions_O1 : 46
          // ------------------------------- 
          // static_instructions_O2 : 46
          // dynamic_instructions_O2 : 46
          // ------------------------------- 
          // static_instructions_O3 : 46
          // dynamic_instructions_O3 : 46
          // ------------------------------- 
          // static_instructions_Ofast : 46
          // dynamic_instructions_Ofast : 46
          // ------------------------------- 
          // static_instructions_Os : 46
          // dynamic_instructions_Os : 46
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 39
          // ------------------------------- 

          int _len_base0 = 100;
          struct TYPE_3__ * base = (struct TYPE_3__ *) malloc(_len_base0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_base0; _i0++) {
              base[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          base[_i0].y = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          Split_Conic(base);
          free(base);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
