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
typedef  unsigned long u32 ;

/* Variables and functions */

__attribute__((used)) static u32 sh_mobile_i2c_icch(unsigned long count_khz, u32 tHIGH, u32 tf)
{
	/*
	 * Conditional expression:
	 *   ICCH >= COUNT_CLK * (tHIGH + tf)
	 *
	 * SH-Mobile IIC hardware is aware of SCL transition period 'tr',
	 * and can ignore it.  SH-Mobile IIC controller starts counting
	 * the HIGH period of the SCL signal (tHIGH) after the SCL input
	 * voltage increases at VIH.
	 *
	 * Afterward it turned out calculating ICCH using only tHIGH spec
	 * will result in violation of the tHD;STA timing spec.  We need
	 * to take into account the fall time of SDA signal (tf) at START
	 * condition, in order to meet both tHIGH and tHD;STA specs.
	 */
	return (((count_khz * (tHIGH + tf)) + 5000) / 10000);
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
          unsigned long count_khz = 100;
          unsigned long tHIGH = 100;
          unsigned long tf = 100;
          unsigned long benchRet = sh_mobile_i2c_icch(count_khz,tHIGH,tf);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long count_khz = 255;
          unsigned long tHIGH = 255;
          unsigned long tf = 255;
          unsigned long benchRet = sh_mobile_i2c_icch(count_khz,tHIGH,tf);
          printf("%lu\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long count_khz = 10;
          unsigned long tHIGH = 10;
          unsigned long tf = 10;
          unsigned long benchRet = sh_mobile_i2c_icch(count_khz,tHIGH,tf);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
