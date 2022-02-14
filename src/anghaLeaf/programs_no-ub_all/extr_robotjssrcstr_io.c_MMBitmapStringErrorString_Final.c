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
       0            big-arr\n\
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
typedef  int MMBMPStringError ;

/* Variables and functions */
#define  MMMBMPStringEncodeError 133 
#define  kMMBMPStringCompressError 132 
#define  kMMBMPStringDecodeError 131 
#define  kMMBMPStringDecompressError 130 
#define  kMMBMPStringInvalidHeaderError 129 
#define  kMMBMPStringSizeError 128 

const char *MMBitmapStringErrorString(MMBMPStringError err)
{
	switch (err) {
		case kMMBMPStringInvalidHeaderError:
			return "Invalid header for string";
		case kMMBMPStringDecodeError:
			return "Error decoding string";
		case kMMBMPStringDecompressError:
			return "Error decompressing string";
		case kMMBMPStringSizeError:
			return "String not of expected size";
		case MMMBMPStringEncodeError:
			return "Error encoding string";
		case kMMBMPStringCompressError:
			return "Error compressing string";
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

    // big-arr
    case 0:
    {
          int err = 255;
          const char * benchRet = MMBitmapStringErrorString(err);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
