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
typedef  int /*<<< orphan*/  u32 ;
struct pkt_attrib {int qsel; } ;
struct xmit_frame {struct pkt_attrib attrib; } ;

/* Variables and functions */
 int /*<<< orphan*/  BCN_QUEUE_INX ; 
 int /*<<< orphan*/  BE_QUEUE_INX ; 
 int /*<<< orphan*/  BK_QUEUE_INX ; 
 int /*<<< orphan*/  HIGH_QUEUE_INX ; 
 int /*<<< orphan*/  MGT_QUEUE_INX ; 
 int /*<<< orphan*/  VI_QUEUE_INX ; 
 int /*<<< orphan*/  VO_QUEUE_INX ; 

u32 rtw_get_ff_hwaddr(struct xmit_frame	*pxmitframe)
{
	u32 addr;
	struct pkt_attrib *pattrib = &pxmitframe->attrib;	
	
	switch(pattrib->qsel)
	{
		case 0:
		case 3:
			addr = BE_QUEUE_INX;
		 	break;
		case 1:
		case 2:
			addr = BK_QUEUE_INX;
			break;				
		case 4:
		case 5:
			addr = VI_QUEUE_INX;
			break;		
		case 6:
		case 7:
			addr = VO_QUEUE_INX;
			break;
		case 0x10:
			addr = BCN_QUEUE_INX;
			break;
		case 0x11://BC/MC in PS (HIQ)
			addr = HIGH_QUEUE_INX;
			break;
		case 0x12:
			addr = MGT_QUEUE_INX;
			break;
		default:
			addr = BE_QUEUE_INX;
			break;		
			
	}

	return addr;

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
          int _len_pxmitframe0 = 1;
          struct xmit_frame * pxmitframe = (struct xmit_frame *) malloc(_len_pxmitframe0*sizeof(struct xmit_frame));
          for(int _i0 = 0; _i0 < _len_pxmitframe0; _i0++) {
            pxmitframe[_i0].attrib.qsel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtw_get_ff_hwaddr(pxmitframe);
          printf("%d\n", benchRet); 
          free(pxmitframe);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_pxmitframe0 = 100;
          struct xmit_frame * pxmitframe = (struct xmit_frame *) malloc(_len_pxmitframe0*sizeof(struct xmit_frame));
          for(int _i0 = 0; _i0 < _len_pxmitframe0; _i0++) {
            pxmitframe[_i0].attrib.qsel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rtw_get_ff_hwaddr(pxmitframe);
          printf("%d\n", benchRet); 
          free(pxmitframe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
