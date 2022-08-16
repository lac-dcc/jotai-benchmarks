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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ UINT64 ;
typedef  scalar_t__ UINT ;
struct TYPE_5__ {scalar_t__ MaxLoggedPacketsPerMinuteStartTick; scalar_t__ CurrentNumPackets; scalar_t__ L3SwitchMode; scalar_t__ LinkModeClient; scalar_t__ LinkModeServer; scalar_t__ BridgeMode; scalar_t__ SecureNATMode; TYPE_1__* Policy; } ;
struct TYPE_4__ {scalar_t__ NoBroadcastLimiter; } ;
typedef  TYPE_2__ SESSION ;

/* Variables and functions */

bool CheckMaxLoggedPacketsPerMinute(SESSION *s, UINT max_packets, UINT64 now)
{
	UINT64 minute = 60 * 1000;
	// Validate arguments
	if (s == NULL || max_packets == 0)
	{
		return true;
	}

	if ((s->Policy != NULL && s->Policy->NoBroadcastLimiter) ||
		s->SecureNATMode || s->BridgeMode || s->LinkModeServer || s->LinkModeClient ||
		s->L3SwitchMode)
	{
		return true;
	}

	if (s->MaxLoggedPacketsPerMinuteStartTick == 0 ||
		((s->MaxLoggedPacketsPerMinuteStartTick + minute) <= now))
	{
		s->MaxLoggedPacketsPerMinuteStartTick = now;
		s->CurrentNumPackets = 0;
	}

	s->CurrentNumPackets++;
	if (s->CurrentNumPackets > max_packets)
	{
		return false;
	}

	return true;
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
          long max_packets = 100;
          long now = 100;
          int _len_s0 = 1;
          struct TYPE_5__ * s = (struct TYPE_5__ *) malloc(_len_s0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].MaxLoggedPacketsPerMinuteStartTick = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].CurrentNumPackets = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].L3SwitchMode = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].LinkModeClient = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].LinkModeServer = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].BridgeMode = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].SecureNATMode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_s__i0__Policy0 = 1;
          s[_i0].Policy = (struct TYPE_4__ *) malloc(_len_s__i0__Policy0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_s__i0__Policy0; _j0++) {
            s[_i0].Policy->NoBroadcastLimiter = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = CheckMaxLoggedPacketsPerMinute(s,max_packets,now);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].Policy);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
