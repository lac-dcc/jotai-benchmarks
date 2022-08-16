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
typedef  int u8 ;
typedef  enum via_clksrc { ____Placeholder_via_clksrc } via_clksrc ;

/* Variables and functions */
#define  VIA_CLKSRC_CAP0 133 
#define  VIA_CLKSRC_CAP1 132 
#define  VIA_CLKSRC_DVP1TVCLKR 131 
#define  VIA_CLKSRC_TVPLL 130 
#define  VIA_CLKSRC_TVX1 129 
#define  VIA_CLKSRC_X1 128 

__attribute__((used)) static inline u8 set_clock_source_common(enum via_clksrc source, bool use_pll)
{
	u8 data = 0;

	switch (source) {
	case VIA_CLKSRC_X1:
		data = 0x00;
		break;
	case VIA_CLKSRC_TVX1:
		data = 0x02;
		break;
	case VIA_CLKSRC_TVPLL:
		data = 0x04; /* 0x06 should be the same */
		break;
	case VIA_CLKSRC_DVP1TVCLKR:
		data = 0x0A;
		break;
	case VIA_CLKSRC_CAP0:
		data = 0xC;
		break;
	case VIA_CLKSRC_CAP1:
		data = 0x0E;
		break;
	}

	if (!use_pll)
		data |= 1;

	return data;
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
          enum via_clksrc source = 0;
          int use_pll = 100;
          int benchRet = set_clock_source_common(source,use_pll);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          enum via_clksrc source = 0;
          int use_pll = 255;
          int benchRet = set_clock_source_common(source,use_pll);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum via_clksrc source = 0;
          int use_pll = 10;
          int benchRet = set_clock_source_common(source,use_pll);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
