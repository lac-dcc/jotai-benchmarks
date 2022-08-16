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
#define  R100_TRACK_COMP_DXT1 129 
#define  R100_TRACK_COMP_DXT35 128 

__attribute__((used)) static int r100_track_compress_size(int compress_format, int w, int h)
{
	int block_width, block_height, block_bytes;
	int wblocks, hblocks;
	int min_wblocks;
	int sz;

	block_width = 4;
	block_height = 4;

	switch (compress_format) {
	case R100_TRACK_COMP_DXT1:
		block_bytes = 8;
		min_wblocks = 4;
		break;
	default:
	case R100_TRACK_COMP_DXT35:
		block_bytes = 16;
		min_wblocks = 2;
		break;
	}

	hblocks = (h + block_height - 1) / block_height;
	wblocks = (w + block_width - 1) / block_width;
	if (wblocks < min_wblocks)
		wblocks = min_wblocks;
	sz = wblocks * hblocks * block_bytes;
	return sz;
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
          int compress_format = 100;
          int w = 100;
          int h = 100;
          int benchRet = r100_track_compress_size(compress_format,w,h);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int compress_format = 255;
          int w = 255;
          int h = 255;
          int benchRet = r100_track_compress_size(compress_format,w,h);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int compress_format = 10;
          int w = 10;
          int h = 10;
          int benchRet = r100_track_compress_size(compress_format,w,h);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
