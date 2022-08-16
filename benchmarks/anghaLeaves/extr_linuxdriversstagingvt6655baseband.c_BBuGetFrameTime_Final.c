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
 unsigned char PK_TYPE_11A ; 
 unsigned int RATE_54M ; 
 scalar_t__* awcFrameTime ; 

unsigned int
BBuGetFrameTime(
	unsigned char byPreambleType,
	unsigned char byPktType,
	unsigned int cbFrameLength,
	unsigned short wRate
)
{
	unsigned int uFrameTime;
	unsigned int uPreamble;
	unsigned int uTmp;
	unsigned int uRateIdx = (unsigned int)wRate;
	unsigned int uRate = 0;

	if (uRateIdx > RATE_54M)
		return 0;

	uRate = (unsigned int)awcFrameTime[uRateIdx];

	if (uRateIdx <= 3) {          /* CCK mode */
		if (byPreambleType == 1) /* Short */
			uPreamble = 96;
		else
			uPreamble = 192;

		uFrameTime = (cbFrameLength * 80) / uRate;  /* ????? */
		uTmp = (uFrameTime * uRate) / 80;
		if (cbFrameLength != uTmp)
			uFrameTime++;

		return uPreamble + uFrameTime;
	}
	uFrameTime = (cbFrameLength * 8 + 22) / uRate; /* ???????? */
	uTmp = ((uFrameTime * uRate) - 22) / 8;
	if (cbFrameLength != uTmp)
		uFrameTime++;

	uFrameTime = uFrameTime * 4;    /* ??????? */
	if (byPktType != PK_TYPE_11A)
		uFrameTime += 6;     /* ?????? */

	return 20 + uFrameTime; /* ?????? */
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
          unsigned char byPreambleType = 100;
          unsigned char byPktType = 100;
          unsigned int cbFrameLength = 100;
          unsigned short wRate = 100;
          unsigned int benchRet = BBuGetFrameTime(byPreambleType,byPktType,cbFrameLength,wRate);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned char byPreambleType = 255;
          unsigned char byPktType = 255;
          unsigned int cbFrameLength = 255;
          unsigned short wRate = 255;
          unsigned int benchRet = BBuGetFrameTime(byPreambleType,byPktType,cbFrameLength,wRate);
          printf("%u\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned char byPreambleType = 10;
          unsigned char byPktType = 10;
          unsigned int cbFrameLength = 10;
          unsigned short wRate = 10;
          unsigned int benchRet = BBuGetFrameTime(byPreambleType,byPktType,cbFrameLength,wRate);
          printf("%u\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
