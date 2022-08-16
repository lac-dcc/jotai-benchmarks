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
struct mtk_jpeg_dec_param {int src_color; scalar_t__ dst_fourcc; int dma_mcu; int dma_group; int mcu_w; int dma_last_mcu; } ;

/* Variables and functions */
 int MTK_JPEG_COLOR_400 ; 
 int MTK_JPEG_COLOR_422V ; 
 int MTK_JPEG_COLOR_422X2 ; 
 int MTK_JPEG_COLOR_444 ; 
 scalar_t__ V4L2_PIX_FMT_YUV420M ; 
 scalar_t__ V4L2_PIX_FMT_YUV422M ; 

__attribute__((used)) static void mtk_jpeg_calc_dma_group(struct mtk_jpeg_dec_param *param)
{
	u32 factor_mcu = 3;

	if (param->src_color == MTK_JPEG_COLOR_444 &&
	    param->dst_fourcc == V4L2_PIX_FMT_YUV422M)
		factor_mcu = 4;
	else if (param->src_color == MTK_JPEG_COLOR_422V &&
		 param->dst_fourcc == V4L2_PIX_FMT_YUV420M)
		factor_mcu = 4;
	else if (param->src_color == MTK_JPEG_COLOR_422X2 &&
		 param->dst_fourcc == V4L2_PIX_FMT_YUV422M)
		factor_mcu = 2;
	else if (param->src_color == MTK_JPEG_COLOR_400 ||
		 (param->src_color & 0x0FFFF) == 0)
		factor_mcu = 4;

	param->dma_mcu = 1 << factor_mcu;
	param->dma_group = param->mcu_w / param->dma_mcu;
	param->dma_last_mcu = param->mcu_w % param->dma_mcu;
	if (param->dma_last_mcu)
		param->dma_group++;
	else
		param->dma_last_mcu = param->dma_mcu;
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
          int _len_param0 = 1;
          struct mtk_jpeg_dec_param * param = (struct mtk_jpeg_dec_param *) malloc(_len_param0*sizeof(struct mtk_jpeg_dec_param));
          for(int _i0 = 0; _i0 < _len_param0; _i0++) {
            param[_i0].src_color = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].dst_fourcc = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].dma_mcu = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].dma_group = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].mcu_w = ((-2 * (next_i()%2)) + 1) * next_i();
        param[_i0].dma_last_mcu = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mtk_jpeg_calc_dma_group(param);
          free(param);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
