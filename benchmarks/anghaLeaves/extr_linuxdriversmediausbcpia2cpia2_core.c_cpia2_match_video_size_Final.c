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
 int STV_IMAGE_CIF_COLS ; 
 int STV_IMAGE_CIF_ROWS ; 
 int STV_IMAGE_QCIF_COLS ; 
 int STV_IMAGE_QCIF_ROWS ; 
 int STV_IMAGE_QVGA_COLS ; 
 int STV_IMAGE_QVGA_ROWS ; 
 int STV_IMAGE_VGA_COLS ; 
 int STV_IMAGE_VGA_ROWS ; 
 int VIDEOSIZE_192_144 ; 
 int VIDEOSIZE_224_168 ; 
 int VIDEOSIZE_256_192 ; 
 int VIDEOSIZE_288_216 ; 
 int VIDEOSIZE_CIF ; 
 int VIDEOSIZE_QCIF ; 
 int VIDEOSIZE_QVGA ; 
 int VIDEOSIZE_VGA ; 

int cpia2_match_video_size(int width, int height)
{
	if (width >= STV_IMAGE_VGA_COLS && height >= STV_IMAGE_VGA_ROWS)
		return VIDEOSIZE_VGA;

	if (width >= STV_IMAGE_CIF_COLS && height >= STV_IMAGE_CIF_ROWS)
		return VIDEOSIZE_CIF;

	if (width >= STV_IMAGE_QVGA_COLS && height >= STV_IMAGE_QVGA_ROWS)
		return VIDEOSIZE_QVGA;

	if (width >= 288 && height >= 216)
		return VIDEOSIZE_288_216;

	if (width >= 256 && height >= 192)
		return VIDEOSIZE_256_192;

	if (width >= 224 && height >= 168)
		return VIDEOSIZE_224_168;

	if (width >= 192 && height >= 144)
		return VIDEOSIZE_192_144;

	if (width >= STV_IMAGE_QCIF_COLS && height >= STV_IMAGE_QCIF_ROWS)
		return VIDEOSIZE_QCIF;

	return -1;
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
          int width = 100;
          int height = 100;
          int benchRet = cpia2_match_video_size(width,height);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int width = 255;
          int height = 255;
          int benchRet = cpia2_match_video_size(width,height);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int width = 10;
          int height = 10;
          int benchRet = cpia2_match_video_size(width,height);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
