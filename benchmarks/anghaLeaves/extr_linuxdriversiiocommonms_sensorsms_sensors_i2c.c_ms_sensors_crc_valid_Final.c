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
typedef  int u8 ;
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static bool ms_sensors_crc_valid(u32 value)
{
	u32 polynom = 0x988000;	/* x^8 + x^5 + x^4 + 1 */
	u32 msb = 0x800000;
	u32 mask = 0xFF8000;
	u32 result = value & 0xFFFF00;
	u8 crc = value & 0xFF;

	while (msb != 0x80) {
		if (result & msb)
			result = ((result ^ polynom) & mask)
				| (result & ~mask);
		msb >>= 1;
		mask >>= 1;
		polynom >>= 1;
	}

	return result == crc;
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
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 277
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 126
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 102
          // ------------------------------- 
          // static_instructions_O3 : 74
          // dynamic_instructions_O3 : 74
          // ------------------------------- 
          // static_instructions_Ofast : 74
          // dynamic_instructions_Ofast : 74
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 125
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 143
          // ------------------------------- 

          int value = 100;
        
          int benchRet = ms_sensors_crc_valid(value);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 277
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 126
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 102
          // ------------------------------- 
          // static_instructions_O3 : 74
          // dynamic_instructions_O3 : 74
          // ------------------------------- 
          // static_instructions_Ofast : 74
          // dynamic_instructions_Ofast : 74
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 125
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 143
          // ------------------------------- 

          int value = 255;
        
          int benchRet = ms_sensors_crc_valid(value);
          printf("%d\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 35
          // dynamic_instructions_O0 : 277
          // ------------------------------- 
          // static_instructions_O1 : 21
          // dynamic_instructions_O1 : 126
          // ------------------------------- 
          // static_instructions_O2 : 25
          // dynamic_instructions_O2 : 102
          // ------------------------------- 
          // static_instructions_O3 : 74
          // dynamic_instructions_O3 : 74
          // ------------------------------- 
          // static_instructions_Ofast : 74
          // dynamic_instructions_Ofast : 74
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 125
          // ------------------------------- 
          // static_instructions_Oz : 21
          // dynamic_instructions_Oz : 143
          // ------------------------------- 

          int value = 10;
        
          int benchRet = ms_sensors_crc_valid(value);
          printf("%d\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 44
          // dynamic_instructions_O0 : 367
          // ------------------------------- 
          // static_instructions_O1 : 30
          // dynamic_instructions_O1 : 216
          // ------------------------------- 
          // static_instructions_O2 : 44
          // dynamic_instructions_O2 : 200
          // ------------------------------- 
          // static_instructions_O3 : 74
          // dynamic_instructions_O3 : 74
          // ------------------------------- 
          // static_instructions_Ofast : 74
          // dynamic_instructions_Ofast : 74
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 205
          // ------------------------------- 
          // static_instructions_Oz : 29
          // dynamic_instructions_Oz : 223
          // ------------------------------- 

          int value = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int benchRet = ms_sensors_crc_valid(value);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
