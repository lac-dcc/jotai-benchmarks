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
typedef  scalar_t__ u32 ;
typedef  int /*<<< orphan*/  u16 ;
struct pkt_attrib {scalar_t__ encrypt; int /*<<< orphan*/  icv_len; scalar_t__ bswenc; scalar_t__ pktlen; scalar_t__ iv_len; scalar_t__ hdrlen; } ;
struct xmit_frame {struct pkt_attrib attrib; } ;

/* Variables and functions */
 scalar_t__ SNAP_SIZE ; 
 scalar_t__ _TKIP_ ; 

__attribute__((used)) static u32 xmitframe_need_length(struct xmit_frame *pxmitframe)
{
	struct pkt_attrib *pattrib = &pxmitframe->attrib;

	u32 len;

	/*  no consider fragement */
	len = pattrib->hdrlen + pattrib->iv_len +
		SNAP_SIZE + sizeof(u16) +
		pattrib->pktlen +
		((pattrib->bswenc) ? pattrib->icv_len : 0);

	if (pattrib->encrypt == _TKIP_)
		len += 8;

	return len;
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
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int _len_pxmitframe0 = 65025;
          struct xmit_frame * pxmitframe = (struct xmit_frame *) malloc(_len_pxmitframe0*sizeof(struct xmit_frame));
          for(int _i0 = 0; _i0 < _len_pxmitframe0; _i0++) {
              pxmitframe[_i0].attrib.encrypt = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.icv_len = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.bswenc = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.pktlen = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.iv_len = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.hdrlen = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          long benchRet = xmitframe_need_length(pxmitframe);
          printf("%ld\n", benchRet); 
          free(pxmitframe);
        
        break;
    }


    // big-arr-10x
    case 1:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int _len_pxmitframe0 = 100;
          struct xmit_frame * pxmitframe = (struct xmit_frame *) malloc(_len_pxmitframe0*sizeof(struct xmit_frame));
          for(int _i0 = 0; _i0 < _len_pxmitframe0; _i0++) {
              pxmitframe[_i0].attrib.encrypt = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.icv_len = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.bswenc = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.pktlen = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.iv_len = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.hdrlen = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          long benchRet = xmitframe_need_length(pxmitframe);
          printf("%ld\n", benchRet); 
          free(pxmitframe);
        
        break;
    }


    // empty
    case 2:
    {
          // static_instructions_O0 : 33
          // dynamic_instructions_O0 : 33
          // ------------------------------- 
          // static_instructions_O1 : 20
          // dynamic_instructions_O1 : 20
          // ------------------------------- 
          // static_instructions_O2 : 20
          // dynamic_instructions_O2 : 20
          // ------------------------------- 
          // static_instructions_O3 : 20
          // dynamic_instructions_O3 : 20
          // ------------------------------- 
          // static_instructions_Ofast : 20
          // dynamic_instructions_Ofast : 20
          // ------------------------------- 
          // static_instructions_Os : 20
          // dynamic_instructions_Os : 20
          // ------------------------------- 
          // static_instructions_Oz : 20
          // dynamic_instructions_Oz : 20
          // ------------------------------- 

          int _len_pxmitframe0 = 1;
          struct xmit_frame * pxmitframe = (struct xmit_frame *) malloc(_len_pxmitframe0*sizeof(struct xmit_frame));
          for(int _i0 = 0; _i0 < _len_pxmitframe0; _i0++) {
              pxmitframe[_i0].attrib.encrypt = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.icv_len = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.bswenc = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.pktlen = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.iv_len = ((-2 * (next_i()%2)) + 1) * next_i();
          pxmitframe[_i0].attrib.hdrlen = ((-2 * (next_i()%2)) + 1) * next_i();
        
        
          }
        
          long benchRet = xmitframe_need_length(pxmitframe);
          printf("%ld\n", benchRet); 
          free(pxmitframe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
