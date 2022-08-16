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
typedef  enum adau1373_micbias_voltage { ____Placeholder_adau1373_micbias_voltage } adau1373_micbias_voltage ;

/* Variables and functions */
#define  ADAU1373_MICBIAS_1_8V 131 
#define  ADAU1373_MICBIAS_2_2V 130 
#define  ADAU1373_MICBIAS_2_6V 129 
#define  ADAU1373_MICBIAS_2_9V 128 

__attribute__((used)) static bool adau1373_valid_micbias(enum adau1373_micbias_voltage micbias)
{
	switch (micbias) {
	case ADAU1373_MICBIAS_2_9V:
	case ADAU1373_MICBIAS_2_2V:
	case ADAU1373_MICBIAS_2_6V:
	case ADAU1373_MICBIAS_1_8V:
		return true;
	default:
		break;
	}
	return false;
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
          enum adau1373_micbias_voltage micbias = 0;
          int benchRet = adau1373_valid_micbias(micbias);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
