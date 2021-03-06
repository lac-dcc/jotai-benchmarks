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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int uint8_t ;
typedef  enum clock_source_id { ____Placeholder_clock_source_id } clock_source_id ;

/* Variables and functions */
 int ATOM_TRANSMITTER_CONFIG_V5_P0PLL ; 
 int ATOM_TRANSMITTER_CONFIG_V5_P1PLL ; 
 int ATOM_TRANSMITTER_CONFIG_V5_P2PLL ; 
 int ATOM_TRANSMITTER_CONFIG_V5_REFCLK_SRC_EXT ; 
#define  CLOCK_SOURCE_ID_EXTERNAL 131 
#define  CLOCK_SOURCE_ID_PLL0 130 
#define  CLOCK_SOURCE_ID_PLL1 129 
#define  CLOCK_SOURCE_ID_PLL2 128 

__attribute__((used)) static uint8_t clock_source_id_to_atom_phy_clk_src_id(
		enum clock_source_id id)
{
	uint8_t atom_phy_clk_src_id = 0;

	switch (id) {
	case CLOCK_SOURCE_ID_PLL0:
		atom_phy_clk_src_id = ATOM_TRANSMITTER_CONFIG_V5_P0PLL;
		break;
	case CLOCK_SOURCE_ID_PLL1:
		atom_phy_clk_src_id = ATOM_TRANSMITTER_CONFIG_V5_P1PLL;
		break;
	case CLOCK_SOURCE_ID_PLL2:
		atom_phy_clk_src_id = ATOM_TRANSMITTER_CONFIG_V5_P2PLL;
		break;
	case CLOCK_SOURCE_ID_EXTERNAL:
		atom_phy_clk_src_id = ATOM_TRANSMITTER_CONFIG_V5_REFCLK_SRC_EXT;
		break;
	default:
		atom_phy_clk_src_id = ATOM_TRANSMITTER_CONFIG_V5_P1PLL;
		break;
	}

	return atom_phy_clk_src_id >> 2;
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
          enum clock_source_id id = 0;
          int benchRet = clock_source_id_to_atom_phy_clk_src_id(id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum clock_source_id id = 0;
          int benchRet = clock_source_id_to_atom_phy_clk_src_id(id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum clock_source_id id = 0;
          int benchRet = clock_source_id_to_atom_phy_clk_src_id(id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
