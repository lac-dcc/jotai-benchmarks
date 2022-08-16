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

/* Variables and functions */
#define  CYBER9320 143 
#define  CYBER9382 142 
#define  CYBER9385 141 
#define  CYBER9388 140 
#define  CYBER9397 139 
#define  CYBER9397DVD 138 
#define  CYBER9520 137 
#define  CYBER9525DVD 136 
#define  CYBERBLADEAi1 135 
#define  CYBERBLADEAi1D 134 
#define  CYBERBLADEE4 133 
#define  CYBERBLADEXPAi1 132 
#define  CYBERBLADEi1 131 
#define  CYBERBLADEi1D 130 
#define  CYBERBLADEi7 129 
#define  CYBERBLADEi7D 128 

__attribute__((used)) static inline int iscyber(int id)
{
	switch (id) {
	case CYBER9388:
	case CYBER9382:
	case CYBER9385:
	case CYBER9397:
	case CYBER9397DVD:
	case CYBER9520:
	case CYBER9525DVD:
	case CYBERBLADEE4:
	case CYBERBLADEi7D:
	case CYBERBLADEi1:
	case CYBERBLADEi1D:
	case CYBERBLADEAi1:
	case CYBERBLADEAi1D:
	case CYBERBLADEXPAi1:
		return 1;

	case CYBER9320:
	case CYBERBLADEi7:	/* VIA MPV4 integrated version */
	default:
		/* case CYBERBLDAEXPm8:  Strange */
		/* case CYBERBLDAEXPm16: Strange */
		return 0;
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
          int id = 100;
          int benchRet = iscyber(id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int id = 255;
          int benchRet = iscyber(id);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int id = 10;
          int benchRet = iscyber(id);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
