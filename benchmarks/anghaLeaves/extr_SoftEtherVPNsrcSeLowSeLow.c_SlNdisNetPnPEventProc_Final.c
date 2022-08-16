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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int IsEnumCompleted; } ;
struct TYPE_5__ {scalar_t__ NetEvent; } ;
struct TYPE_6__ {TYPE_1__ NetPnPEvent; } ;
typedef  int /*<<< orphan*/  SL_ADAPTER ;
typedef  TYPE_2__ NET_PNP_EVENT_NOTIFICATION ;
typedef  int /*<<< orphan*/  NDIS_STATUS ;
typedef  scalar_t__ NDIS_HANDLE ;

/* Variables and functions */
 int /*<<< orphan*/  NDIS_STATUS_SUCCESS ; 
 scalar_t__ NetEventBindsComplete ; 
 TYPE_3__* sl ; 

NDIS_STATUS SlNdisNetPnPEventProc(NDIS_HANDLE protocol_binding_context, NET_PNP_EVENT_NOTIFICATION *net_pnp_event)
{
	SL_ADAPTER *a = (SL_ADAPTER *)protocol_binding_context;

	if (net_pnp_event != NULL)
	{
		if (net_pnp_event->NetPnPEvent.NetEvent == NetEventBindsComplete)
		{
			sl->IsEnumCompleted = true;
		}
	}

	return NDIS_STATUS_SUCCESS;
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
          long protocol_binding_context = 100;
          int _len_net_pnp_event0 = 1;
          struct TYPE_6__ * net_pnp_event = (struct TYPE_6__ *) malloc(_len_net_pnp_event0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_net_pnp_event0; _i0++) {
            net_pnp_event[_i0].NetPnPEvent.NetEvent = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SlNdisNetPnPEventProc(protocol_binding_context,net_pnp_event);
          printf("%d\n", benchRet); 
          free(net_pnp_event);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long protocol_binding_context = 10;
          int _len_net_pnp_event0 = 100;
          struct TYPE_6__ * net_pnp_event = (struct TYPE_6__ *) malloc(_len_net_pnp_event0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_net_pnp_event0; _i0++) {
            net_pnp_event[_i0].NetPnPEvent.NetEvent = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = SlNdisNetPnPEventProc(protocol_binding_context,net_pnp_event);
          printf("%d\n", benchRet); 
          free(net_pnp_event);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
