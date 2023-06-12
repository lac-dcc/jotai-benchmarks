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
typedef  int u32 ;
typedef  int u16 ;
struct bh1770_chip {int lux_corr; } ;

/* Variables and functions */
 int BH1770_LUX_CORR_SCALE ; 

__attribute__((used)) static inline u16 bh1770_lux_adjusted_to_raw(struct bh1770_chip *chip,
					u16 adjusted)
{
	return (u32)adjusted * BH1770_LUX_CORR_SCALE / chip->lux_corr;
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
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int adjusted = 100;
        
          int _len_chip0 = 1;
          struct bh1770_chip * chip = (struct bh1770_chip *) malloc(_len_chip0*sizeof(struct bh1770_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].lux_corr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bh1770_lux_adjusted_to_raw(chip,adjusted);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }


    // big-arr
    case 1:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int adjusted = 255;
        
          int _len_chip0 = 65025;
          struct bh1770_chip * chip = (struct bh1770_chip *) malloc(_len_chip0*sizeof(struct bh1770_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].lux_corr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bh1770_lux_adjusted_to_raw(chip,adjusted);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }


    // big-arr-10x
    case 2:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int adjusted = 10;
        
          int _len_chip0 = 100;
          struct bh1770_chip * chip = (struct bh1770_chip *) malloc(_len_chip0*sizeof(struct bh1770_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].lux_corr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bh1770_lux_adjusted_to_raw(chip,adjusted);
          printf("%d\n", benchRet); 
          free(chip);
        
        break;
    }


    // empty
    case 3:
    {
          // static_instructions_O0 : 11
          // dynamic_instructions_O0 : 11
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
          // static_instructions_Oz : 8
          // dynamic_instructions_Oz : 8
          // ------------------------------- 

          int adjusted = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_chip0 = 1;
          struct bh1770_chip * chip = (struct bh1770_chip *) malloc(_len_chip0*sizeof(struct bh1770_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
              chip[_i0].lux_corr = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = bh1770_lux_adjusted_to_raw(chip,adjusted);
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
