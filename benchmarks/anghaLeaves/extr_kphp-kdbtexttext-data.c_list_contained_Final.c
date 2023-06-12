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
typedef  scalar_t__ hash_t ;

/* Variables and functions */

int list_contained (hash_t *A, int An, hash_t *B, int Bn) {
  int i;
  for (i = 0; i < An; i++) {
    int l = -1, r = Bn;
    hash_t cur = A[i];
    while (r - l > 1) {
      int m = (l + r) >> 1;
      if (cur < B[m]) {
        r = m;
      } else {
        l = m;
      }
    }
    if (l < 0 || B[l] != cur) {
      return 0;
    }
  }

  return 1;
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
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 39284
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 24237
          // ------------------------------- 
          // static_instructions_O2 : 39
          // dynamic_instructions_O2 : 23985
          // ------------------------------- 
          // static_instructions_O3 : 38
          // dynamic_instructions_O3 : 23730
          // ------------------------------- 
          // static_instructions_Ofast : 38
          // dynamic_instructions_Ofast : 23730
          // ------------------------------- 
          // static_instructions_Os : 38
          // dynamic_instructions_Os : 25769
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 26538
          // ------------------------------- 

          int An = 255;
        
          int Bn = 255;
        
          int _len_A0 = 65025;
          long * A = (long *) malloc(_len_A0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_B0 = 65025;
          long * B = (long *) malloc(_len_B0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = list_contained(A,An,B,Bn);
          printf("%d\n", benchRet); 
          free(A);
          free(B);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 914
          // ------------------------------- 
          // static_instructions_O1 : 37
          // dynamic_instructions_O1 : 562
          // ------------------------------- 
          // static_instructions_O2 : 39
          // dynamic_instructions_O2 : 555
          // ------------------------------- 
          // static_instructions_O3 : 38
          // dynamic_instructions_O3 : 545
          // ------------------------------- 
          // static_instructions_Ofast : 38
          // dynamic_instructions_Ofast : 545
          // ------------------------------- 
          // static_instructions_Os : 38
          // dynamic_instructions_Os : 584
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 618
          // ------------------------------- 

          int An = 10;
        
          int Bn = 10;
        
          int _len_A0 = 100;
          long * A = (long *) malloc(_len_A0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_B0 = 100;
          long * B = (long *) malloc(_len_B0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = list_contained(A,An,B,Bn);
          printf("%d\n", benchRet); 
          free(A);
          free(B);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 14
          // dynamic_instructions_O0 : 14
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 9
          // dynamic_instructions_O3 : 9
          // ------------------------------- 
          // static_instructions_Ofast : 9
          // dynamic_instructions_Ofast : 9
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 18
          // ------------------------------- 

          int An = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int Bn = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_A0 = 1;
          long * A = (long *) malloc(_len_A0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_A0; _i0++) {
            A[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_B0 = 1;
          long * B = (long *) malloc(_len_B0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_B0; _i0++) {
            B[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = list_contained(A,An,B,Bn);
          printf("%d\n", benchRet); 
          free(A);
          free(B);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
