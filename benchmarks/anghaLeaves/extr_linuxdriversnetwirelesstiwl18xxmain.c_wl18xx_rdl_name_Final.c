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
typedef  enum wl18xx_rdl_num { ____Placeholder_wl18xx_rdl_num } wl18xx_rdl_num ;

/* Variables and functions */
#define  RDL_1_HP 136 
#define  RDL_2_SP 135 
#define  RDL_3_HP 134 
#define  RDL_4_SP 133 
#define  RDL_5_SP 132 
#define  RDL_6_SP 131 
#define  RDL_7_SP 130 
#define  RDL_8_SP 129 
#define  RDL_NONE 128 

__attribute__((used)) static const char *wl18xx_rdl_name(enum wl18xx_rdl_num rdl_num)
{
	switch (rdl_num) {
	case RDL_1_HP:
		return "183xH";
	case RDL_2_SP:
		return "183x or 180x";
	case RDL_3_HP:
		return "187xH";
	case RDL_4_SP:
		return "187x";
	case RDL_5_SP:
		return "RDL11 - Not Supported";
	case RDL_6_SP:
		return "180xD";
	case RDL_7_SP:
		return "RDL13 - Not Supported (1893Q)";
	case RDL_8_SP:
		return "18xxQ";
	case RDL_NONE:
		return "UNTRIMMED";
	default:
		return "UNKNOWN";
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
          enum wl18xx_rdl_num rdl_num = 0;
          const char * benchRet = wl18xx_rdl_name(rdl_num);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
