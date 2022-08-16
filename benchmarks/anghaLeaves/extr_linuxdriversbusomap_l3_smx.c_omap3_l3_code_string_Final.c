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

/* Variables and functions */
#define  OMAP_L3_CODE_ADDR_HOLE 134 
#define  OMAP_L3_CODE_IN_BAND_ERR 133 
#define  OMAP_L3_CODE_NOERROR 132 
#define  OMAP_L3_CODE_PROTECT_VIOLATION 131 
#define  OMAP_L3_CODE_REQ_TOUT_NOT_ACCEPT 130 
#define  OMAP_L3_CODE_REQ_TOUT_NO_RESP 129 
#define  OMAP_L3_CODE_UNSUP_CMD 128 

__attribute__((used)) static char *omap3_l3_code_string(u8 code)
{
	switch (code) {
	case OMAP_L3_CODE_NOERROR:
		return "No Error";
	case OMAP_L3_CODE_UNSUP_CMD:
		return "Unsupported Command";
	case OMAP_L3_CODE_ADDR_HOLE:
		return "Address Hole";
	case OMAP_L3_CODE_PROTECT_VIOLATION:
		return "Protection Violation";
	case OMAP_L3_CODE_IN_BAND_ERR:
		return "In-band Error";
	case OMAP_L3_CODE_REQ_TOUT_NOT_ACCEPT:
		return "Request Timeout Not Accepted";
	case OMAP_L3_CODE_REQ_TOUT_NO_RESP:
		return "Request Timeout, no response";
	default:
		return "UNKNOWN error";
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
          int code = 100;
          char * benchRet = omap3_l3_code_string(code);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int code = 255;
          char * benchRet = omap3_l3_code_string(code);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int code = 10;
          char * benchRet = omap3_l3_code_string(code);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
