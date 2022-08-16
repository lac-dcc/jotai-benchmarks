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
 int DZ_B110 ; 
 int DZ_B1200 ; 
 int DZ_B134 ; 
 int DZ_B150 ; 
 int DZ_B1800 ; 
 int DZ_B2000 ; 
 int DZ_B2400 ; 
 int DZ_B300 ; 
 int DZ_B3600 ; 
 int DZ_B4800 ; 
 int DZ_B50 ; 
 int DZ_B600 ; 
 int DZ_B7200 ; 
 int DZ_B75 ; 
 int DZ_B9600 ; 

__attribute__((used)) static int dz_encode_baud_rate(unsigned int baud)
{
	switch (baud) {
	case 50:
		return DZ_B50;
	case 75:
		return DZ_B75;
	case 110:
		return DZ_B110;
	case 134:
		return DZ_B134;
	case 150:
		return DZ_B150;
	case 300:
		return DZ_B300;
	case 600:
		return DZ_B600;
	case 1200:
		return DZ_B1200;
	case 1800:
		return DZ_B1800;
	case 2000:
		return DZ_B2000;
	case 2400:
		return DZ_B2400;
	case 3600:
		return DZ_B3600;
	case 4800:
		return DZ_B4800;
	case 7200:
		return DZ_B7200;
	case 9600:
		return DZ_B9600;
	default:
		return -1;
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
          unsigned int baud = 100;
          int benchRet = dz_encode_baud_rate(baud);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int baud = 255;
          int benchRet = dz_encode_baud_rate(baud);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int baud = 10;
          int benchRet = dz_encode_baud_rate(baud);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
