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

/* Variables and functions */
 int EXYNOS4_HUFF_TBL_HACCL ; 
 int EXYNOS4_HUFF_TBL_HACCV ; 
 int EXYNOS4_HUFF_TBL_HACLL ; 
 int EXYNOS4_HUFF_TBL_HACLV ; 
 int EXYNOS4_HUFF_TBL_HDCCL ; 
 int EXYNOS4_HUFF_TBL_HDCCV ; 
 int EXYNOS4_HUFF_TBL_HDCLL ; 
 int EXYNOS4_HUFF_TBL_HDCLV ; 

__attribute__((used)) static inline int __exynos4_huff_tbl(int class, int id, bool lenval)
{
	/*
	 * class: 0 - DC, 1 - AC
	 * id: 0 - Y, 1 - Cb/Cr
	 */
	if (class) {
		if (id)
			return lenval ? EXYNOS4_HUFF_TBL_HACCL :
				EXYNOS4_HUFF_TBL_HACCV;
		return lenval ? EXYNOS4_HUFF_TBL_HACLL : EXYNOS4_HUFF_TBL_HACLV;

	}
	/* class == 0 */
	if (id)
		return lenval ? EXYNOS4_HUFF_TBL_HDCCL : EXYNOS4_HUFF_TBL_HDCCV;

	return lenval ? EXYNOS4_HUFF_TBL_HDCLL : EXYNOS4_HUFF_TBL_HDCLV;
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
          int class = 100;
          int id = 100;
          int lenval = 100;
          int benchRet = __exynos4_huff_tbl(class,id,lenval);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int class = 255;
          int id = 255;
          int lenval = 255;
          int benchRet = __exynos4_huff_tbl(class,id,lenval);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int class = 10;
          int id = 10;
          int lenval = 10;
          int benchRet = __exynos4_huff_tbl(class,id,lenval);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
