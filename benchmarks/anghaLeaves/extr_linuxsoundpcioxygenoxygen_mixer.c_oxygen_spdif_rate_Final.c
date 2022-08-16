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
 unsigned int IEC958_AES3_CON_FS_176400 ; 
 unsigned int IEC958_AES3_CON_FS_192000 ; 
 unsigned int IEC958_AES3_CON_FS_32000 ; 
 unsigned int IEC958_AES3_CON_FS_44100 ; 
 unsigned int IEC958_AES3_CON_FS_48000 ; 
 unsigned int IEC958_AES3_CON_FS_88200 ; 
 unsigned int IEC958_AES3_CON_FS_96000 ; 
#define  OXYGEN_RATE_176400 134 
#define  OXYGEN_RATE_192000 133 
#define  OXYGEN_RATE_32000 132 
#define  OXYGEN_RATE_44100 131 
#define  OXYGEN_RATE_64000 130 
#define  OXYGEN_RATE_88200 129 
#define  OXYGEN_RATE_96000 128 
 unsigned int OXYGEN_SPDIF_CS_RATE_SHIFT ; 

__attribute__((used)) static unsigned int oxygen_spdif_rate(unsigned int oxygen_rate)
{
	switch (oxygen_rate) {
	case OXYGEN_RATE_32000:
		return IEC958_AES3_CON_FS_32000 << OXYGEN_SPDIF_CS_RATE_SHIFT;
	case OXYGEN_RATE_44100:
		return IEC958_AES3_CON_FS_44100 << OXYGEN_SPDIF_CS_RATE_SHIFT;
	default: /* OXYGEN_RATE_48000 */
		return IEC958_AES3_CON_FS_48000 << OXYGEN_SPDIF_CS_RATE_SHIFT;
	case OXYGEN_RATE_64000:
		return 0xb << OXYGEN_SPDIF_CS_RATE_SHIFT;
	case OXYGEN_RATE_88200:
		return IEC958_AES3_CON_FS_88200 << OXYGEN_SPDIF_CS_RATE_SHIFT;
	case OXYGEN_RATE_96000:
		return IEC958_AES3_CON_FS_96000 << OXYGEN_SPDIF_CS_RATE_SHIFT;
	case OXYGEN_RATE_176400:
		return IEC958_AES3_CON_FS_176400 << OXYGEN_SPDIF_CS_RATE_SHIFT;
	case OXYGEN_RATE_192000:
		return IEC958_AES3_CON_FS_192000 << OXYGEN_SPDIF_CS_RATE_SHIFT;
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
          unsigned int oxygen_rate = 100;
          unsigned int benchRet = oxygen_spdif_rate(oxygen_rate);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int oxygen_rate = 255;
          unsigned int benchRet = oxygen_spdif_rate(oxygen_rate);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int oxygen_rate = 10;
          unsigned int benchRet = oxygen_spdif_rate(oxygen_rate);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
