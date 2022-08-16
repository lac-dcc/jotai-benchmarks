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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {unsigned long remote_msgqueue_pa; } ;
struct TYPE_4__ {TYPE_1__ sn2; } ;
struct xpc_channel {TYPE_2__ sn; } ;
typedef  enum xp_retval { ____Placeholder_xp_retval } xp_retval ;

/* Variables and functions */
 int xpSuccess ; 

__attribute__((used)) static enum xp_retval
xpc_save_remote_msgqueue_pa_sn2(struct xpc_channel *ch,
				unsigned long msgqueue_pa)
{
	ch->sn.sn2.remote_msgqueue_pa = msgqueue_pa;
	return xpSuccess;
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
          unsigned long msgqueue_pa = 100;
          int _len_ch0 = 1;
          struct xpc_channel * ch = (struct xpc_channel *) malloc(_len_ch0*sizeof(struct xpc_channel));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].sn.sn2.remote_msgqueue_pa = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum xp_retval benchRet = xpc_save_remote_msgqueue_pa_sn2(ch,msgqueue_pa);
          free(ch);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned long msgqueue_pa = 10;
          int _len_ch0 = 100;
          struct xpc_channel * ch = (struct xpc_channel *) malloc(_len_ch0*sizeof(struct xpc_channel));
          for(int _i0 = 0; _i0 < _len_ch0; _i0++) {
            ch[_i0].sn.sn2.remote_msgqueue_pa = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum xp_retval benchRet = xpc_save_remote_msgqueue_pa_sn2(ch,msgqueue_pa);
          free(ch);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
