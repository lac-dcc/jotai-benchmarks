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
       0            big-arr\n\
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
typedef  struct TYPE_19__   TYPE_9__ ;
typedef  struct TYPE_18__   TYPE_8__ ;
typedef  struct TYPE_17__   TYPE_7__ ;
typedef  struct TYPE_16__   TYPE_6__ ;
typedef  struct TYPE_15__   TYPE_5__ ;
typedef  struct TYPE_14__   TYPE_4__ ;
typedef  struct TYPE_13__   TYPE_3__ ;
typedef  struct TYPE_12__   TYPE_2__ ;
typedef  struct TYPE_11__   TYPE_1__ ;

/* Type definitions */
typedef  int ULONG ;
struct TYPE_17__ {int /*<<< orphan*/  IPv4Address; } ;
struct TYPE_18__ {TYPE_7__ Address; } ;
struct TYPE_15__ {int /*<<< orphan*/  IPv4Address; } ;
struct TYPE_16__ {TYPE_5__ Address; } ;
struct TYPE_13__ {int /*<<< orphan*/  IPv4Address; } ;
struct TYPE_14__ {TYPE_3__ Address; } ;
struct TYPE_11__ {int /*<<< orphan*/  IPv4Address; } ;
struct TYPE_12__ {TYPE_1__ Address; } ;
struct TYPE_19__ {TYPE_8__ PointToPoint; TYPE_6__ Broadcast; TYPE_4__ Netmask; TYPE_2__ Unicast; } ;
typedef  int /*<<< orphan*/ * PULONG ;
typedef  TYPE_9__* PIP_INTERFACE ;
typedef  int /*<<< orphan*/  NTSTATUS ;

/* Variables and functions */
#define  ADE_ADDRMASK 131 
#define  ADE_BROADCAST 130 
#define  ADE_POINTOPOINT 129 
#define  ADE_UNICAST 128 
 int /*<<< orphan*/  STATUS_SUCCESS ; 
 int /*<<< orphan*/  STATUS_UNSUCCESSFUL ; 

NTSTATUS GetInterfaceIPv4Address( PIP_INTERFACE Interface,
				  ULONG TargetType,
				  PULONG Address ) {
    switch( TargetType ) {
    case ADE_UNICAST:
	*Address = Interface->Unicast.Address.IPv4Address;
	break;

    case ADE_ADDRMASK:
	*Address = Interface->Netmask.Address.IPv4Address;
	break;

    case ADE_BROADCAST:
	*Address = Interface->Broadcast.Address.IPv4Address;
	break;

    case ADE_POINTOPOINT:
	*Address = Interface->PointToPoint.Address.IPv4Address;
	break;

    default:
	return STATUS_UNSUCCESSFUL;
    }

    return STATUS_SUCCESS;
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

    // big-arr
    case 0:
    {
          int TargetType = 255;
          int _len_Interface0 = 1;
          struct TYPE_19__ * Interface = (struct TYPE_19__ *) malloc(_len_Interface0*sizeof(struct TYPE_19__));
          for(int _i0 = 0; _i0 < _len_Interface0; _i0++) {
            Interface->PointToPoint.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        Interface->Broadcast.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        Interface->Netmask.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
        Interface->Unicast.Address.IPv4Address = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Address0 = 65025;
          int * Address = (int *) malloc(_len_Address0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Address0; _i0++) {
            Address[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = GetInterfaceIPv4Address(Interface,TargetType,Address);
          printf("%d\n", benchRet); 
          free(Interface);
          free(Address);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
