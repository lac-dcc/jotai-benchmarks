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
 unsigned int EVERGREEN_ADDR_SURF_BANK_HEIGHT_1 ; 
 unsigned int EVERGREEN_ADDR_SURF_BANK_HEIGHT_2 ; 
 unsigned int EVERGREEN_ADDR_SURF_BANK_HEIGHT_4 ; 
 unsigned int EVERGREEN_ADDR_SURF_BANK_HEIGHT_8 ; 
 unsigned int EVERGREEN_ADDR_SURF_BANK_WIDTH_1 ; 
 unsigned int EVERGREEN_ADDR_SURF_BANK_WIDTH_2 ; 
 unsigned int EVERGREEN_ADDR_SURF_BANK_WIDTH_4 ; 
 unsigned int EVERGREEN_ADDR_SURF_BANK_WIDTH_8 ; 
 unsigned int EVERGREEN_ADDR_SURF_MACRO_TILE_ASPECT_1 ; 
 unsigned int EVERGREEN_ADDR_SURF_MACRO_TILE_ASPECT_2 ; 
 unsigned int EVERGREEN_ADDR_SURF_MACRO_TILE_ASPECT_4 ; 
 unsigned int EVERGREEN_ADDR_SURF_MACRO_TILE_ASPECT_8 ; 
 unsigned int RADEON_TILING_EG_BANKH_MASK ; 
 unsigned int RADEON_TILING_EG_BANKH_SHIFT ; 
 unsigned int RADEON_TILING_EG_BANKW_MASK ; 
 unsigned int RADEON_TILING_EG_BANKW_SHIFT ; 
 unsigned int RADEON_TILING_EG_MACRO_TILE_ASPECT_MASK ; 
 unsigned int RADEON_TILING_EG_MACRO_TILE_ASPECT_SHIFT ; 
 unsigned int RADEON_TILING_EG_TILE_SPLIT_MASK ; 
 unsigned int RADEON_TILING_EG_TILE_SPLIT_SHIFT ; 

void evergreen_tiling_fields(unsigned tiling_flags, unsigned *bankw,
			     unsigned *bankh, unsigned *mtaspect,
			     unsigned *tile_split)
{
	*bankw = (tiling_flags >> RADEON_TILING_EG_BANKW_SHIFT) & RADEON_TILING_EG_BANKW_MASK;
	*bankh = (tiling_flags >> RADEON_TILING_EG_BANKH_SHIFT) & RADEON_TILING_EG_BANKH_MASK;
	*mtaspect = (tiling_flags >> RADEON_TILING_EG_MACRO_TILE_ASPECT_SHIFT) & RADEON_TILING_EG_MACRO_TILE_ASPECT_MASK;
	*tile_split = (tiling_flags >> RADEON_TILING_EG_TILE_SPLIT_SHIFT) & RADEON_TILING_EG_TILE_SPLIT_MASK;
	switch (*bankw) {
	default:
	case 1: *bankw = EVERGREEN_ADDR_SURF_BANK_WIDTH_1; break;
	case 2: *bankw = EVERGREEN_ADDR_SURF_BANK_WIDTH_2; break;
	case 4: *bankw = EVERGREEN_ADDR_SURF_BANK_WIDTH_4; break;
	case 8: *bankw = EVERGREEN_ADDR_SURF_BANK_WIDTH_8; break;
	}
	switch (*bankh) {
	default:
	case 1: *bankh = EVERGREEN_ADDR_SURF_BANK_HEIGHT_1; break;
	case 2: *bankh = EVERGREEN_ADDR_SURF_BANK_HEIGHT_2; break;
	case 4: *bankh = EVERGREEN_ADDR_SURF_BANK_HEIGHT_4; break;
	case 8: *bankh = EVERGREEN_ADDR_SURF_BANK_HEIGHT_8; break;
	}
	switch (*mtaspect) {
	default:
	case 1: *mtaspect = EVERGREEN_ADDR_SURF_MACRO_TILE_ASPECT_1; break;
	case 2: *mtaspect = EVERGREEN_ADDR_SURF_MACRO_TILE_ASPECT_2; break;
	case 4: *mtaspect = EVERGREEN_ADDR_SURF_MACRO_TILE_ASPECT_4; break;
	case 8: *mtaspect = EVERGREEN_ADDR_SURF_MACRO_TILE_ASPECT_8; break;
	}
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
          unsigned int tiling_flags = 100;
          int _len_bankw0 = 1;
          unsigned int * bankw = (unsigned int *) malloc(_len_bankw0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bankw0; _i0++) {
            bankw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bankh0 = 1;
          unsigned int * bankh = (unsigned int *) malloc(_len_bankh0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_bankh0; _i0++) {
            bankh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mtaspect0 = 1;
          unsigned int * mtaspect = (unsigned int *) malloc(_len_mtaspect0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_mtaspect0; _i0++) {
            mtaspect[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tile_split0 = 1;
          unsigned int * tile_split = (unsigned int *) malloc(_len_tile_split0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_tile_split0; _i0++) {
            tile_split[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          evergreen_tiling_fields(tiling_flags,bankw,bankh,mtaspect,tile_split);
          free(bankw);
          free(bankh);
          free(mtaspect);
          free(tile_split);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
