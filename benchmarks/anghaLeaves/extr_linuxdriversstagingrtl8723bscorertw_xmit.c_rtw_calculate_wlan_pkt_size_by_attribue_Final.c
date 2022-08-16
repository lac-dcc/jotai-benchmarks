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
typedef  scalar_t__ u32 ;
typedef  int /*<<< orphan*/  u16 ;
struct pkt_attrib {scalar_t__ encrypt; int /*<<< orphan*/  icv_len; scalar_t__ bswenc; scalar_t__ pktlen; scalar_t__ iv_len; scalar_t__ hdrlen; } ;

/* Variables and functions */
 scalar_t__ SNAP_SIZE ; 
 scalar_t__ _TKIP_ ; 

u32 rtw_calculate_wlan_pkt_size_by_attribue(struct pkt_attrib *pattrib)
{
	u32 len = 0;

	len = pattrib->hdrlen + pattrib->iv_len; /*  WLAN Header and IV */
	len += SNAP_SIZE + sizeof(u16); /*  LLC */
	len += pattrib->pktlen;
	if (pattrib->encrypt == _TKIP_)
		len += 8; /*  MIC */
	len += ((pattrib->bswenc) ? pattrib->icv_len : 0); /*  ICV */

	return len;
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
          int _len_pattrib0 = 1;
          struct pkt_attrib * pattrib = (struct pkt_attrib *) malloc(_len_pattrib0*sizeof(struct pkt_attrib));
          for(int _i0 = 0; _i0 < _len_pattrib0; _i0++) {
            pattrib[_i0].encrypt = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].icv_len = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].bswenc = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].pktlen = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].iv_len = ((-2 * (next_i()%2)) + 1) * next_i();
        pattrib[_i0].hdrlen = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          long benchRet = rtw_calculate_wlan_pkt_size_by_attribue(pattrib);
          printf("%ld\n", benchRet); 
          free(pattrib);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
