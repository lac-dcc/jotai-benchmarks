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
struct ad5398_chip_info {unsigned int max_uA; unsigned int min_uA; unsigned int current_level; } ;

/* Variables and functions */

__attribute__((used)) static int ad5398_calc_current(struct ad5398_chip_info *chip,
	unsigned selector)
{
	unsigned range_uA = chip->max_uA - chip->min_uA;

	return chip->min_uA + (selector * range_uA / chip->current_level);
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
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int selector = 100;
        
          int _len_chip0 = 1;
          struct ad5398_chip_info * chip = (struct ad5398_chip_info *) malloc(_len_chip0*sizeof(struct ad5398_chip_info));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].max_uA = ((-2 * (next_i()%2)) + 1) * next_i();
          chip[_i0].min_uA = ((-2 * (next_i()%2)) + 1) * next_i();
          chip[_i0].current_level = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ad5398_calc_current(chip,selector);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int selector = 255;
        
          int _len_chip0 = 65025;
          struct ad5398_chip_info * chip = (struct ad5398_chip_info *) malloc(_len_chip0*sizeof(struct ad5398_chip_info));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].max_uA = ((-2 * (next_i()%2)) + 1) * next_i();
          chip[_i0].min_uA = ((-2 * (next_i()%2)) + 1) * next_i();
          chip[_i0].current_level = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ad5398_calc_current(chip,selector);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int selector = 10;
        
          int _len_chip0 = 100;
          struct ad5398_chip_info * chip = (struct ad5398_chip_info *) malloc(_len_chip0*sizeof(struct ad5398_chip_info));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].max_uA = ((-2 * (next_i()%2)) + 1) * next_i();
          chip[_i0].min_uA = ((-2 * (next_i()%2)) + 1) * next_i();
          chip[_i0].current_level = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ad5398_calc_current(chip,selector);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 22
          // dynamic_instructions_O0 : 22
          // ------------------------------- 
          // static_instructions_O1 : 11
          // dynamic_instructions_O1 : 11
          // ------------------------------- 
          // static_instructions_O2 : 11
          // dynamic_instructions_O2 : 11
          // ------------------------------- 
          // static_instructions_O3 : 11
          // dynamic_instructions_O3 : 11
          // ------------------------------- 
          // static_instructions_Ofast : 11
          // dynamic_instructions_Ofast : 11
          // ------------------------------- 
          // static_instructions_Os : 11
          // dynamic_instructions_Os : 11
          // ------------------------------- 
          // static_instructions_Oz : 11
          // dynamic_instructions_Oz : 11
          // ------------------------------- 

          unsigned int selector = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_chip0 = 1;
          struct ad5398_chip_info * chip = (struct ad5398_chip_info *) malloc(_len_chip0*sizeof(struct ad5398_chip_info));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].max_uA = ((-2 * (next_i()%2)) + 1) * next_i();
          chip[_i0].min_uA = ((-2 * (next_i()%2)) + 1) * next_i();
          chip[_i0].current_level = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = ad5398_calc_current(chip,selector);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
