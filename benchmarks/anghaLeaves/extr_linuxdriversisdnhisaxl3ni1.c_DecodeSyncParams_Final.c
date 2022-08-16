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
typedef  int u_char ;

/* Variables and functions */

__attribute__((used)) static u_char
DecodeSyncParams(u_char si2, u_char info)
{
	info &= 0x7f;
	switch (info) {
	case 40:	// bit/s negotiation failed  ai := 165 not 175!

		return si2 + 15;
	case 15:	// 56000 bit/s failed, ai := 0 not 169 !

		return si2 + 9;
	case 14:	// 48000 bit/s

		return si2 + 8;
	case 11:	// 19200 bit/s

		return si2 + 7;
	case 9:	// 14400 bit/s

		return si2 + 6;
	case 8:	// 9600  bit/s

		return si2 + 5;
	case 5:	// 4800  bit/s

		return si2 + 4;
	case 3:	// 2400  bit/s

		return si2 + 3;
	case 23:	// 75/1200 bit/s

		return si2 + 2;
	case 24:	// 1200/75 bit/s

		return si2 + 1;
	default:	// 1200 bit/s

		return si2;
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
          int si2 = 100;
          int info = 100;
          int benchRet = DecodeSyncParams(si2,info);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int si2 = 255;
          int info = 255;
          int benchRet = DecodeSyncParams(si2,info);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int si2 = 10;
          int info = 10;
          int benchRet = DecodeSyncParams(si2,info);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
