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
 int _MBC_ILLEGAL ; 
 int _MBC_LEAD ; 
 int _MBC_SINGLE ; 
 int _MBC_TRAIL ; 

int _mbbtype(unsigned char c , int type)
{
	if ( type == 1 ) {
		if ((c >= 0x40 && c <= 0x7e ) || (c >= 0x80 && c <= 0xfc ) )
		{
			return _MBC_TRAIL;
		}
		else if (( c >= 0x20 && c <= 0x7E ) || ( c >= 0xA1 && c <= 0xDF ) ||
			 ( c >= 0x81 && c <= 0x9F ) || ( c >= 0xE0 && c <= 0xFC ) )
			 return _MBC_ILLEGAL;
		else
			return 0;
	} else  {
		if (( c >= 0x20 && c <= 0x7E ) || ( c >= 0xA1  && c <= 0xDF )) {
			return _MBC_SINGLE;
		}
		else if ( (c >= 0x81 && c <= 0x9F ) || ( c >= 0xE0 && c <= 0xFC) )
			return _MBC_LEAD;
		else if (( c >= 0x20 && c <= 0x7E ) || ( c >= 0xA1 && c <= 0xDF ) ||
			 ( c >= 0x81 && c <= 0x9F ) || ( c >= 0xE0 && c <= 0xFC ) )
			 return _MBC_ILLEGAL;
		else
			return 0;
	}
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

    // int-bounds
    case 0:
    {
          unsigned char c = 100;
          int type = 100;
          int benchRet = _mbbtype(c,type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char c = 255;
          int type = 255;
          int benchRet = _mbbtype(c,type);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char c = 10;
          int type = 10;
          int benchRet = _mbbtype(c,type);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
