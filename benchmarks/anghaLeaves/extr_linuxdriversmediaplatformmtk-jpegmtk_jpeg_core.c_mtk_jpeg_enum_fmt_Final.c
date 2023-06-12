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
       0            big-arr\n\
       1            big-arr-10x\n\
       2            empty\n\
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
struct v4l2_fmtdesc {int index; int /*<<< orphan*/  pixelformat; } ;
struct mtk_jpeg_fmt {int flags; int /*<<< orphan*/  fourcc; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int mtk_jpeg_enum_fmt(struct mtk_jpeg_fmt *mtk_jpeg_formats, int n,
			     struct v4l2_fmtdesc *f, u32 type)
{
	int i, num = 0;

	for (i = 0; i < n; ++i) {
		if (mtk_jpeg_formats[i].flags & type) {
			if (num == f->index)
				break;
			++num;
		}
	}

	if (i >= n)
		return -EINVAL;

	f->pixelformat = mtk_jpeg_formats[i].fourcc;

	return 0;
}

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
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 5376
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 3330
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 2307
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 2307
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 2307
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 2052
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 2308
          // ------------------------------- 

          int n = 255;
        
          int type = 255;
        
          int _len_mtk_jpeg_formats0 = 65025;
          struct mtk_jpeg_fmt * mtk_jpeg_formats = (struct mtk_jpeg_fmt *) malloc(_len_mtk_jpeg_formats0*sizeof(struct mtk_jpeg_fmt));
          for(int _i0 = 0; _i0 < _len_mtk_jpeg_formats0; _i0++) {
              mtk_jpeg_formats[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          mtk_jpeg_formats[_i0].fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_f0 = 65025;
          struct v4l2_fmtdesc * f = (struct v4l2_fmtdesc *) malloc(_len_f0*sizeof(struct v4l2_fmtdesc));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              f[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          f[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mtk_jpeg_enum_fmt(mtk_jpeg_formats,n,f,type);
          printf("%d\n", benchRet); 
          free(mtk_jpeg_formats);
          free(f);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 39
          // dynamic_instructions_O0 : 231
          // ------------------------------- 
          // static_instructions_O1 : 28
          // dynamic_instructions_O1 : 145
          // ------------------------------- 
          // static_instructions_O2 : 21
          // dynamic_instructions_O2 : 102
          // ------------------------------- 
          // static_instructions_O3 : 21
          // dynamic_instructions_O3 : 102
          // ------------------------------- 
          // static_instructions_Ofast : 21
          // dynamic_instructions_Ofast : 102
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 92
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 103
          // ------------------------------- 

          int n = 10;
        
          int type = 10;
        
          int _len_mtk_jpeg_formats0 = 100;
          struct mtk_jpeg_fmt * mtk_jpeg_formats = (struct mtk_jpeg_fmt *) malloc(_len_mtk_jpeg_formats0*sizeof(struct mtk_jpeg_fmt));
          for(int _i0 = 0; _i0 < _len_mtk_jpeg_formats0; _i0++) {
              mtk_jpeg_formats[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          mtk_jpeg_formats[_i0].fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_f0 = 100;
          struct v4l2_fmtdesc * f = (struct v4l2_fmtdesc *) malloc(_len_f0*sizeof(struct v4l2_fmtdesc));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              f[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          f[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mtk_jpeg_enum_fmt(mtk_jpeg_formats,n,f,type);
          printf("%d\n", benchRet); 
          free(mtk_jpeg_formats);
          free(f);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 21
          // dynamic_instructions_O0 : 21
          // ------------------------------- 
          // static_instructions_O1 : 9
          // dynamic_instructions_O1 : 9
          // ------------------------------- 
          // static_instructions_O2 : 8
          // dynamic_instructions_O2 : 8
          // ------------------------------- 
          // static_instructions_O3 : 8
          // dynamic_instructions_O3 : 8
          // ------------------------------- 
          // static_instructions_Ofast : 8
          // dynamic_instructions_Ofast : 8
          // ------------------------------- 
          // static_instructions_Os : 9
          // dynamic_instructions_Os : 9
          // ------------------------------- 
          // static_instructions_Oz : 13
          // dynamic_instructions_Oz : 13
          // ------------------------------- 

          int n = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int type = ((-2 * (next_i()%2)) + 1) * next_i();
        
          int _len_mtk_jpeg_formats0 = 1;
          struct mtk_jpeg_fmt * mtk_jpeg_formats = (struct mtk_jpeg_fmt *) malloc(_len_mtk_jpeg_formats0*sizeof(struct mtk_jpeg_fmt));
          for(int _i0 = 0; _i0 < _len_mtk_jpeg_formats0; _i0++) {
              mtk_jpeg_formats[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
          mtk_jpeg_formats[_i0].fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int _len_f0 = 1;
          struct v4l2_fmtdesc * f = (struct v4l2_fmtdesc *) malloc(_len_f0*sizeof(struct v4l2_fmtdesc));
          for(int _i0 = 0; _i0 < _len_f0; _i0++) {
              f[_i0].index = ((-2 * (next_i()%2)) + 1) * next_i();
          f[_i0].pixelformat = ((-2 * (next_i()%2)) + 1) * next_i();
        
          }
        
          int benchRet = mtk_jpeg_enum_fmt(mtk_jpeg_formats,n,f,type);
          printf("%d\n", benchRet); 
          free(mtk_jpeg_formats);
          free(f);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
