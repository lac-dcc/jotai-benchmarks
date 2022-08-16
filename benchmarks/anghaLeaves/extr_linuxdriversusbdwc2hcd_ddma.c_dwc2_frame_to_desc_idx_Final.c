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

/* Type definitions */
typedef  int u8 ;
typedef  int u16 ;
struct dwc2_qh {scalar_t__ dev_speed; } ;

/* Variables and functions */
 int MAX_DMA_DESC_NUM_GENERIC ; 
 int MAX_DMA_DESC_NUM_HS_ISOC ; 
 scalar_t__ USB_SPEED_HIGH ; 

__attribute__((used)) static u8 dwc2_frame_to_desc_idx(struct dwc2_qh *qh, u16 frame_idx)
{
	if (qh->dev_speed == USB_SPEED_HIGH)
		/* Descriptor set (8 descriptors) index which is 8-aligned */
		return (frame_idx & ((MAX_DMA_DESC_NUM_HS_ISOC / 8) - 1)) * 8;
	else
		return frame_idx & (MAX_DMA_DESC_NUM_GENERIC - 1);
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
          int frame_idx = 100;
          int _len_qh0 = 1;
          struct dwc2_qh * qh = (struct dwc2_qh *) malloc(_len_qh0*sizeof(struct dwc2_qh));
          for(int _i0 = 0; _i0 < _len_qh0; _i0++) {
            qh[_i0].dev_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dwc2_frame_to_desc_idx(qh,frame_idx);
          printf("%d\n", benchRet); 
          free(qh);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int frame_idx = 10;
          int _len_qh0 = 100;
          struct dwc2_qh * qh = (struct dwc2_qh *) malloc(_len_qh0*sizeof(struct dwc2_qh));
          for(int _i0 = 0; _i0 < _len_qh0; _i0++) {
            qh[_i0].dev_speed = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dwc2_frame_to_desc_idx(qh,frame_idx);
          printf("%d\n", benchRet); 
          free(qh);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
