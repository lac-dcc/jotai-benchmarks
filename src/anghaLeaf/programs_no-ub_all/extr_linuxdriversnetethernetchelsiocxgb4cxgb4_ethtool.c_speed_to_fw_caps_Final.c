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

/* Variables and functions */
 unsigned int FW_PORT_CAP32_SPEED_100G ; 
 unsigned int FW_PORT_CAP32_SPEED_100M ; 
 unsigned int FW_PORT_CAP32_SPEED_10G ; 
 unsigned int FW_PORT_CAP32_SPEED_1G ; 
 unsigned int FW_PORT_CAP32_SPEED_200G ; 
 unsigned int FW_PORT_CAP32_SPEED_25G ; 
 unsigned int FW_PORT_CAP32_SPEED_400G ; 
 unsigned int FW_PORT_CAP32_SPEED_40G ; 
 unsigned int FW_PORT_CAP32_SPEED_50G ; 

__attribute__((used)) static unsigned int speed_to_fw_caps(int speed)
{
	if (speed == 100)
		return FW_PORT_CAP32_SPEED_100M;
	if (speed == 1000)
		return FW_PORT_CAP32_SPEED_1G;
	if (speed == 10000)
		return FW_PORT_CAP32_SPEED_10G;
	if (speed == 25000)
		return FW_PORT_CAP32_SPEED_25G;
	if (speed == 40000)
		return FW_PORT_CAP32_SPEED_40G;
	if (speed == 50000)
		return FW_PORT_CAP32_SPEED_50G;
	if (speed == 100000)
		return FW_PORT_CAP32_SPEED_100G;
	if (speed == 200000)
		return FW_PORT_CAP32_SPEED_200G;
	if (speed == 400000)
		return FW_PORT_CAP32_SPEED_400G;
	return 0;
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
          int speed = 255;
          unsigned int benchRet = speed_to_fw_caps(speed);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
