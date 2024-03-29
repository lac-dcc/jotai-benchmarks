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
typedef  int /*<<< orphan*/  uint8_t ;

/* Variables and functions */

__attribute__((used)) static void MoveToFront(uint8_t* v, size_t index) {
  uint8_t value = v[index];
  size_t i;
  for (i = index; i != 0; --i) {
    v[i] = v[i - 1];
  }
  v[0] = value;
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
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 3332
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 1285
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 350
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 350
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 350
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 1284
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 1538
          // ------------------------------- 

          unsigned long index = 255;
        
          int _len_v0 = 65025;
          int * v = (int *) malloc(_len_v0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          MoveToFront(v,index);
          free(v);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 28
          // dynamic_instructions_O0 : 147
          // ------------------------------- 
          // static_instructions_O1 : 15
          // dynamic_instructions_O1 : 60
          // ------------------------------- 
          // static_instructions_O2 : 28
          // dynamic_instructions_O2 : 39
          // ------------------------------- 
          // static_instructions_O3 : 28
          // dynamic_instructions_O3 : 39
          // ------------------------------- 
          // static_instructions_Ofast : 28
          // dynamic_instructions_Ofast : 39
          // ------------------------------- 
          // static_instructions_Os : 14
          // dynamic_instructions_Os : 59
          // ------------------------------- 
          // static_instructions_Oz : 12
          // dynamic_instructions_Oz : 68
          // ------------------------------- 

          unsigned long index = 10;
        
          int _len_v0 = 100;
          int * v = (int *) malloc(_len_v0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_v0; _i0++) {
            v[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          MoveToFront(v,index);
          free(v);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
