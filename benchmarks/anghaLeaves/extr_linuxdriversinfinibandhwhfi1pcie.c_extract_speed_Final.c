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
typedef  int u16 ;

/* Variables and functions */
 int PCI_EXP_LNKSTA_CLS ; 
#define  PCI_EXP_LNKSTA_CLS_2_5GB 130 
#define  PCI_EXP_LNKSTA_CLS_5_0GB 129 
#define  PCI_EXP_LNKSTA_CLS_8_0GB 128 

__attribute__((used)) static u32 extract_speed(u16 linkstat)
{
	u32 speed;

	switch (linkstat & PCI_EXP_LNKSTA_CLS) {
	default: /* not defined, assume Gen1 */
	case PCI_EXP_LNKSTA_CLS_2_5GB:
		speed = 2500; /* Gen 1, 2.5GHz */
		break;
	case PCI_EXP_LNKSTA_CLS_5_0GB:
		speed = 5000; /* Gen 2, 5GHz */
		break;
	case PCI_EXP_LNKSTA_CLS_8_0GB:
		speed = 8000; /* Gen 3, 8GHz */
		break;
	}
	return speed;
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
          int linkstat = 100;
          int benchRet = extract_speed(linkstat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int linkstat = 255;
          int benchRet = extract_speed(linkstat);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int linkstat = 10;
          int benchRet = extract_speed(linkstat);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
