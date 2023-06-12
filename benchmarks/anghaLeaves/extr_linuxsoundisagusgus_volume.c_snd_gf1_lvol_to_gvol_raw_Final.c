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

/* Variables and functions */

unsigned short snd_gf1_lvol_to_gvol_raw(unsigned int vol)
{
	unsigned short e, m, tmp;

	if (vol > 65535)
		vol = 65535;
	tmp = vol;
	e = 7;
	if (tmp < 128) {
		while (e > 0 && tmp < (1 << e))
			e--;
	} else {
		while (tmp > 255) {
			tmp >>= 1;
			e++;
		}
	}
	m = vol - (1 << e);
	if (m > 0) {
		if (e > 8)
			m >>= e - 8;
		else if (e < 8)
			m <<= 8 - e;
		m &= 255;
	}
	return (e << 8) | m;
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
          // static_instructions_O0 : 67
          // dynamic_instructions_O0 : 83
          // ------------------------------- 
          // static_instructions_O1 : 39
          // dynamic_instructions_O1 : 46
          // ------------------------------- 
          // static_instructions_O2 : 33
          // dynamic_instructions_O2 : 33
          // ------------------------------- 
          // static_instructions_O3 : 33
          // dynamic_instructions_O3 : 33
          // ------------------------------- 
          // static_instructions_Ofast : 33
          // dynamic_instructions_Ofast : 33
          // ------------------------------- 
          // static_instructions_Os : 38
          // dynamic_instructions_Os : 45
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 46
          // ------------------------------- 

          unsigned int vol = 100;
        
          unsigned short benchRet = snd_gf1_lvol_to_gvol_raw(vol);
          printf("%hu\n", benchRet); 
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 49
          // dynamic_instructions_O0 : 49
          // ------------------------------- 
          // static_instructions_O1 : 31
          // dynamic_instructions_O1 : 31
          // ------------------------------- 
          // static_instructions_O2 : 22
          // dynamic_instructions_O2 : 22
          // ------------------------------- 
          // static_instructions_O3 : 22
          // dynamic_instructions_O3 : 22
          // ------------------------------- 
          // static_instructions_Ofast : 22
          // dynamic_instructions_Ofast : 22
          // ------------------------------- 
          // static_instructions_Os : 22
          // dynamic_instructions_Os : 22
          // ------------------------------- 
          // static_instructions_Oz : 33
          // dynamic_instructions_Oz : 33
          // ------------------------------- 

          unsigned int vol = 255;
        
          unsigned short benchRet = snd_gf1_lvol_to_gvol_raw(vol);
          printf("%hu\n", benchRet); 
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 67
          // dynamic_instructions_O0 : 143
          // ------------------------------- 
          // static_instructions_O1 : 39
          // dynamic_instructions_O1 : 67
          // ------------------------------- 
          // static_instructions_O2 : 42
          // dynamic_instructions_O2 : 42
          // ------------------------------- 
          // static_instructions_O3 : 42
          // dynamic_instructions_O3 : 42
          // ------------------------------- 
          // static_instructions_Ofast : 42
          // dynamic_instructions_Ofast : 42
          // ------------------------------- 
          // static_instructions_Os : 38
          // dynamic_instructions_Os : 66
          // ------------------------------- 
          // static_instructions_Oz : 39
          // dynamic_instructions_Oz : 67
          // ------------------------------- 

          unsigned int vol = 10;
        
          unsigned short benchRet = snd_gf1_lvol_to_gvol_raw(vol);
          printf("%hu\n", benchRet); 
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 53
          // dynamic_instructions_O0 : 126
          // ------------------------------- 
          // static_instructions_O1 : 38
          // dynamic_instructions_O1 : 73
          // ------------------------------- 
          // static_instructions_O2 : 37
          // dynamic_instructions_O2 : 72
          // ------------------------------- 
          // static_instructions_O3 : 37
          // dynamic_instructions_O3 : 72
          // ------------------------------- 
          // static_instructions_Ofast : 37
          // dynamic_instructions_Ofast : 72
          // ------------------------------- 
          // static_instructions_Os : 36
          // dynamic_instructions_Os : 71
          // ------------------------------- 
          // static_instructions_Oz : 34
          // dynamic_instructions_Oz : 79
          // ------------------------------- 

          unsigned int vol = ((-2 * (next_i()%2)) + 1) * next_i();
        
          unsigned short benchRet = snd_gf1_lvol_to_gvol_raw(vol);
          printf("%hu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
