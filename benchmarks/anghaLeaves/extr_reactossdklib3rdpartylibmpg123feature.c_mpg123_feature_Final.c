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
typedef  enum mpg123_feature_set { ____Placeholder_mpg123_feature_set } mpg123_feature_set ;

/* Variables and functions */
#define  MPG123_FEATURE_ABI_UTF8OPEN 142 
#define  MPG123_FEATURE_DECODE_ACCURATE 141 
#define  MPG123_FEATURE_DECODE_DOWNSAMPLE 140 
#define  MPG123_FEATURE_DECODE_LAYER1 139 
#define  MPG123_FEATURE_DECODE_LAYER2 138 
#define  MPG123_FEATURE_DECODE_LAYER3 137 
#define  MPG123_FEATURE_DECODE_NTOM 136 
#define  MPG123_FEATURE_EQUALIZER 135 
#define  MPG123_FEATURE_INDEX 134 
#define  MPG123_FEATURE_OUTPUT_16BIT 133 
#define  MPG123_FEATURE_OUTPUT_32BIT 132 
#define  MPG123_FEATURE_OUTPUT_8BIT 131 
#define  MPG123_FEATURE_PARSE_ICY 130 
#define  MPG123_FEATURE_PARSE_ID3V2 129 
#define  MPG123_FEATURE_TIMEOUT_READ 128 

int mpg123_feature(const enum mpg123_feature_set key)
{
	switch(key)
	{
		case MPG123_FEATURE_ABI_UTF8OPEN:
#ifdef WANT_WIN32_UNICODE
		return 1;
#else
		return 0;
#endif /* WANT_WIN32_UNICODE */

		case MPG123_FEATURE_OUTPUT_8BIT:
#ifdef NO_8BIT
		return 0;
#else
		return 1;
#endif /* mpg123_output_8bit */

		case MPG123_FEATURE_OUTPUT_16BIT:
#ifdef NO_16BIT
		return 0;
#else
		return 1;
#endif /* mpg123_output_16bit */

		case MPG123_FEATURE_OUTPUT_32BIT:
#ifdef NO_32BIT
		return 0;
#else
		return 1;
#endif /* mpg123_output_32bit */

		case MPG123_FEATURE_PARSE_ID3V2:
#ifdef NO_ID3V2
		return 0;
#else
		return 1;
#endif /* NO_ID3V2 */

		case MPG123_FEATURE_DECODE_LAYER1:
#ifdef NO_LAYER1
		return 0;
#else
		return 1;
#endif /* NO_LAYER1 */

		case MPG123_FEATURE_DECODE_LAYER2:
#ifdef NO_LAYER2
		return 0;
#else
		return 1;
#endif /* NO_LAYER2 */

		case MPG123_FEATURE_DECODE_LAYER3:
#ifdef NO_LAYER3
		return 0;
#else
		return 1;
#endif /* NO_LAYER3 */

		case MPG123_FEATURE_DECODE_ACCURATE:
#ifdef ACCURATE_ROUNDING
		return 1;
#else
		return 0;
#endif /* ACCURATE_ROUNDING */

		case MPG123_FEATURE_DECODE_DOWNSAMPLE:
#ifdef NO_DOWNSAMPLE
		return 0;
#else
		return 1;
#endif /* NO_DOWNSAMPLE */

		case MPG123_FEATURE_DECODE_NTOM:
#ifdef NO_NTOM
		return 0;
#else
		return 1;
#endif /* NO_NTOM */

		case MPG123_FEATURE_PARSE_ICY:
#ifdef NO_ICY
		return 0;
#else
		return 1;
#endif /* NO_ICY */

		case MPG123_FEATURE_INDEX:
#ifdef FRAME_INDEX
		return 1;
#else
		return 0;
#endif /* FRAME_INDEX */
		case MPG123_FEATURE_TIMEOUT_READ:
#ifdef TIMEOUT_READ
		return 1;
#else
		return 0;
#endif
		case MPG123_FEATURE_EQUALIZER:
#ifndef NO_EQUALIZER
		return 1;
#else
		return 0;
#endif

		default: return 0;
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
          const enum mpg123_feature_set key = 0;
          int benchRet = mpg123_feature(key);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
