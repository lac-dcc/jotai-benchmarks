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
typedef  int color_type ;
struct TYPE_3__ {int* color_table; } ;
typedef  TYPE_1__ ColorProfile ;

/* Variables and functions */

color_type
colorprofile_to_color(ColorProfile *self, color_type entry, color_type defval) {
    color_type t = entry & 0xFF, r;
    switch(t) {
        case 1:
            r = (entry >> 8) & 0xff;
            return self->color_table[r];
        case 2:
            return entry >> 8;
        default:
            return defval;
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int entry = 100;
        
          int defval = 100;
        
          int _len_self0 = 1;
          struct TYPE_3__ * self = (struct TYPE_3__ *) malloc(_len_self0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              int _len_self__i0__color_table0 = 1;
          self[_i0].color_table = (int *) malloc(_len_self__i0__color_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_self__i0__color_table0; _j0++) {
            self[_i0].color_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = colorprofile_to_color(self,entry,defval);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].color_table);
          }
          free(self);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int entry = 255;
        
          int defval = 255;
        
          int _len_self0 = 65025;
          struct TYPE_3__ * self = (struct TYPE_3__ *) malloc(_len_self0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              int _len_self__i0__color_table0 = 1;
          self[_i0].color_table = (int *) malloc(_len_self__i0__color_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_self__i0__color_table0; _j0++) {
            self[_i0].color_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = colorprofile_to_color(self,entry,defval);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].color_table);
          }
          free(self);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int entry = 10;
        
          int defval = 10;
        
          int _len_self0 = 100;
          struct TYPE_3__ * self = (struct TYPE_3__ *) malloc(_len_self0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              int _len_self__i0__color_table0 = 1;
          self[_i0].color_table = (int *) malloc(_len_self__i0__color_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_self__i0__color_table0; _j0++) {
            self[_i0].color_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = colorprofile_to_color(self,entry,defval);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].color_table);
          }
          free(self);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 7
          // dynamic_instructions_O1 : 7
          // ------------------------------- 
          // static_instructions_O2 : 7
          // dynamic_instructions_O2 : 7
          // ------------------------------- 
          // static_instructions_O3 : 7
          // dynamic_instructions_O3 : 7
          // ------------------------------- 
          // static_instructions_Ofast : 7
          // dynamic_instructions_Ofast : 7
          // ------------------------------- 
          // static_instructions_Os : 7
          // dynamic_instructions_Os : 7
          // ------------------------------- 
          // static_instructions_Oz : 7
          // dynamic_instructions_Oz : 7
          // ------------------------------- 

          int entry = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int defval = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_self0 = 1;
          struct TYPE_3__ * self = (struct TYPE_3__ *) malloc(_len_self0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_self0; _i0++) {
              int _len_self__i0__color_table0 = 1;
          self[_i0].color_table = (int *) malloc(_len_self__i0__color_table0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_self__i0__color_table0; _j0++) {
            self[_i0].color_table[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          }
        
          int benchRet = colorprofile_to_color(self,entry,defval);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_self0; _aux++) {
          free(self[_aux].color_table);
          }
          free(self);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
