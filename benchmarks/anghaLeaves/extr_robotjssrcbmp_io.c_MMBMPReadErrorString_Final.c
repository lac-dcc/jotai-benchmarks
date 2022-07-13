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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  int MMIOError ;

/* Variables and functions */
#define  kBMPAccessError 134 
#define  kBMPInvalidColorPanesError 133 
#define  kBMPInvalidKeyError 132 
#define  kBMPInvalidPixelDataError 131 
#define  kBMPUnsupportedColorDepthError 130 
#define  kBMPUnsupportedCompressionError 129 
#define  kBMPUnsupportedHeaderError 128 

const char *MMBMPReadErrorString(MMIOError error)
{
	switch (error) {
		case kBMPAccessError:
			return "Could not open file";
		case kBMPInvalidKeyError:
			return "Not a BMP file";
		case kBMPUnsupportedHeaderError:
			return "Unsupported BMP header";
		case kBMPInvalidColorPanesError:
			return "Invalid number of color panes in BMP file";
		case kBMPUnsupportedColorDepthError:
			return "Unsupported color depth in BMP file";
		case kBMPUnsupportedCompressionError:
			return "Unsupported file compression in BMP file";
		case kBMPInvalidPixelDataError:
			return "Could not read BMP pixel data";
		default:
			return NULL;
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
          int error = 100;
          const char * benchRet = MMBMPReadErrorString(error);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int error = 255;
          const char * benchRet = MMBMPReadErrorString(error);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int error = 10;
          const char * benchRet = MMBMPReadErrorString(error);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
