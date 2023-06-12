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

__attribute__((used)) static void list_add (int *a, int *b, int cnt) {
  if (!a || !b) { return; }
  int i;
  for (i = 0; i < cnt; i++) {
    a[i] += b[i];
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
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 3585
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 1288
          // ------------------------------- 
          // static_instructions_O2 : 90
          // dynamic_instructions_O2 : 366
          // ------------------------------- 
          // static_instructions_O3 : 90
          // dynamic_instructions_O3 : 366
          // ------------------------------- 
          // static_instructions_Ofast : 90
          // dynamic_instructions_Ofast : 366
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 1287
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 1543
          // ------------------------------- 

          int cnt = 255;
        
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
        
          list_add(a,b,cnt);
          free(a);
          free(b);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 26
          // dynamic_instructions_O0 : 155
          // ------------------------------- 
          // static_instructions_O1 : 18
          // dynamic_instructions_O1 : 63
          // ------------------------------- 
          // static_instructions_O2 : 54
          // dynamic_instructions_O2 : 59
          // ------------------------------- 
          // static_instructions_O3 : 54
          // dynamic_instructions_O3 : 59
          // ------------------------------- 
          // static_instructions_Ofast : 54
          // dynamic_instructions_Ofast : 59
          // ------------------------------- 
          // static_instructions_Os : 17
          // dynamic_instructions_Os : 62
          // ------------------------------- 
          // static_instructions_Oz : 17
          // dynamic_instructions_Oz : 73
          // ------------------------------- 

          int cnt = 10;
        
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
        
          list_add(a,b,cnt);
          free(a);
          free(b);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 10
          // dynamic_instructions_O1 : 10
          // ------------------------------- 
          // static_instructions_O2 : 10
          // dynamic_instructions_O2 : 10
          // ------------------------------- 
          // static_instructions_O3 : 10
          // dynamic_instructions_O3 : 10
          // ------------------------------- 
          // static_instructions_Ofast : 10
          // dynamic_instructions_Ofast : 10
          // ------------------------------- 
          // static_instructions_Os : 10
          // dynamic_instructions_Os : 10
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_a0 = 1;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_b0 = 1;
          int * b = (int *) malloc(_len_b0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_b0; _i0++) {
            b[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          list_add(a,b,cnt);
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
