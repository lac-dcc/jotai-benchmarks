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
       0            empty\n\
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
typedef  size_t uint8 ;
typedef  int tmsize_t ;

/* Variables and functions */
 size_t* TIFFBitRevTable ; 

void
TIFFReverseBits(uint8* cp, tmsize_t n)  
{
	for (; n > 8; n -= 8) {
		cp[0] = TIFFBitRevTable[cp[0]];
		cp[1] = TIFFBitRevTable[cp[1]];
		cp[2] = TIFFBitRevTable[cp[2]];
		cp[3] = TIFFBitRevTable[cp[3]];
		cp[4] = TIFFBitRevTable[cp[4]];
		cp[5] = TIFFBitRevTable[cp[5]];
		cp[6] = TIFFBitRevTable[cp[6]];
		cp[7] = TIFFBitRevTable[cp[7]];
		cp += 8;
	}
	while (n-- > 0) {
		*cp = TIFFBitRevTable[*cp];
		cp++;
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


    // empty
    case 0:
    {
          // static_instructions_O0 : 15
          // dynamic_instructions_O0 : 15
          // ------------------------------- 
          // static_instructions_O1 : 8
          // dynamic_instructions_O1 : 8
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 8
          // dynamic_instructions_Os : 8
          // ------------------------------- 
          // static_instructions_Oz : 10
          // dynamic_instructions_Oz : 10
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_cp0 = 1;
          unsigned long * cp = (unsigned long *) malloc(_len_cp0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_cp0; _i0++) {
            cp[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          TIFFReverseBits(cp,n);
          free(cp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
