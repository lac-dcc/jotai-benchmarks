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

int max_int_index(int *a, int n)
{
    if(n <= 0) return -1;
    int i, max_i = 0;
    int max = a[0];
    for(i = 1; i < n; ++i){
        if(a[i] > max){
            max = a[i];
            max_i = i;
        }
    }
    return max_i;
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
          // dynamic_instructions_O0 : 3321
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 1792
          // ------------------------------- 
          // static_instructions_O2 : 55
          // dynamic_instructions_O2 : 1488
          // ------------------------------- 
          // static_instructions_O3 : 53
          // dynamic_instructions_O3 : 1362
          // ------------------------------- 
          // static_instructions_Ofast : 53
          // dynamic_instructions_Ofast : 1362
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 1792
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 2044
          // ------------------------------- 

          int n = 255;
        
          int _len_a0 = 65025;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = max_int_index(a,n);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 136
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 77
          // ------------------------------- 
          // static_instructions_O2 : 55
          // dynamic_instructions_O2 : 78
          // ------------------------------- 
          // static_instructions_O3 : 53
          // dynamic_instructions_O3 : 74
          // ------------------------------- 
          // static_instructions_Ofast : 53
          // dynamic_instructions_Ofast : 74
          // ------------------------------- 
          // static_instructions_Os : 21
          // dynamic_instructions_Os : 77
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 84
          // ------------------------------- 

          int n = 10;
        
          int _len_a0 = 100;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = max_int_index(a,n);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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
          // static_instructions_Oz : 4
          // dynamic_instructions_Oz : 4
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_a0 = 1;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = max_int_index(a,n);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
