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
typedef  int cvmx_helper_interface_mode_t ;

/* Variables and functions */
#define  CVMX_HELPER_INTERFACE_MODE_DISABLED 137 
#define  CVMX_HELPER_INTERFACE_MODE_GMII 136 
#define  CVMX_HELPER_INTERFACE_MODE_LOOP 135 
#define  CVMX_HELPER_INTERFACE_MODE_NPI 134 
#define  CVMX_HELPER_INTERFACE_MODE_PCIE 133 
#define  CVMX_HELPER_INTERFACE_MODE_PICMG 132 
#define  CVMX_HELPER_INTERFACE_MODE_RGMII 131 
#define  CVMX_HELPER_INTERFACE_MODE_SGMII 130 
#define  CVMX_HELPER_INTERFACE_MODE_SPI 129 
#define  CVMX_HELPER_INTERFACE_MODE_XAUI 128 

const char *cvmx_helper_interface_mode_to_string(cvmx_helper_interface_mode_t
						 mode)
{
	switch (mode) {
	case CVMX_HELPER_INTERFACE_MODE_DISABLED:
		return "DISABLED";
	case CVMX_HELPER_INTERFACE_MODE_RGMII:
		return "RGMII";
	case CVMX_HELPER_INTERFACE_MODE_GMII:
		return "GMII";
	case CVMX_HELPER_INTERFACE_MODE_SPI:
		return "SPI";
	case CVMX_HELPER_INTERFACE_MODE_PCIE:
		return "PCIE";
	case CVMX_HELPER_INTERFACE_MODE_XAUI:
		return "XAUI";
	case CVMX_HELPER_INTERFACE_MODE_SGMII:
		return "SGMII";
	case CVMX_HELPER_INTERFACE_MODE_PICMG:
		return "PICMG";
	case CVMX_HELPER_INTERFACE_MODE_NPI:
		return "NPI";
	case CVMX_HELPER_INTERFACE_MODE_LOOP:
		return "LOOP";
	}
	return "UNKNOWN";
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
          int mode = 100;
          const char * benchRet = cvmx_helper_interface_mode_to_string(mode);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int mode = 255;
          const char * benchRet = cvmx_helper_interface_mode_to_string(mode);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mode = 10;
          const char * benchRet = cvmx_helper_interface_mode_to_string(mode);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
