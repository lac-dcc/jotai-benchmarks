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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
       3            empty\n\
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
typedef  int uint32_t ;

/* Variables and functions */

__attribute__((used)) static uint32_t setup_salt(uint32_t salt)
{
	uint32_t obit, saltbit, saltbits;
	unsigned int i;

	saltbits = 0;
	saltbit = 1;
	obit = 0x800000;
	for (i = 0; i < 24; i++) {
		if (salt & saltbit)
			saltbits |= obit;
		saltbit <<= 1;
		obit >>= 1;
	}

	return saltbits;
}

// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {


    // int-bounds
    case 0:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 405
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 201
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 169
          // ------------------------------- 
          // static_instructions_O3 : 96
          // dynamic_instructions_O3 : 96
          // ------------------------------- 
          // static_instructions_Ofast : 96
          // dynamic_instructions_Ofast : 96
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 200
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 250
          // ------------------------------- 

          int salt = 100;
        
          int benchRet = setup_salt(salt);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 420
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 201
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 169
          // ------------------------------- 
          // static_instructions_O3 : 96
          // dynamic_instructions_O3 : 96
          // ------------------------------- 
          // static_instructions_Ofast : 96
          // dynamic_instructions_Ofast : 96
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 200
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 250
          // ------------------------------- 

          int salt = 255;
        
          int benchRet = setup_salt(salt);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 402
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 201
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 169
          // ------------------------------- 
          // static_instructions_O3 : 96
          // dynamic_instructions_O3 : 96
          // ------------------------------- 
          // static_instructions_Ofast : 96
          // dynamic_instructions_Ofast : 96
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 200
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 250
          // ------------------------------- 

          int salt = 10;
        
          int benchRet = setup_salt(salt);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 456
          // ------------------------------- 
          // static_instructions_O1 : 17
          // dynamic_instructions_O1 : 201
          // ------------------------------- 
          // static_instructions_O2 : 29
          // dynamic_instructions_O2 : 169
          // ------------------------------- 
          // static_instructions_O3 : 96
          // dynamic_instructions_O3 : 96
          // ------------------------------- 
          // static_instructions_Ofast : 96
          // dynamic_instructions_Ofast : 96
          // ------------------------------- 
          // static_instructions_Os : 16
          // dynamic_instructions_Os : 200
          // ------------------------------- 
          // static_instructions_Oz : 18
          // dynamic_instructions_Oz : 250
          // ------------------------------- 

          int salt = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = setup_salt(salt);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
