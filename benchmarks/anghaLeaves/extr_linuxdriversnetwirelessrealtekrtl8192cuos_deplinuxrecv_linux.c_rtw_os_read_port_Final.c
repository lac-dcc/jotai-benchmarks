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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct recv_priv {int dummy; } ;
struct recv_buf {int dummy; } ;
struct TYPE_3__ {struct recv_priv recvpriv; } ;
typedef  TYPE_1__ _adapter ;

/* Variables and functions */

void rtw_os_read_port(_adapter *padapter, struct recv_buf *precvbuf)
{
	struct recv_priv *precvpriv = &padapter->recvpriv;

#ifdef CONFIG_USB_HCI

	precvbuf->ref_cnt--;

	//free skb in recv_buf
	rtw_skb_free(precvbuf->pskb);

	precvbuf->pskb = NULL;
	precvbuf->reuse = _FALSE;

	if(precvbuf->irp_pending == _FALSE)
	{
		rtw_read_port(padapter, precvpriv->ff_hwaddr, 0, (unsigned char *)precvbuf);
	}


#endif
#ifdef CONFIG_SDIO_HCI
		precvbuf->pskb = NULL;
#endif

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
          int _len_padapter0 = 1;
          struct TYPE_3__ * padapter = (struct TYPE_3__ *) malloc(_len_padapter0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_padapter0; _i0++) {
            padapter[_i0].recvpriv.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_precvbuf0 = 1;
          struct recv_buf * precvbuf = (struct recv_buf *) malloc(_len_precvbuf0*sizeof(struct recv_buf));
          for(int _i0 = 0; _i0 < _len_precvbuf0; _i0++) {
            precvbuf[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtw_os_read_port(padapter,precvbuf);
          free(padapter);
          free(precvbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
