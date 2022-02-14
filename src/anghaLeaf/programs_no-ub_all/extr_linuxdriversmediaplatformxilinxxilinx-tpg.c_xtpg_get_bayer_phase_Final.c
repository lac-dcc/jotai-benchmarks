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
       0            big-arr\n\
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
typedef  int /*<<< orphan*/  u32 ;

/* Variables and functions */
#define  MEDIA_BUS_FMT_SBGGR8_1X8 131 
#define  MEDIA_BUS_FMT_SGBRG8_1X8 130 
#define  MEDIA_BUS_FMT_SGRBG8_1X8 129 
#define  MEDIA_BUS_FMT_SRGGB8_1X8 128 
 int /*<<< orphan*/  XTPG_BAYER_PHASE_BGGR ; 
 int /*<<< orphan*/  XTPG_BAYER_PHASE_GBRG ; 
 int /*<<< orphan*/  XTPG_BAYER_PHASE_GRBG ; 
 int /*<<< orphan*/  XTPG_BAYER_PHASE_OFF ; 
 int /*<<< orphan*/  XTPG_BAYER_PHASE_RGGB ; 

__attribute__((used)) static u32 xtpg_get_bayer_phase(unsigned int code)
{
	switch (code) {
	case MEDIA_BUS_FMT_SRGGB8_1X8:
		return XTPG_BAYER_PHASE_RGGB;
	case MEDIA_BUS_FMT_SGRBG8_1X8:
		return XTPG_BAYER_PHASE_GRBG;
	case MEDIA_BUS_FMT_SGBRG8_1X8:
		return XTPG_BAYER_PHASE_GBRG;
	case MEDIA_BUS_FMT_SBGGR8_1X8:
		return XTPG_BAYER_PHASE_BGGR;
	default:
		return XTPG_BAYER_PHASE_OFF;
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

    // big-arr
    case 0:
    {
          unsigned int code = 255;
          int benchRet = xtpg_get_bayer_phase(code);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
