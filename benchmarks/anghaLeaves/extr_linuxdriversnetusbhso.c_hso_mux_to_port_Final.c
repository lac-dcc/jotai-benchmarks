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
typedef  int /*<<< orphan*/  u32 ;

/* Variables and functions */
 int /*<<< orphan*/  HSO_PORT_APP ; 
 int /*<<< orphan*/  HSO_PORT_APP2 ; 
 int /*<<< orphan*/  HSO_PORT_CONTROL ; 
 int /*<<< orphan*/  HSO_PORT_GPS ; 
 int /*<<< orphan*/  HSO_PORT_NO_PORT ; 
 int /*<<< orphan*/  HSO_PORT_PCSC ; 

__attribute__((used)) static u32 hso_mux_to_port(int mux)
{
	u32 result;

	switch (mux) {
	case 0x1:
		result = HSO_PORT_CONTROL;
		break;
	case 0x2:
		result = HSO_PORT_APP;
		break;
	case 0x4:
		result = HSO_PORT_PCSC;
		break;
	case 0x8:
		result = HSO_PORT_GPS;
		break;
	case 0x10:
		result = HSO_PORT_APP2;
		break;
	default:
		result = HSO_PORT_NO_PORT;
	}
	return result;
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
          int mux = 100;
          int benchRet = hso_mux_to_port(mux);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int mux = 255;
          int benchRet = hso_mux_to_port(mux);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mux = 10;
          int benchRet = hso_mux_to_port(mux);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}