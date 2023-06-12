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

/* Type definitions */

/* Variables and functions */

void list_add_sub (int *a, int *b, unsigned long long mask) {
  int i;
  int j = 0;
  for (i = 0; i < 64; i++) if (mask & (1ull << i)) {
    a[i] += b[j ++];
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
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 1059
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 367
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 331
          // ------------------------------- 
          // static_instructions_O3 : 25
          // dynamic_instructions_O3 : 331
          // ------------------------------- 
          // static_instructions_Ofast : 25
          // dynamic_instructions_Ofast : 331
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 358
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 424
          // ------------------------------- 

          unsigned long long mask = 255;
        
          int _len_a0 = 65025;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_b0 = 65025;
          int * b = (int *) malloc(_len_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          list_add_sub(a,b,mask);
          free(a);
          free(b);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 993
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 337
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 305
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 305
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 305
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 334
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 400
          // ------------------------------- 

          unsigned long long mask = 10;
        
          int _len_a0 = 100;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_b0 = 100;
          int * b = (int *) malloc(_len_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          list_add_sub(a,b,mask);
          free(a);
          free(b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
