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
 int Q_order ; 

__attribute__((used)) static void do_llswap (int *R, long l) {
  long i;
  if (Q_order == -2) {
    return;
  } else if (Q_order < 0) {
    for (i = 0; i < l; i++) {
      int t = R[2*i];
      R[2*i] = R[2*i+1];
      R[2*i+1] = t;
    }
  } else if (Q_order == 2) {
    for (i = 0; i < l; i++) {
      R[2*i+1] = -R[2*i+1];
    }
  } else {
    for (i = 0; i < l; i++) {
      int t = R[2*i];
      R[2*i] = -R[2*i+1];
      R[2*i+1] = -t;
    }
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
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 6904
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 2311
          // ------------------------------- 
          // static_instructions_O2 : 47
          // dynamic_instructions_O2 : 1937
          // ------------------------------- 
          // static_instructions_O3 : 45
          // dynamic_instructions_O3 : 1935
          // ------------------------------- 
          // static_instructions_Ofast : 45
          // dynamic_instructions_Ofast : 1935
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 2310
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 2566
          // ------------------------------- 

          long l = 255;
        
          int _len_R0 = 65025;
          int * R = (int *) malloc(_len_R0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_R0; _i0++) {
            R[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          do_llswap(R,l);
          free(R);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 43
          // dynamic_instructions_O0 : 289
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 106
          // ------------------------------- 
          // static_instructions_O2 : 38
          // dynamic_instructions_O2 : 98
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 97
          // ------------------------------- 
          // static_instructions_Ofast : 37
          // dynamic_instructions_Ofast : 97
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 105
          // ------------------------------- 
          // static_instructions_Oz : 24
          // dynamic_instructions_Oz : 116
          // ------------------------------- 

          long l = 10;
        
          int _len_R0 = 100;
          int * R = (int *) malloc(_len_R0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_R0; _i0++) {
            R[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          do_llswap(R,l);
          free(R);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 19
          // dynamic_instructions_O0 : 19
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 13
          // ------------------------------- 
          // static_instructions_O2 : 13
          // dynamic_instructions_O2 : 13
          // ------------------------------- 
          // static_instructions_O3 : 13
          // dynamic_instructions_O3 : 13
          // ------------------------------- 
          // static_instructions_Ofast : 13
          // dynamic_instructions_Ofast : 13
          // ------------------------------- 
          // static_instructions_Os : 13
          // dynamic_instructions_Os : 13
          // ------------------------------- 
          // static_instructions_Oz : 16
          // dynamic_instructions_Oz : 16
          // ------------------------------- 

          long l = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_R0 = 1;
          int * R = (int *) malloc(_len_R0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_R0; _i0++) {
            R[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          do_llswap(R,l);
          free(R);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
