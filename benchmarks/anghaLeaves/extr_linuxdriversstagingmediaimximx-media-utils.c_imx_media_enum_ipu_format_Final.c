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
       1            big-arr-10x\n\
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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u32 ;
typedef  enum codespace_sel { ____Placeholder_codespace_sel } codespace_sel ;
struct TYPE_4__ {size_t* codes; } ;
struct TYPE_3__ {size_t* codes; } ;

/* Variables and functions */
#define  CS_SEL_ANY 130 
#define  CS_SEL_RGB 129 
#define  CS_SEL_YUV 128 
 int EINVAL ; 
 size_t NUM_IPU_RGB_FORMATS ; 
 size_t NUM_IPU_YUV_FORMATS ; 
 TYPE_2__* ipu_rgb_formats ; 
 TYPE_1__* ipu_yuv_formats ; 

int imx_media_enum_ipu_format(u32 *code, u32 index, enum codespace_sel cs_sel)
{
	switch (cs_sel) {
	case CS_SEL_YUV:
		if (index >= NUM_IPU_YUV_FORMATS)
			return -EINVAL;
		*code = ipu_yuv_formats[index].codes[0];
		break;
	case CS_SEL_RGB:
		if (index >= NUM_IPU_RGB_FORMATS)
			return -EINVAL;
		*code = ipu_rgb_formats[index].codes[0];
		break;
	case CS_SEL_ANY:
		if (index >= NUM_IPU_YUV_FORMATS + NUM_IPU_RGB_FORMATS)
			return -EINVAL;
		if (index >= NUM_IPU_YUV_FORMATS) {
			index -= NUM_IPU_YUV_FORMATS;
			*code = ipu_rgb_formats[index].codes[0];
		} else {
			*code = ipu_yuv_formats[index].codes[0];
		}
		break;
	default:
		return -EINVAL;
	}

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
          int _len_code0 = 1;
          unsigned long * code = (unsigned long *) malloc(_len_code0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = imx_media_enum_ipu_format(code,index,cs_sel);
          printf("%d\n", benchRet); 
          free(code);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long index = 10;
          enum codespace_sel cs_sel = 0;
          int _len_code0 = 100;
          unsigned long * code = (unsigned long *) malloc(_len_code0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_code0; _i0++) {
            code[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = imx_media_enum_ipu_format(code,index,cs_sel);
          printf("%d\n", benchRet); 
          free(code);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
