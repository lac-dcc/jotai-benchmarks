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
 int PORT_PLS_MASK ; 
#define  XDEV_COMP_MODE 140 
#define  XDEV_DISABLED 139 
#define  XDEV_HOT_RESET 138 
#define  XDEV_INACTIVE 137 
#define  XDEV_POLLING 136 
#define  XDEV_RECOVERY 135 
#define  XDEV_RESUME 134 
#define  XDEV_RXDETECT 133 
#define  XDEV_TEST_MODE 132 
#define  XDEV_U0 131 
#define  XDEV_U1 130 
#define  XDEV_U2 129 
#define  XDEV_U3 128 

__attribute__((used)) static inline const char *xhci_portsc_link_state_string(u32 portsc)
{
	switch (portsc & PORT_PLS_MASK) {
	case XDEV_U0:
		return "U0";
	case XDEV_U1:
		return "U1";
	case XDEV_U2:
		return "U2";
	case XDEV_U3:
		return "U3";
	case XDEV_DISABLED:
		return "Disabled";
	case XDEV_RXDETECT:
		return "RxDetect";
	case XDEV_INACTIVE:
		return "Inactive";
	case XDEV_POLLING:
		return "Polling";
	case XDEV_RECOVERY:
		return "Recovery";
	case XDEV_HOT_RESET:
		return "Hot Reset";
	case XDEV_COMP_MODE:
		return "Compliance mode";
	case XDEV_TEST_MODE:
		return "Test mode";
	case XDEV_RESUME:
		return "Resume";
	default:
		break;
	}
	return "Unknown";
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
          int portsc = 100;
          const char * benchRet = xhci_portsc_link_state_string(portsc);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int portsc = 255;
          const char * benchRet = xhci_portsc_link_state_string(portsc);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int portsc = 10;
          const char * benchRet = xhci_portsc_link_state_string(portsc);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
