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
struct TYPE_3__ {long long x; int z; } ;
typedef  TYPE_1__ ltree_t ;

/* Variables and functions */

__attribute__((used)) static inline int legacy_tree_less (long long x, int z, ltree_t *T) {
  return x < T->x || (x == T->x && z < T->z); 
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
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          long long x = 100;
        
          int z = 100;
        
          int _len_T0 = 1;
          struct TYPE_3__ * T = (struct TYPE_3__ *) malloc(_len_T0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_T0; _i0++) {
              T[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          T[_i0].z = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = legacy_tree_less(x,z,T);
          printf("%d\n", benchRet); 
          free(T);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          long long x = 255;
        
          int z = 255;
        
          int _len_T0 = 65025;
          struct TYPE_3__ * T = (struct TYPE_3__ *) malloc(_len_T0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_T0; _i0++) {
              T[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          T[_i0].z = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = legacy_tree_less(x,z,T);
          printf("%d\n", benchRet); 
          free(T);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 24
          // dynamic_instructions_O0 : 24
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          long long x = 10;
        
          int z = 10;
        
          int _len_T0 = 100;
          struct TYPE_3__ * T = (struct TYPE_3__ *) malloc(_len_T0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_T0; _i0++) {
              T[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          T[_i0].z = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = legacy_tree_less(x,z,T);
          printf("%d\n", benchRet); 
          free(T);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
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
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          long long x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int z = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_T0 = 1;
          struct TYPE_3__ * T = (struct TYPE_3__ *) malloc(_len_T0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_T0; _i0++) {
              T[_i0].x = ((-2 * (next_i()%2)) + 1) * next_i();
          T[_i0].z = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = legacy_tree_less(x,z,T);
          printf("%d\n", benchRet); 
          free(T);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
