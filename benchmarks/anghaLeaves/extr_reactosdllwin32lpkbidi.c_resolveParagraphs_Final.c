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
typedef  scalar_t__ WORD ;

/* Variables and functions */
 scalar_t__ B ; 
 scalar_t__ BN ; 

__attribute__((used)) static int resolveParagraphs(WORD *types, int cch)
{
    /* skip characters not of type B */
    int ich = 0;
    for(; ich < cch && types[ich] != B; ich++);
    /* stop after first B, make it a BN for use in the next steps */
    if (ich < cch && types[ich] == B)
        types[ich++] = BN;
    return ich;
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
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 4865
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 1286
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 1286
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 1286
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 1286
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 1285
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 1541
          // ------------------------------- 

          int cch = 255;
        
          int _len_types0 = 65025;
          long * types = (long *) malloc(_len_types0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_types0; _i0++) {
            types[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = resolveParagraphs(types,cch);
          printf("%d\n", benchRet); 
          free(types);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 31
          // dynamic_instructions_O0 : 210
          // ------------------------------- 
          // static_instructions_O1 : 16
          // dynamic_instructions_O1 : 61
          // ------------------------------- 
          // static_instructions_O2 : 16
          // dynamic_instructions_O2 : 61
          // ------------------------------- 
          // static_instructions_O3 : 16
          // dynamic_instructions_O3 : 61
          // ------------------------------- 
          // static_instructions_Ofast : 16
          // dynamic_instructions_Ofast : 61
          // ------------------------------- 
          // static_instructions_Os : 15
          // dynamic_instructions_Os : 60
          // ------------------------------- 
          // static_instructions_Oz : 15
          // dynamic_instructions_Oz : 71
          // ------------------------------- 

          int cch = 10;
        
          int _len_types0 = 100;
          long * types = (long *) malloc(_len_types0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_types0; _i0++) {
            types[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = resolveParagraphs(types,cch);
          printf("%d\n", benchRet); 
          free(types);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 20
          // dynamic_instructions_O0 : 20
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
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          int cch = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_types0 = 1;
          long * types = (long *) malloc(_len_types0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_types0; _i0++) {
            types[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int benchRet = resolveParagraphs(types,cch);
          printf("%d\n", benchRet); 
          free(types);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
