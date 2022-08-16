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
typedef  int ut8 ;

/* Variables and functions */
#define  GB_ROM_BANKS_128 137 
#define  GB_ROM_BANKS_16 136 
#define  GB_ROM_BANKS_2 135 
#define  GB_ROM_BANKS_32 134 
#define  GB_ROM_BANKS_4 133 
#define  GB_ROM_BANKS_64 132 
#define  GB_ROM_BANKS_72 131 
#define  GB_ROM_BANKS_8 130 
#define  GB_ROM_BANKS_80 129 
#define  GB_ROM_BANKS_96 128 

int gb_get_rombanks(ut8 id){
	switch (id){
		case GB_ROM_BANKS_2:
			return 2;
		case GB_ROM_BANKS_4:
			return 4;
		case GB_ROM_BANKS_8:
			return 8;
		case GB_ROM_BANKS_16:
			return 16;
		case GB_ROM_BANKS_32:
			return 32;
		case GB_ROM_BANKS_64:
			return 64;
		case GB_ROM_BANKS_128:
			return 128;
		case GB_ROM_BANKS_72:
			return 72;
		case GB_ROM_BANKS_80:
			return 80;
		case GB_ROM_BANKS_96:
			return 96;
		}
	return 2;
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
          int id = 100;
          int benchRet = gb_get_rombanks(id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int benchRet = gb_get_rombanks(id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int benchRet = gb_get_rombanks(id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
