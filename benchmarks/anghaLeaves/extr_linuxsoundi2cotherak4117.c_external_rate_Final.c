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
 unsigned char AK4117_FS0 ; 
 unsigned char AK4117_FS1 ; 
 unsigned char AK4117_FS2 ; 
 unsigned char AK4117_FS3 ; 
#define  AK4117_FS_176400HZ 134 
#define  AK4117_FS_192000HZ 133 
#define  AK4117_FS_32000HZ 132 
#define  AK4117_FS_44100HZ 131 
#define  AK4117_FS_48000HZ 130 
#define  AK4117_FS_88200HZ 129 
#define  AK4117_FS_96000HZ 128 

__attribute__((used)) static unsigned int external_rate(unsigned char rcs1)
{
	switch (rcs1 & (AK4117_FS0|AK4117_FS1|AK4117_FS2|AK4117_FS3)) {
	case AK4117_FS_32000HZ: return 32000;
	case AK4117_FS_44100HZ: return 44100;
	case AK4117_FS_48000HZ: return 48000;
	case AK4117_FS_88200HZ: return 88200;
	case AK4117_FS_96000HZ: return 96000;
	case AK4117_FS_176400HZ: return 176400;
	case AK4117_FS_192000HZ: return 192000;
	default:		return 0;
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
          unsigned char rcs1 = 100;
          unsigned int benchRet = external_rate(rcs1);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char rcs1 = 255;
          unsigned int benchRet = external_rate(rcs1);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char rcs1 = 10;
          unsigned int benchRet = external_rate(rcs1);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
