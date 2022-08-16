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

__attribute__((used)) static unsigned char volume_to_hw(int volume_percent)
{
	unsigned char ret = 0;

	if (volume_percent < 0)
		volume_percent = 0;
	if (volume_percent > 100)
		volume_percent = 100;

	if (volume_percent >= 0)
		ret = 7;
	if (volume_percent >= 13)	/* 12.5 */
		ret = 6;
	if (volume_percent >= 25)
		ret = 5;
	if (volume_percent >= 38)	/* 37.5 */
		ret = 4;
	if (volume_percent >= 50)
		ret = 3;
	if (volume_percent >= 63)	/* 62.5 */
		ret = 2;		/* This is the default volume */
	if (volume_percent >= 75)
		ret = 1;
	if (volume_percent >= 88)	/* 87.5 */
		ret = 0;

	ret |= 0x80;

	return ret;
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
          int volume_percent = 100;
          unsigned char benchRet = volume_to_hw(volume_percent);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int volume_percent = 255;
          unsigned char benchRet = volume_to_hw(volume_percent);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int volume_percent = 10;
          unsigned char benchRet = volume_to_hw(volume_percent);
          printf("%c\n", (benchRet %26) + 'a'); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
