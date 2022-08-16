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
typedef  int u32 ;
struct s2255_mode {scalar_t__ format; int scale; int color; } ;

/* Variables and functions */
 int COLOR_Y8 ; 
 int DEF_USB_BLOCK ; 
 scalar_t__ FORMAT_NTSC ; 
 scalar_t__ FORMAT_PAL ; 
 int LINE_SZ_1CIFS_NTSC ; 
 int LINE_SZ_1CIFS_PAL ; 
 int LINE_SZ_2CIFS_NTSC ; 
 int LINE_SZ_2CIFS_PAL ; 
 int LINE_SZ_4CIFS_NTSC ; 
 int LINE_SZ_4CIFS_PAL ; 
 int LINE_SZ_DEF ; 
 int MASK_COLOR ; 
 int NUM_LINES_1CIFS_NTSC ; 
 int NUM_LINES_1CIFS_PAL ; 
 int NUM_LINES_2CIFS_NTSC ; 
 int NUM_LINES_2CIFS_PAL ; 
 int NUM_LINES_4CIFS_NTSC ; 
 int NUM_LINES_4CIFS_PAL ; 
 int NUM_LINES_DEF ; 
 int PREFIX_SIZE ; 
#define  SCALE_1CIFS 131 
#define  SCALE_2CIFS 130 
#define  SCALE_4CIFS 129 
#define  SCALE_4CIFSI 128 

__attribute__((used)) static u32 get_transfer_size(struct s2255_mode *mode)
{
	int linesPerFrame = LINE_SZ_DEF;
	int pixelsPerLine = NUM_LINES_DEF;
	u32 outImageSize;
	u32 usbInSize;
	unsigned int mask_mult;

	if (mode == NULL)
		return 0;

	if (mode->format == FORMAT_NTSC) {
		switch (mode->scale) {
		case SCALE_4CIFS:
		case SCALE_4CIFSI:
			linesPerFrame = NUM_LINES_4CIFS_NTSC * 2;
			pixelsPerLine = LINE_SZ_4CIFS_NTSC;
			break;
		case SCALE_2CIFS:
			linesPerFrame = NUM_LINES_2CIFS_NTSC;
			pixelsPerLine = LINE_SZ_2CIFS_NTSC;
			break;
		case SCALE_1CIFS:
			linesPerFrame = NUM_LINES_1CIFS_NTSC;
			pixelsPerLine = LINE_SZ_1CIFS_NTSC;
			break;
		default:
			break;
		}
	} else if (mode->format == FORMAT_PAL) {
		switch (mode->scale) {
		case SCALE_4CIFS:
		case SCALE_4CIFSI:
			linesPerFrame = NUM_LINES_4CIFS_PAL * 2;
			pixelsPerLine = LINE_SZ_4CIFS_PAL;
			break;
		case SCALE_2CIFS:
			linesPerFrame = NUM_LINES_2CIFS_PAL;
			pixelsPerLine = LINE_SZ_2CIFS_PAL;
			break;
		case SCALE_1CIFS:
			linesPerFrame = NUM_LINES_1CIFS_PAL;
			pixelsPerLine = LINE_SZ_1CIFS_PAL;
			break;
		default:
			break;
		}
	}
	outImageSize = linesPerFrame * pixelsPerLine;
	if ((mode->color & MASK_COLOR) != COLOR_Y8) {
		/* 2 bytes/pixel if not monochrome */
		outImageSize *= 2;
	}

	/* total bytes to send including prefix and 4K padding;
	   must be a multiple of USB_READ_SIZE */
	usbInSize = outImageSize + PREFIX_SIZE;	/* always send prefix */
	mask_mult = 0xffffffffUL - DEF_USB_BLOCK + 1;
	/* if size not a multiple of USB_READ_SIZE */
	if (usbInSize & ~mask_mult)
		usbInSize = (usbInSize & mask_mult) + (DEF_USB_BLOCK);
	return usbInSize;
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
          int _len_mode0 = 1;
          struct s2255_mode * mode = (struct s2255_mode *) malloc(_len_mode0*sizeof(struct s2255_mode));
          for(int _i0 = 0; _i0 < _len_mode0; _i0++) {
            mode[_i0].format = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].scale = ((-2 * (next_i()%2)) + 1) * next_i();
        mode[_i0].color = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_transfer_size(mode);
          printf("%d\n", benchRet); 
          free(mode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
