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
typedef  scalar_t__ u8 ;
typedef  int s32 ;

/* Variables and functions */

__attribute__((used)) static inline int w1_DS18S20_convert_temp(u8 rom[9])
{
	int t, h;

	if (!rom[7])
		return 0;

	if (rom[1] == 0)
		t = ((s32)rom[0] >> 1)*1000;
	else
		t = 1000*(-1*(s32)(0x100-rom[0]) >> 1);

	t -= 250;
	h = 1000*((s32)rom[7] - (s32)rom[6]);
	h /= (s32)rom[7];
	t += h;

	return t;
}


// ------------------------------------------------------------------------- //




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
          int _len_rom0 = 9;
          long * rom = (long *) malloc(_len_rom0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_rom0; _i0++) {
            rom[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = w1_DS18S20_convert_temp(rom);
          printf("%d\n", benchRet); 
          free(rom);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_rom0 = 100;
          long * rom = (long *) malloc(_len_rom0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_rom0; _i0++) {
            rom[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = w1_DS18S20_convert_temp(rom);
          printf("%d\n", benchRet); 
          free(rom);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
