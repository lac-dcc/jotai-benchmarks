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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct pucan_error_msg {int /*<<< orphan*/  rx_err_cnt; int /*<<< orphan*/  tx_err_cnt; } ;
struct TYPE_2__ {int /*<<< orphan*/  rxerr; int /*<<< orphan*/  txerr; } ;
struct peak_canfd_priv {TYPE_1__ bec; } ;

/* Variables and functions */

__attribute__((used)) static int pucan_handle_error(struct peak_canfd_priv *priv,
			      struct pucan_error_msg *msg)
{
	priv->bec.txerr = msg->tx_err_cnt;
	priv->bec.rxerr = msg->rx_err_cnt;

	return 0;
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
          int _len_priv0 = 1;
          struct peak_canfd_priv * priv = (struct peak_canfd_priv *) malloc(_len_priv0*sizeof(struct peak_canfd_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].bec.rxerr = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].bec.txerr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 1;
          struct pucan_error_msg * msg = (struct pucan_error_msg *) malloc(_len_msg0*sizeof(struct pucan_error_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].rx_err_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].tx_err_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pucan_handle_error(priv,msg);
          printf("%d\n", benchRet); 
          free(priv);
          free(msg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct peak_canfd_priv * priv = (struct peak_canfd_priv *) malloc(_len_priv0*sizeof(struct peak_canfd_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].bec.rxerr = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].bec.txerr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 65025;
          struct pucan_error_msg * msg = (struct pucan_error_msg *) malloc(_len_msg0*sizeof(struct pucan_error_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].rx_err_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].tx_err_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pucan_handle_error(priv,msg);
          printf("%d\n", benchRet); 
          free(priv);
          free(msg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct peak_canfd_priv * priv = (struct peak_canfd_priv *) malloc(_len_priv0*sizeof(struct peak_canfd_priv));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].bec.rxerr = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].bec.txerr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msg0 = 100;
          struct pucan_error_msg * msg = (struct pucan_error_msg *) malloc(_len_msg0*sizeof(struct pucan_error_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg[_i0].rx_err_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        msg[_i0].tx_err_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pucan_handle_error(priv,msg);
          printf("%d\n", benchRet); 
          free(priv);
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
