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
typedef  int u16 ;

/* Variables and functions */
#define  WLAN_FSTYPE_ACK 135 
#define  WLAN_FSTYPE_BLOCKACK 134 
#define  WLAN_FSTYPE_BLOCKACKREQ 133 
#define  WLAN_FSTYPE_CFEND 132 
#define  WLAN_FSTYPE_CFENDCFACK 131 
#define  WLAN_FSTYPE_CTS 130 
#define  WLAN_FSTYPE_PSPOLL 129 
#define  WLAN_FSTYPE_RTS 128 

__attribute__((used)) static inline u16 wlan_ctl_framelen(u16 fstype)
{
	switch (fstype)	{
	case WLAN_FSTYPE_BLOCKACKREQ:
		return 24;
	case WLAN_FSTYPE_BLOCKACK:
		return 152;
	case WLAN_FSTYPE_PSPOLL:
	case WLAN_FSTYPE_RTS:
	case WLAN_FSTYPE_CFEND:
	case WLAN_FSTYPE_CFENDCFACK:
		return 20;
	case WLAN_FSTYPE_CTS:
	case WLAN_FSTYPE_ACK:
		return 14;
	default:
		return 4;
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
          int fstype = 100;
          int benchRet = wlan_ctl_framelen(fstype);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int fstype = 255;
          int benchRet = wlan_ctl_framelen(fstype);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fstype = 10;
          int benchRet = wlan_ctl_framelen(fstype);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
