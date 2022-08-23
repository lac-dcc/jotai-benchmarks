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
typedef  int /*<<< orphan*/  PORTS_PIN_MODE ;
typedef  int /*<<< orphan*/  PORTS_MODULE_ID ;
typedef  int /*<<< orphan*/  PORTS_ANALOG_PIN ;

/* Variables and functions */

void SYS_PORTS_PinModeSelect ( PORTS_MODULE_ID index, PORTS_ANALOG_PIN pin,
								PORTS_PIN_MODE mode)
{
#if defined(PLIB_PORTS_ExistsPinMode)
    if(PLIB_PORTS_ExistsPinMode(index))
    {
        PLIB_PORTS_PinModeSelect ( index, pin, mode);
    }
#endif
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
          int index = 100;
          int pin = 100;
          int mode = 100;
          SYS_PORTS_PinModeSelect(index,pin,mode);
        
        break;
    }
    // big-arr
    case 1:
    {
          int index = 255;
          int pin = 255;
          int mode = 255;
          SYS_PORTS_PinModeSelect(index,pin,mode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int index = 10;
          int pin = 10;
          int mode = 10;
          SYS_PORTS_PinModeSelect(index,pin,mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}