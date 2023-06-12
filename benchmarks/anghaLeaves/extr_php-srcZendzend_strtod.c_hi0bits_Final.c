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
       1            empty\n\
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
typedef  int ULong ;

/* Variables and functions */

__attribute__((used)) static int
hi0bits
#ifdef KR_headers
	(x) ULong x;
#else
	(ULong x)
#endif
{
	int k = 0;

	if (!(x & 0xffff0000)) {
		k = 16;
		x <<= 16;
		}
	if (!(x & 0xff000000)) {
		k += 8;
		x <<= 8;
		}
	if (!(x & 0xf0000000)) {
		k += 4;
		x <<= 4;
		}
	if (!(x & 0xc0000000)) {
		k += 2;
		x <<= 2;
		}
	if (!(x & 0x80000000)) {
		k++;
		if (!(x & 0x40000000))
			return 32;
		}
	return k;
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
          // static_instructions_O0 : 47
          // dynamic_instructions_O0 : 47
          // ------------------------------- 
          // static_instructions_O1 : 35
          // dynamic_instructions_O1 : 35
          // ------------------------------- 
          // static_instructions_O2 : 35
          // dynamic_instructions_O2 : 35
          // ------------------------------- 
          // static_instructions_O3 : 35
          // dynamic_instructions_O3 : 35
          // ------------------------------- 
          // static_instructions_Ofast : 35
          // dynamic_instructions_Ofast : 35
          // ------------------------------- 
          // static_instructions_Os : 35
          // dynamic_instructions_Os : 35
          // ------------------------------- 
          // static_instructions_Oz : 33
          // dynamic_instructions_Oz : 33
          // ------------------------------- 

          int x = 100;
        
          int benchRet = hi0bits(x);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 29
          // ------------------------------- 
          // static_instructions_O1 : 31
          // dynamic_instructions_O1 : 31
          // ------------------------------- 
          // static_instructions_O2 : 31
          // dynamic_instructions_O2 : 31
          // ------------------------------- 
          // static_instructions_O3 : 31
          // dynamic_instructions_O3 : 31
          // ------------------------------- 
          // static_instructions_Ofast : 31
          // dynamic_instructions_Ofast : 31
          // ------------------------------- 
          // static_instructions_Os : 31
          // dynamic_instructions_Os : 31
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

          int x = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = hi0bits(x);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
