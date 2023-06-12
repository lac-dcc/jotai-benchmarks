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
typedef  int /*<<< orphan*/  u32 ;

/* Variables and functions */

__attribute__((used)) static u32 rsnd_adg_calculate_rbgx(unsigned long div)
{
	int i, ratio;

	if (!div)
		return 0;

	for (i = 3; i >= 0; i--) {
		ratio = 2 << (i * 2);
		if (0 == (div % ratio))
			return (u32)((i << 8) | ((div / ratio) - 1));
	}

	return ~0;
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
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 94
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 57
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 26
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 26
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 26
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 56
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 68
          // ------------------------------- 

          unsigned long div = 100;
        
          int benchRet = rsnd_adg_calculate_rbgx(div);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 88
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 59
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 59
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 71
          // ------------------------------- 

          unsigned long div = 255;
        
          int benchRet = rsnd_adg_calculate_rbgx(div);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 42
          // dynamic_instructions_O0 : 94
          // ------------------------------- 
          // static_instructions_O1 : 25
          // dynamic_instructions_O1 : 57
          // ------------------------------- 
          // static_instructions_O2 : 26
          // dynamic_instructions_O2 : 26
          // ------------------------------- 
          // static_instructions_O3 : 26
          // dynamic_instructions_O3 : 26
          // ------------------------------- 
          // static_instructions_Ofast : 26
          // dynamic_instructions_Ofast : 26
          // ------------------------------- 
          // static_instructions_Os : 24
          // dynamic_instructions_Os : 56
          // ------------------------------- 
          // static_instructions_Oz : 30
          // dynamic_instructions_Oz : 68
          // ------------------------------- 

          unsigned long div = 10;
        
          int benchRet = rsnd_adg_calculate_rbgx(div);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 29
          // dynamic_instructions_O0 : 88
          // ------------------------------- 
          // static_instructions_O1 : 23
          // dynamic_instructions_O1 : 59
          // ------------------------------- 
          // static_instructions_O2 : 15
          // dynamic_instructions_O2 : 15
          // ------------------------------- 
          // static_instructions_O3 : 15
          // dynamic_instructions_O3 : 15
          // ------------------------------- 
          // static_instructions_Ofast : 15
          // dynamic_instructions_Ofast : 15
          // ------------------------------- 
          // static_instructions_Os : 23
          // dynamic_instructions_Os : 59
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 71
          // ------------------------------- 

          unsigned long div = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = rsnd_adg_calculate_rbgx(div);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
