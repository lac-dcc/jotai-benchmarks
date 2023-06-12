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
       0            big-arr\n\
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
typedef  int u8 ;
typedef  int u16 ;

/* Variables and functions */

__attribute__((used)) static void
wlc_phy_txpwr_nphy_srom_convert(u8 *srom_max, u16 *pwr_offset,
				u8 tmp_max_pwr, u8 rate_start,
				u8 rate_end)
{
	u8 rate;
	u8 word_num, nibble_num;
	u8 tmp_nibble;

	for (rate = rate_start; rate <= rate_end; rate++) {
		word_num = (rate - rate_start) >> 2;
		nibble_num = (rate - rate_start) & 0x3;
		tmp_nibble = (pwr_offset[word_num] >> 4 * nibble_num) & 0xf;

		srom_max[rate] = tmp_max_pwr - 2 * tmp_nibble;
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


    // big-arr
    case 0:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 44
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 28
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

          int tmp_max_pwr = 255;
        
          int rate_start = 255;
        
          int rate_end = 255;
        
          int _len_srom_max0 = 65025;
          int * srom_max = (int *) malloc(_len_srom_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srom_max0; _i0++) {
            srom_max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pwr_offset0 = 65025;
          int * pwr_offset = (int *) malloc(_len_pwr_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_offset0; _i0++) {
            pwr_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          wlc_phy_txpwr_nphy_srom_convert(srom_max,pwr_offset,tmp_max_pwr,rate_start,rate_end);
          free(srom_max);
          free(pwr_offset);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 41
          // dynamic_instructions_O0 : 44
          // ------------------------------- 
          // static_instructions_O1 : 29
          // dynamic_instructions_O1 : 29
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 28
          // dynamic_instructions_Os : 28
          // ------------------------------- 
          // static_instructions_Oz : 27
          // dynamic_instructions_Oz : 30
          // ------------------------------- 

          int tmp_max_pwr = 10;
        
          int rate_start = 10;
        
          int rate_end = 10;
        
          int _len_srom_max0 = 100;
          int * srom_max = (int *) malloc(_len_srom_max0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srom_max0; _i0++) {
            srom_max[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          int _len_pwr_offset0 = 100;
          int * pwr_offset = (int *) malloc(_len_pwr_offset0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pwr_offset0; _i0++) {
            pwr_offset[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        
          wlc_phy_txpwr_nphy_srom_convert(srom_max,pwr_offset,tmp_max_pwr,rate_start,rate_end);
          free(srom_max);
          free(pwr_offset);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
