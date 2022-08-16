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
typedef  int u32 ;

/* Variables and functions */
#define  INTERFACE_DFP 135 
#define  INTERFACE_DFP_HIGH 134 
#define  INTERFACE_DFP_LOW 133 
#define  INTERFACE_DVP0 132 
#define  INTERFACE_DVP1 131 
#define  INTERFACE_LVDS0 130 
#define  INTERFACE_LVDS0LVDS1 129 
#define  INTERFACE_LVDS1 128 
 int VIA_DVP0 ; 
 int VIA_DVP1 ; 
 int VIA_LVDS1 ; 
 int VIA_LVDS2 ; 

__attribute__((used)) static u32 get_lcd_devices(int output_interface)
{
	switch (output_interface) {
	case INTERFACE_DVP0:
		return VIA_DVP0;

	case INTERFACE_DVP1:
		return VIA_DVP1;

	case INTERFACE_DFP_HIGH:
		return VIA_LVDS2 | VIA_DVP0;

	case INTERFACE_DFP_LOW:
		return VIA_LVDS1 | VIA_DVP1;

	case INTERFACE_DFP:
		return VIA_LVDS1 | VIA_LVDS2;

	case INTERFACE_LVDS0:
	case INTERFACE_LVDS0LVDS1:
		return VIA_LVDS1;

	case INTERFACE_LVDS1:
		return VIA_LVDS2;
	}

	return 0;
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
          int output_interface = 100;
          int benchRet = get_lcd_devices(output_interface);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int output_interface = 255;
          int benchRet = get_lcd_devices(output_interface);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int output_interface = 10;
          int benchRet = get_lcd_devices(output_interface);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
