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
typedef  size_t u32 ;
struct imx_media_pixfmt {size_t fourcc; size_t* codes; int /*<<< orphan*/  bayer; } ;
typedef  enum codespace_sel { ____Placeholder_codespace_sel } codespace_sel ;

/* Variables and functions */
#define  CS_SEL_ANY 130 
#define  CS_SEL_RGB 129 
#define  CS_SEL_YUV 128 
 int EINVAL ; 
 size_t NUM_MBUS_RGB_FORMATS ; 
 size_t NUM_MBUS_YUV_FORMATS ; 
 size_t NUM_RGB_FORMATS ; 
 size_t NUM_YUV_FORMATS ; 
 struct imx_media_pixfmt* rgb_formats ; 
 struct imx_media_pixfmt* yuv_formats ; 

__attribute__((used)) static int enum_format(u32 *fourcc, u32 *code, u32 index,
		       enum codespace_sel cs_sel,
		       bool allow_non_mbus,
		       bool allow_bayer)
{
	const struct imx_media_pixfmt *fmt;
	u32 mbus_yuv_sz = NUM_MBUS_YUV_FORMATS;
	u32 mbus_rgb_sz = NUM_MBUS_RGB_FORMATS;
	u32 yuv_sz = NUM_YUV_FORMATS;
	u32 rgb_sz = NUM_RGB_FORMATS;

	switch (cs_sel) {
	case CS_SEL_YUV:
		if (index >= yuv_sz ||
		    (!allow_non_mbus && index >= mbus_yuv_sz))
			return -EINVAL;
		fmt = &yuv_formats[index];
		break;
	case CS_SEL_RGB:
		if (index >= rgb_sz ||
		    (!allow_non_mbus && index >= mbus_rgb_sz))
			return -EINVAL;
		fmt = &rgb_formats[index];
		if (!allow_bayer && fmt->bayer)
			return -EINVAL;
		break;
	case CS_SEL_ANY:
		if (!allow_non_mbus) {
			if (index >= mbus_yuv_sz) {
				index -= mbus_yuv_sz;
				if (index >= mbus_rgb_sz)
					return -EINVAL;
				fmt = &rgb_formats[index];
				if (!allow_bayer && fmt->bayer)
					return -EINVAL;
			} else {
				fmt = &yuv_formats[index];
			}
		} else {
			if (index >= yuv_sz + rgb_sz)
				return -EINVAL;
			if (index >= yuv_sz) {
				fmt = &rgb_formats[index - yuv_sz];
				if (!allow_bayer && fmt->bayer)
					return -EINVAL;
			} else {
				fmt = &yuv_formats[index];
			}
		}
		break;
	default:
		return -EINVAL;
	}

	if (fourcc)
		*fourcc = fmt->fourcc;
	if (code)
		*code = fmt->codes[0];

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
          unsigned long index = 100;
          enum codespace_sel cs_sel = 0;
          int allow_non_mbus = 100;
          int allow_bayer = 100;
          int _len_fourcc0 = 1;
          unsigned long * fourcc = (unsigned long *) malloc(_len_fourcc0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_fourcc0; _i0++) {
            fourcc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_code0 = 1;
          unsigned long * code = (unsigned long *) malloc(_len_code0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = enum_format(fourcc,code,index,cs_sel,allow_non_mbus,allow_bayer);
          printf("%d\n", benchRet); 
          free(fourcc);
          free(code);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
