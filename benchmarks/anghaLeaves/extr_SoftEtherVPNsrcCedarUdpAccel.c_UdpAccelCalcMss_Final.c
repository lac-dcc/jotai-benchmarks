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
typedef  int /*<<< orphan*/  USHORT ;
typedef  int /*<<< orphan*/  UINT64 ;
typedef  int UINT ;
struct TYPE_3__ {int PlainTextMode; scalar_t__ IsIPv6; } ;
typedef  TYPE_1__ UDP_ACCEL ;
typedef  int /*<<< orphan*/  UCHAR ;

/* Variables and functions */
 int MTU_FOR_PPPOE ; 
 scalar_t__ UDP_ACCELERATION_PACKET_IV_SIZE ; 

UINT UdpAccelCalcMss(UDP_ACCEL *a)
{
	UINT ret;

	// Validate arguments
	if (a == NULL)
	{
		return 0;
	}

	ret = MTU_FOR_PPPOE;

	// IPv4
	if (a->IsIPv6)
	{
		ret -= 40;
	}
	else
	{
		ret -= 20;
	}

	// UDP
	ret -= 8;

	if (a->PlainTextMode == false)
	{
		// IV
		ret -= UDP_ACCELERATION_PACKET_IV_SIZE;
	}

	// Cookie
	ret -= sizeof(UINT);

	// My Tick
	ret -= sizeof(UINT64);

	// Your Tick
	ret -= sizeof(UINT64);

	// Size
	ret -= sizeof(USHORT);

	// Compress Flag
	ret -= sizeof(UCHAR);

	if (a->PlainTextMode == false)
	{
		// Verify
		ret -= UDP_ACCELERATION_PACKET_IV_SIZE;
	}

	// Ethernet header (communication packets)
	ret -= 14;

	// IPv4 Header (communication packets)
	ret -= 20;

	// TCP header (communication packet)
	ret -= 20;

	return ret;
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
          int _len_a0 = 1;
          struct TYPE_3__ * a = (struct TYPE_3__ *) malloc(_len_a0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].PlainTextMode = ((-2 * (next_i()%2)) + 1) * next_i();
        a[_i0].IsIPv6 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = UdpAccelCalcMss(a);
          printf("%d\n", benchRet); 
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
