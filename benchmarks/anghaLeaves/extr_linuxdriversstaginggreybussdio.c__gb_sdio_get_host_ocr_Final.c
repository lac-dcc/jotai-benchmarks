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
 int GB_SDIO_VDD_165_195 ; 
 int GB_SDIO_VDD_20_21 ; 
 int GB_SDIO_VDD_21_22 ; 
 int GB_SDIO_VDD_22_23 ; 
 int GB_SDIO_VDD_23_24 ; 
 int GB_SDIO_VDD_24_25 ; 
 int GB_SDIO_VDD_25_26 ; 
 int GB_SDIO_VDD_26_27 ; 
 int GB_SDIO_VDD_27_28 ; 
 int GB_SDIO_VDD_28_29 ; 
 int GB_SDIO_VDD_29_30 ; 
 int GB_SDIO_VDD_30_31 ; 
 int GB_SDIO_VDD_31_32 ; 
 int GB_SDIO_VDD_32_33 ; 
 int GB_SDIO_VDD_33_34 ; 
 int GB_SDIO_VDD_34_35 ; 
 int GB_SDIO_VDD_35_36 ; 
 int MMC_VDD_165_195 ; 
 int MMC_VDD_20_21 ; 
 int MMC_VDD_21_22 ; 
 int MMC_VDD_22_23 ; 
 int MMC_VDD_23_24 ; 
 int MMC_VDD_24_25 ; 
 int MMC_VDD_25_26 ; 
 int MMC_VDD_26_27 ; 
 int MMC_VDD_27_28 ; 
 int MMC_VDD_28_29 ; 
 int MMC_VDD_29_30 ; 
 int MMC_VDD_30_31 ; 
 int MMC_VDD_31_32 ; 
 int MMC_VDD_32_33 ; 
 int MMC_VDD_33_34 ; 
 int MMC_VDD_34_35 ; 
 int MMC_VDD_35_36 ; 

__attribute__((used)) static u32 _gb_sdio_get_host_ocr(u32 ocr)
{
	return (((ocr & GB_SDIO_VDD_165_195) ? MMC_VDD_165_195 : 0) |
		((ocr & GB_SDIO_VDD_20_21) ? MMC_VDD_20_21 : 0) |
		((ocr & GB_SDIO_VDD_21_22) ? MMC_VDD_21_22 : 0) |
		((ocr & GB_SDIO_VDD_22_23) ? MMC_VDD_22_23 : 0) |
		((ocr & GB_SDIO_VDD_23_24) ? MMC_VDD_23_24 : 0) |
		((ocr & GB_SDIO_VDD_24_25) ? MMC_VDD_24_25 : 0) |
		((ocr & GB_SDIO_VDD_25_26) ? MMC_VDD_25_26 : 0) |
		((ocr & GB_SDIO_VDD_26_27) ? MMC_VDD_26_27 : 0) |
		((ocr & GB_SDIO_VDD_27_28) ? MMC_VDD_27_28 : 0) |
		((ocr & GB_SDIO_VDD_28_29) ? MMC_VDD_28_29 : 0) |
		((ocr & GB_SDIO_VDD_29_30) ? MMC_VDD_29_30 : 0) |
		((ocr & GB_SDIO_VDD_30_31) ? MMC_VDD_30_31 : 0) |
		((ocr & GB_SDIO_VDD_31_32) ? MMC_VDD_31_32 : 0) |
		((ocr & GB_SDIO_VDD_32_33) ? MMC_VDD_32_33 : 0) |
		((ocr & GB_SDIO_VDD_33_34) ? MMC_VDD_33_34 : 0) |
		((ocr & GB_SDIO_VDD_34_35) ? MMC_VDD_34_35 : 0) |
		((ocr & GB_SDIO_VDD_35_36) ? MMC_VDD_35_36 : 0)
		);
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
          int ocr = 100;
          int benchRet = _gb_sdio_get_host_ocr(ocr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int ocr = 255;
          int benchRet = _gb_sdio_get_host_ocr(ocr);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ocr = 10;
          int benchRet = _gb_sdio_get_host_ocr(ocr);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
