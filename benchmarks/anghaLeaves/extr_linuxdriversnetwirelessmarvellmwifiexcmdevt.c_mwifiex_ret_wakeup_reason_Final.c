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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct mwifiex_private {int dummy; } ;
struct host_cmd_ds_wakeup_reason {int /*<<< orphan*/  wakeup_reason; } ;
struct TYPE_3__ {int /*<<< orphan*/  wakeup_reason; } ;
struct TYPE_4__ {TYPE_1__ hs_wakeup_reason; } ;
struct host_cmd_ds_command {TYPE_2__ params; } ;

/* Variables and functions */

int mwifiex_ret_wakeup_reason(struct mwifiex_private *priv,
			      struct host_cmd_ds_command *resp,
			      struct host_cmd_ds_wakeup_reason *wakeup_reason)
{
	wakeup_reason->wakeup_reason =
		resp->params.hs_wakeup_reason.wakeup_reason;

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
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resp0 = 1;
          struct host_cmd_ds_command * resp = (struct host_cmd_ds_command *) malloc(_len_resp0*sizeof(struct host_cmd_ds_command));
          for(int _i0 = 0; _i0 < _len_resp0; _i0++) {
            resp[_i0].params.hs_wakeup_reason.wakeup_reason = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wakeup_reason0 = 1;
          struct host_cmd_ds_wakeup_reason * wakeup_reason = (struct host_cmd_ds_wakeup_reason *) malloc(_len_wakeup_reason0*sizeof(struct host_cmd_ds_wakeup_reason));
          for(int _i0 = 0; _i0 < _len_wakeup_reason0; _i0++) {
            wakeup_reason[_i0].wakeup_reason = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mwifiex_ret_wakeup_reason(priv,resp,wakeup_reason);
          printf("%d\n", benchRet); 
          free(priv);
          free(resp);
          free(wakeup_reason);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
