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

__attribute__((used)) static void ZDICT_flatLit(unsigned* countLit)
{
    int u;
    for (u=1; u<256; u++) countLit[u] = 2;
    countLit[0]   = 4;
    countLit[253] = 1;
    countLit[254] = 1;
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
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 2309
          // ------------------------------- 
          // static_instructions_O1 : 13
          // dynamic_instructions_O1 : 1029
          // ------------------------------- 
          // static_instructions_O2 : 73
          // dynamic_instructions_O2 : 73
          // ------------------------------- 
          // static_instructions_O3 : 73
          // dynamic_instructions_O3 : 73
          // ------------------------------- 
          // static_instructions_Ofast : 73
          // dynamic_instructions_Ofast : 73
          // ------------------------------- 
          // static_instructions_Os : 12
          // dynamic_instructions_Os : 1028
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 1285
          // ------------------------------- 

          int _len_countLit0 = 65025;
          unsigned int * countLit = (unsigned int *) malloc(_len_countLit0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_countLit0; _i0++) {
            countLit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          ZDICT_flatLit(countLit);
          free(countLit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
