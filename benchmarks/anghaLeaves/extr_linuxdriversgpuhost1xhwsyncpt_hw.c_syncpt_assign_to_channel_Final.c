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
struct host1x_syncpt {int dummy; } ;
struct host1x_channel {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static void syncpt_assign_to_channel(struct host1x_syncpt *sp,
				  struct host1x_channel *ch)
{
#if HOST1X_HW >= 6
	struct host1x *host = sp->host;

	if (!host->hv_regs)
		return;

	host1x_sync_writel(host,
			   HOST1X_SYNC_SYNCPT_CH_APP_CH(ch ? ch->id : 0xff),
			   HOST1X_SYNC_SYNCPT_CH_APP(sp->id));
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
          int _len_sp0 = 1;
          struct host1x_syncpt * sp = (struct host1x_syncpt *) malloc(_len_sp0*sizeof(struct host1x_syncpt));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ch0 = 1;
          struct host1x_channel * ch = (struct host1x_channel *) malloc(_len_ch0*sizeof(struct host1x_channel));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          syncpt_assign_to_channel(sp,ch);
          free(sp);
          free(ch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
