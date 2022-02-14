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
typedef  int u32 ;
struct imx_media_pixfmt {int* codes; } ;
typedef  enum codespace_sel { ____Placeholder_codespace_sel } codespace_sel ;

/* Variables and functions */
#define  CS_SEL_ANY 130 
#define  CS_SEL_RGB 129 
#define  CS_SEL_YUV 128 
 int NUM_IPU_RGB_FORMATS ; 
 int NUM_IPU_YUV_FORMATS ; 
 struct imx_media_pixfmt* ipu_rgb_formats ; 
 struct imx_media_pixfmt* ipu_yuv_formats ; 

const struct imx_media_pixfmt *
imx_media_find_ipu_format(u32 code, enum codespace_sel cs_sel)
{
	const struct imx_media_pixfmt *array, *fmt, *ret = NULL;
	u32 array_size;
	int i, j;

	switch (cs_sel) {
	case CS_SEL_YUV:
		array_size = NUM_IPU_YUV_FORMATS;
		array = ipu_yuv_formats;
		break;
	case CS_SEL_RGB:
		array_size = NUM_IPU_RGB_FORMATS;
		array = ipu_rgb_formats;
		break;
	case CS_SEL_ANY:
		array_size = NUM_IPU_YUV_FORMATS + NUM_IPU_RGB_FORMATS;
		array = ipu_yuv_formats;
		break;
	default:
		return NULL;
	}

	for (i = 0; i < array_size; i++) {
		if (cs_sel == CS_SEL_ANY && i >= NUM_IPU_YUV_FORMATS)
			fmt = &ipu_rgb_formats[i - NUM_IPU_YUV_FORMATS];
		else
			fmt = &array[i];

		for (j = 0; code && fmt->codes[j]; j++) {
			if (code == fmt->codes[j]) {
				ret = fmt;
				goto out;
			}
		}
	}

out:
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

    // big-arr
    case 0:
    {
          int code = 255;
          enum codespace_sel cs_sel = 0;
          const struct imx_media_pixfmt * benchRet = imx_media_find_ipu_format(code,cs_sel);
          printf("{{struct}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
