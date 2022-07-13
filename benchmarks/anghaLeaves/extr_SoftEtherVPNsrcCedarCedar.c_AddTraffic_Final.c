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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_6__ {scalar_t__ UnicastCount; scalar_t__ UnicastBytes; scalar_t__ BroadcastCount; scalar_t__ BroadcastBytes; } ;
struct TYPE_8__ {TYPE_2__ Send; TYPE_1__ Recv; } ;
typedef  TYPE_3__ TRAFFIC ;

/* Variables and functions */

void AddTraffic(TRAFFIC *dst, TRAFFIC *diff)
{
	// Validate arguments
	if (dst == NULL || diff == NULL)
	{
		return;
	}

	dst->Recv.BroadcastBytes += diff->Recv.BroadcastBytes;
	dst->Recv.BroadcastCount += diff->Recv.BroadcastCount;
	dst->Recv.UnicastBytes += diff->Recv.UnicastBytes;
	dst->Recv.UnicastCount += diff->Recv.UnicastCount;

	dst->Send.BroadcastBytes += diff->Send.BroadcastBytes;
	dst->Send.BroadcastCount += diff->Send.BroadcastCount;
	dst->Send.UnicastBytes += diff->Send.UnicastBytes;
	dst->Send.UnicastCount += diff->Send.UnicastCount;
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
          int _len_dst0 = 1;
          struct TYPE_8__ * dst = (struct TYPE_8__ *) malloc(_len_dst0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].Send.UnicastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Send.UnicastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Send.BroadcastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Send.BroadcastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Recv.UnicastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Recv.UnicastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Recv.BroadcastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Recv.BroadcastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_diff0 = 1;
          struct TYPE_8__ * diff = (struct TYPE_8__ *) malloc(_len_diff0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_diff0; _i0++) {
            diff[_i0].Send.UnicastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Send.UnicastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Send.BroadcastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Send.BroadcastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Recv.UnicastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Recv.UnicastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Recv.BroadcastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Recv.BroadcastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          AddTraffic(dst,diff);
          free(dst);
          free(diff);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dst0 = 65025;
          struct TYPE_8__ * dst = (struct TYPE_8__ *) malloc(_len_dst0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].Send.UnicastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Send.UnicastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Send.BroadcastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Send.BroadcastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Recv.UnicastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Recv.UnicastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Recv.BroadcastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Recv.BroadcastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_diff0 = 65025;
          struct TYPE_8__ * diff = (struct TYPE_8__ *) malloc(_len_diff0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_diff0; _i0++) {
            diff[_i0].Send.UnicastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Send.UnicastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Send.BroadcastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Send.BroadcastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Recv.UnicastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Recv.UnicastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Recv.BroadcastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Recv.BroadcastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          AddTraffic(dst,diff);
          free(dst);
          free(diff);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dst0 = 100;
          struct TYPE_8__ * dst = (struct TYPE_8__ *) malloc(_len_dst0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0].Send.UnicastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Send.UnicastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Send.BroadcastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Send.BroadcastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Recv.UnicastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Recv.UnicastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Recv.BroadcastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        dst[_i0].Recv.BroadcastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_diff0 = 100;
          struct TYPE_8__ * diff = (struct TYPE_8__ *) malloc(_len_diff0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_diff0; _i0++) {
            diff[_i0].Send.UnicastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Send.UnicastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Send.BroadcastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Send.BroadcastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Recv.UnicastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Recv.UnicastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Recv.BroadcastCount = ((-2 * (next_i()%2)) + 1) * next_i();
        diff[_i0].Recv.BroadcastBytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          AddTraffic(dst,diff);
          free(dst);
          free(diff);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
