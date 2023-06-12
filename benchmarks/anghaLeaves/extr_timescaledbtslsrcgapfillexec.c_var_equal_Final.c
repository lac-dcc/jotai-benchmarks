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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {scalar_t__ varno; scalar_t__ varattno; scalar_t__ vartype; } ;
typedef  TYPE_1__ Var ;

/* Variables and functions */

__attribute__((used)) static bool
var_equal(Var *v1, Var *v2)
{
	return v1->varno == v2->varno && v1->varattno == v2->varattno && v1->vartype == v2->vartype;
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
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_v10 = 65025;
          struct TYPE_4__ * v1 = (struct TYPE_4__ *) malloc(_len_v10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_v10; _i0++) {
              v1[_i0].varno = ((-2 * (next_i()%2)) + 1) * next_i();
          v1[_i0].varattno = ((-2 * (next_i()%2)) + 1) * next_i();
          v1[_i0].vartype = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_v20 = 65025;
          struct TYPE_4__ * v2 = (struct TYPE_4__ *) malloc(_len_v20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_v20; _i0++) {
              v2[_i0].varno = ((-2 * (next_i()%2)) + 1) * next_i();
          v2[_i0].varattno = ((-2 * (next_i()%2)) + 1) * next_i();
          v2[_i0].vartype = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = var_equal(v1,v2);
          printf("%d\n", benchRet); 
          free(v1);
          free(v2);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_v10 = 100;
          struct TYPE_4__ * v1 = (struct TYPE_4__ *) malloc(_len_v10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_v10; _i0++) {
              v1[_i0].varno = ((-2 * (next_i()%2)) + 1) * next_i();
          v1[_i0].varattno = ((-2 * (next_i()%2)) + 1) * next_i();
          v1[_i0].vartype = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_v20 = 100;
          struct TYPE_4__ * v2 = (struct TYPE_4__ *) malloc(_len_v20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_v20; _i0++) {
              v2[_i0].varno = ((-2 * (next_i()%2)) + 1) * next_i();
          v2[_i0].varattno = ((-2 * (next_i()%2)) + 1) * next_i();
          v2[_i0].vartype = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = var_equal(v1,v2);
          printf("%d\n", benchRet); 
          free(v1);
          free(v2);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 15
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 15
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 15
          // ------------------------------- 

          int _len_v10 = 1;
          struct TYPE_4__ * v1 = (struct TYPE_4__ *) malloc(_len_v10*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_v10; _i0++) {
              v1[_i0].varno = ((-2 * (next_i()%2)) + 1) * next_i();
          v1[_i0].varattno = ((-2 * (next_i()%2)) + 1) * next_i();
          v1[_i0].vartype = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_v20 = 1;
          struct TYPE_4__ * v2 = (struct TYPE_4__ *) malloc(_len_v20*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_v20; _i0++) {
              v2[_i0].varno = ((-2 * (next_i()%2)) + 1) * next_i();
          v2[_i0].varattno = ((-2 * (next_i()%2)) + 1) * next_i();
          v2[_i0].vartype = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = var_equal(v1,v2);
          printf("%d\n", benchRet); 
          free(v1);
          free(v2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
