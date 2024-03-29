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

/* Variables and functions */

__attribute__((used)) static void reverse_list (int *Res, int sz) {
  int i;
  for (i = 0; i < (sz >> 1); i++) {
    int t = Res[i];
    Res[i] = Res[sz - i - 1];
    Res[sz - i - 1] = t;
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
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 3695
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 1157
          // ------------------------------- 
          // static_instructions_O2 : 44
          // dynamic_instructions_O2 : 974
          // ------------------------------- 
          // static_instructions_O3 : 44
          // dynamic_instructions_O3 : 974
          // ------------------------------- 
          // static_instructions_Ofast : 44
          // dynamic_instructions_Ofast : 974
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 1156
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 1281
          // ------------------------------- 

          int sz = 255;
        
          int _len_Res0 = 65025;
          int * Res = (int *) malloc(_len_Res0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Res0; _i0++) {
            Res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          reverse_list(Res,sz);
          free(Res);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 36
          // dynamic_instructions_O0 : 157
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 59
          // ------------------------------- 
          // static_instructions_O2 : 44
          // dynamic_instructions_O2 : 59
          // ------------------------------- 
          // static_instructions_O3 : 44
          // dynamic_instructions_O3 : 59
          // ------------------------------- 
          // static_instructions_Ofast : 44
          // dynamic_instructions_Ofast : 59
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 58
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 61
          // ------------------------------- 

          int sz = 10;
        
          int _len_Res0 = 100;
          int * Res = (int *) malloc(_len_Res0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Res0; _i0++) {
            Res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          reverse_list(Res,sz);
          free(Res);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 12
          // dynamic_instructions_O0 : 12
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
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int sz = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_Res0 = 1;
          int * Res = (int *) malloc(_len_Res0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Res0; _i0++) {
            Res[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          reverse_list(Res,sz);
          free(Res);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
