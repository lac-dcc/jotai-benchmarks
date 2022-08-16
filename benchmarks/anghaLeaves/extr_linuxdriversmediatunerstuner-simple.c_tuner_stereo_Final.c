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
#define  TUNER_LG_NTSC_TAPE 133 
#define  TUNER_PHILIPS_FM1216ME_MK3 132 
#define  TUNER_PHILIPS_FM1216MK5 131 
#define  TUNER_PHILIPS_FM1236_MK3 130 
#define  TUNER_PHILIPS_FM1256_IH3 129 
 int const TUNER_SIGNAL ; 
 int const TUNER_STEREO ; 
 int const TUNER_STEREO_MK3 ; 
#define  TUNER_TCL_MF02GIP_5N 128 

__attribute__((used)) static inline int tuner_stereo(const int type, const int status)
{
	switch (type) {
	case TUNER_PHILIPS_FM1216ME_MK3:
	case TUNER_PHILIPS_FM1236_MK3:
	case TUNER_PHILIPS_FM1256_IH3:
	case TUNER_LG_NTSC_TAPE:
	case TUNER_TCL_MF02GIP_5N:
		return ((status & TUNER_SIGNAL) == TUNER_STEREO_MK3);
	case TUNER_PHILIPS_FM1216MK5:
		return status | TUNER_STEREO;
	default:
		return status & TUNER_STEREO;
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
          const int type = 100;
          const int status = 100;
          int benchRet = tuner_stereo(type,status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          const int type = 255;
          const int status = 255;
          int benchRet = tuner_stereo(type,status);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int type = 10;
          const int status = 10;
          int benchRet = tuner_stereo(type,status);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
