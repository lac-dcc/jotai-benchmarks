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
typedef  int u32 ;

/* Variables and functions */
 int BIT_INQST_MASK_EOF ; 
 int BIT_INQST_MASK_ERROR_BS ; 
 int BIT_INQST_MASK_OVERFLOW ; 
 int BIT_INQST_MASK_PAUSE ; 
 int BIT_INQST_MASK_UNDERFLOW ; 
 int MTK_JPEG_DEC_RESULT_EOF_DONE ; 
 int MTK_JPEG_DEC_RESULT_ERROR_BS ; 
 int MTK_JPEG_DEC_RESULT_ERROR_UNKNOWN ; 
 int MTK_JPEG_DEC_RESULT_OVERFLOW ; 
 int MTK_JPEG_DEC_RESULT_PAUSE ; 
 int MTK_JPEG_DEC_RESULT_UNDERFLOW ; 

u32 mtk_jpeg_dec_enum_result(u32 irq_result)
{
	if (irq_result & BIT_INQST_MASK_EOF)
		return MTK_JPEG_DEC_RESULT_EOF_DONE;
	if (irq_result & BIT_INQST_MASK_PAUSE)
		return MTK_JPEG_DEC_RESULT_PAUSE;
	if (irq_result & BIT_INQST_MASK_UNDERFLOW)
		return MTK_JPEG_DEC_RESULT_UNDERFLOW;
	if (irq_result & BIT_INQST_MASK_OVERFLOW)
		return MTK_JPEG_DEC_RESULT_OVERFLOW;
	if (irq_result & BIT_INQST_MASK_ERROR_BS)
		return MTK_JPEG_DEC_RESULT_ERROR_BS;

	return MTK_JPEG_DEC_RESULT_ERROR_UNKNOWN;
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
          int irq_result = 100;
          int benchRet = mtk_jpeg_dec_enum_result(irq_result);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int irq_result = 255;
          int benchRet = mtk_jpeg_dec_enum_result(irq_result);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int irq_result = 10;
          int benchRet = mtk_jpeg_dec_enum_result(irq_result);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
